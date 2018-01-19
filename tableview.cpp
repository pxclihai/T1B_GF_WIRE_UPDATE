#include "tableview.h"

#include "tablemodel.h"
#include "progressbardelegate.h"
#include "transport.h"
#include "qtimer.h"
TableViewDeal::TableViewDeal(QTableView *parent)
{
    tableViewDeal = parent;
    iniData();
}

TableViewDeal::~TableViewDeal()
{
    delete m_model;
}

void TableViewDeal::iniData()
{
    m_model = new TableModel();
    tableViewDeal->setModel(m_model);
    QStringList headers;
    headers << "Id" << "状态"<<"进度条"<<"选择";
    m_model->setHorizontalHeader(headers);

    m_model->setData(dataNode);

    m_progressBarDelegate = new ProgressBarDelegate(tableViewDeal);
    tableViewDeal->setItemDelegate(m_progressBarDelegate);
    emit m_model->layoutChanged();
    tableViewDeal->setColumnWidth(1, 150);
    tableViewDeal->setColumnWidth(2, 200);
}
void TableViewDeal::addNode(int id)
{

    dataNode.append(QStringList() << QString("%1号").arg(id) << "上线"<<"0"<<"0");
    m_model->setData(dataNode);
    emit m_model->layoutChanged();
}
void TableViewDeal::delNode(int id)
{

  //  data.QStringList() << id << "上线");
   m_model->setData(dataNode);
   emit m_model->layoutChanged();
}
void TableViewDeal::updateProBar(qint64 id,qint64 size,qint64 maxSize)
{
     QVector<QStringList>::iterator iter;
     int value = ( (double)size/(double)maxSize) *100;
     if(value >100)
     {
         value = 100;
     }
     QString comp;
     for (iter=dataNode.begin();iter!=dataNode.end();iter++){

          comp = QString("%1号").arg(id);
          if( iter->at(0) == comp)
          {
              iter->replace(2,QString("%1").arg(value));
          }
     }

     m_model->setData(dataNode);
     emit m_model->layoutChanged();
}
void TableViewDeal::updateStatus(qint64 id,QString status)
{

    QVector<QStringList>::iterator iter;
    QString comp;
    for (iter=dataNode.begin();iter!=dataNode.end();iter++)
    {
         comp = QString("%1号").arg(id);
         if( iter->at(0) == comp)
         {
             iter->replace(1,status);
         }
    }
    m_model->setData(dataNode);
    emit m_model->layoutChanged();
}

QByteArray TableViewDeal::getChooseUpdate()
{
    QVector<QStringList>::iterator iter;
    QByteArray readyChoose;

    if(dataNode.isEmpty())
    {
        return readyChoose;
        qDebug("节点为空");
    }
    dataNode = m_model->DataVector();//从模型中获取数据注意！！

    for (iter=dataNode.begin(); iter!=dataNode.end(); iter++)
    {
         if( iter->at(CHECK_BOX_COLUMN) == "1")
         {
             QString id = iter->at(0).toStdString().data();
             readyChoose.append(id.remove("号").toInt());
         }

    }
    return readyChoose;
}
