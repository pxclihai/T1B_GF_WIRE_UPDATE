#ifndef SENDFILETHREAD_H
#define SENDFILETHREAD_H

#include <QThread>
class QTcpSocket;
class TcpServer;
class Transctrl;//**********
class frmNetTool;
class TableViewDeal;
class SendFileThread : public QThread
{
    Q_OBJECT
signals:
    void message(const QString& info);
    void progress(int present);

public slots:

    void UpdateBin(frmNetTool *frmNetTool );
signals:
     void Log(QString msg);
     void updateSendPBar(qint64 size,qint64 maxSize);
     void updateProBar(qint64 id,qint64 size,qint64 maxsize);
     void updateStatus(qint64 id,QString status);
public:
    QTcpSocket *tcpClient;
    TcpServer  *tcpServer;
    Transctrl  *transCtrl;
    TableViewDeal *tv;
    uint16_t updateID;
    QString  updateFile;
    bool     isUpdate = false;

    SendFileThread(QObject* par);
    ~SendFileThread();
    void setSomething();
    void getSomething();
    void setRunCount(int count);
    void run();
    void doSomething();
private:
    int m_runCount;
    void Update(int nodeID);
};


#endif // SENDFILETHREAD_H
