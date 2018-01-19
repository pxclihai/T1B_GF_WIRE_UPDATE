#ifndef FRMNETTOOL_H
#define FRMNETTOOL_H

#include <QWidget>

class QTcpSocket;
class TcpServer;
class QUdpSocket;
class Transctrl;//**********
class SendFileThread;
class TableViewDeal;

namespace Ui
{
class frmNetTool;
}

class frmNetTool : public QWidget
{
    Q_OBJECT

public:
    explicit frmNetTool(QWidget *parent = 0);
    ~frmNetTool();
    //全都暴露了---!!
    TableViewDeal *tv;
    QTcpSocket *tcpClient;
    TcpServer  *tcpServer;
    QUdpSocket *udpServer;
    Transctrl  *transCtrl;
private:
    Ui::frmNetTool *ui;

    int msgMaxCount;
    int countTcpServer;
    int countTcpClient;
    int countUdpServer;

    QStringList keys;           //模拟设备回复数据key
    QStringList values;         //模拟设备回复数据value



    SendFileThread *sendfileThread;

    QTimer *timerTcpClient;
    QTimer *timerTcpServer;
    QTimer *timerUdpServer;


signals:

    void sendUpdateFile( frmNetTool *frmNetTool );
public slots:
    void appeedLog(QString);
    void updateSendPBar(qint64 size,qint64 maxSize);
private slots:


    void initForm();
    void initConfig();
    void saveConfig();
    void readSendData();        //读取发送配置文件数据
    void readDeviceData();      //读取设备转发文件数据

    void sendDataTcpServer();
    void sendDataTcpServer(QString data);
    void sendDataTcpServer(QByteArray buffer);//用来发送bin
    void sendDataTcpServer(QString ip, int port, QString data);



    void sendDataTcpClient();
    void sendDataTcpClient(QString data);

    void sendDataUdpServer();
    void sendDataUdpServer(QString data);
    void sendDataUdpServer(QString ip, int port, QString data);

    void appendTcpClient(quint8 type, QString msg);
    void appendTcpServer(quint8 type, QString msg);
    void appendUdpServer(quint8 type, QString msg);

private slots:
    void tcpClientReadData();
    void tcpClientReadError();

    void clientReadData(int, QString ip, int port, QByteArray data);
    void clientConnect(int, QString ip, int port);
    void clientDisConnect(int, QString ip, int port);

    void udpServerReadData();
    void udpServerReadError();

private slots:
    void on_btnTcpListen_clicked();
    void on_btnClearTcpServer_clicked();

    void on_btnTcpConnect_clicked();
    void on_btnClearTcpClient_clicked();

    void on_btnUdpListen_clicked();
    void on_btnClearUdpServer_clicked();
    void on_btnSendTcpServer_clicked();
    void on_btnSendUpdate_clicked();
    void on_btnSelect_clicked();
    void on_txtDataTcpServer_destroyed();
    void on_pbarSendData_valueChanged(int value);
};

#endif // FRMNETTOOL_H
