#include "sendfilethread.h"
#include <QDebug>
#include "myhelper.h"
#include "tcpserver.h"
#include "transport.h"
#include "sendfilethread.h"
#include "tableview.h"
#include "frmnettool.h"
SendFileThread::SendFileThread(QObject* par) : QThread(par)
,m_runCount(20)
{

}

SendFileThread::~SendFileThread()
{
    qDebug() << "ThreadFromQThread::~ThreadFromQThread()";
}

void SendFileThread::run()
{

    emit Log(QString("--------发送线程正常start---------"));
    while(1)
    {
        sleep(1);//must be
        if(this->isUpdate == 1)
        {
           QByteArray readyUpdataNode =  tv->getChooseUpdate();
           for(int i=0;i<readyUpdataNode.length();i++)
           {
             Update(readyUpdataNode.at(i));
           }
           emit Log(QString("-------升级结束---------"));

           this->isUpdate = false;
        }
    }
}

void SendFileThread::UpdateBin(frmNetTool *frmNetTool)
{
    //传递

    this->updateFile = frmNetTool->tcpServer->fileName;
    this->transCtrl  = frmNetTool->transCtrl;
    this->tcpServer  = frmNetTool->tcpServer;
    this->tv         = frmNetTool->tv;
    isUpdate   = true;



}

//有必要可以修改成可选择不同的网关进行升级
void SendFileThread::Update(int nodeID)
{
    int maxIdx = 0;
    emit updateStatus(nodeID,QString("正在升级中"));

    QFile file(updateFile);
    if(!file.open(QIODevice::ReadOnly)) {
        emit Log("文件不能打开进行读取");
         qDebug("不能打开%s",updateFile.toStdString().data());
        return;
    }
    else {
       maxIdx = file.size()/1024;
       emit Log(QString("总共发包数:%1").arg(maxIdx));
    }
    qint64 size;
    QByteArray block = transCtrl->CalUpdateCommad(nodeID,0);// 发送升级指令;

    QString name = myHelper::GetFileNameWithExtension(updateFile);

    emit Log(QString("发送升级指令到%1").arg(nodeID));

    size = block.size();
    if(transCtrl->GFNode.contains(nodeID) == false)
    {
       emit Log(QString("%1光伏节点不存在").arg(nodeID));
        return;
    }

    tcpServer->clientLists.at(0)->write(block.data(), block.length());
    if(!tcpServer->clientLists.at(0)->waitForBytesWritten(-1)) {

        emit Log(QString("%1升级指令发送不成功").arg(nodeID));
        return;
    }
    GFmachine *GFNode =  transCtrl->GFNode.value(nodeID);

    for(int i=0;i<10;i++)//可优化成定时回调
    {
        bool res = GFNode->isUpate();
        if(res == true)
        {
            emit Log(QString("%1号光伏机器人返回升级就绪指令").arg(nodeID));
            break;
        }
        else
        {
            emit Log(QString("%1号光伏机器人等待接受升级就绪指令").arg(nodeID));
            msleep(2);

        }
        if(i ==9)
        {
            emit Log(QString("升级失败"));
            emit updateStatus(nodeID,"升级失败");
            return ;
        }
          sleep(1);
    }
    sleep(1);
    int idx = 0;
    int recvStatus;
        block = transCtrl->CalUpdateBin( nodeID, idx, file.read(1024) );
        tcpServer->clientLists.at(0)->write(block.data(), block.length());
        if(!tcpServer->clientLists.at(0)->waitForBytesWritten(-1)) {
          emit Log(QString("%1发送错误").arg(nodeID));
            return;
        }

    do {
       // size = block.size();
       // emit Log(QString("当前发送数据大小%1字节").arg(size));
        GFNode->RecvStaus();//清楚状态

        for(int i=0;i<10;i++)//可优化成定时回调
        {
            if(GFNode->isRecv == 0x0 ) {
                msleep(2);
                emit Log(QString("%1等待收到包应答第%2包").arg(nodeID).arg(idx));//
            }
            else {

                break;
            }
            if(i ==9){
                emit Log(QString("升级失败"));
                emit updateStatus(nodeID,"升级失败");
                return ;
            }
              sleep(1);
        }
        recvStatus = GFNode->RecvStaus();
        if(recvStatus == 0x02)
        {
            emit Log(QString("%1准备发送第%2包").arg(nodeID).arg(idx));
            idx++;
            block.clear();
            block = transCtrl->CalUpdateBin( nodeID, idx, file.read(1024));

            tcpServer->clientLists.at(0)->write(block.data(), block.length());
            if(!tcpServer->clientLists.at(0)->waitForBytesWritten(-1)) {
              emit Log(QString("%1发送错误").arg(nodeID));
                return;
            }
        }
        else if(recvStatus == 0x01)
        {
            if(GFNode->RecvErrorIdx == idx+1)
            {
                idx++;
                block.clear();
                block = transCtrl->CalUpdateBin( nodeID, idx, file.read(1024));
                emit Log(QString("-----漏掉错误发送------").arg(nodeID).arg(idx));
            }
            else
            {
                emit Log(QString("%1接受错误重新发送：%2").arg(nodeID).arg(idx));
                tcpServer->clientLists.at(0)->write(block.data(), block.length());
                if(!tcpServer->clientLists.at(0)->waitForBytesWritten(-1)) {
                    emit Log(QString("%1发送错误").arg(nodeID));
                    return;
                }
            }
        }
        else
        {
         emit Log(QString("没有包%1").arg(recvStatus));
        }
         emit updateProBar(nodeID,idx,file.size()/1024);

    }while(idx < (maxIdx+1));


    for(int i=0;i<10;i++)//可优化成定时回调
    {
        if(GFNode->isRecv == 3)
        {
            emit Log(QString("%1《升级完成》%2包").arg(nodeID).arg(idx));//
            emit updateStatus(nodeID,"升级完成");
            break;
        }
        else
        {

            QByteArray block = transCtrl->CalUpdateCommad(nodeID,0xFF);// 发送升级指令
            tcpServer->clientLists.at(0)->write(block.data(), block.length());
            if(!tcpServer->clientLists.at(0)->waitForBytesWritten(-1)) {
              emit Log(QString("%1发送错误").arg(1));
                return;
            }
            msleep(1);
            emit Log(QString("%1等待成功升级%2包").arg(nodeID).arg(idx));//

        }
        if(i ==9)
        {
            emit Log(QString("升级失败"));
            emit updateStatus(nodeID,"升级失败");
            return ;
        }
          sleep(1);
    }

}
