#ifndef TRANSCTRL_H
#define TRANSCTRL_H


#include <QTcpSocket>
#include <QTcpServer>
#include <QList>
#include <QObject>
class GFmachine: public QObject
{
    Q_OBJECT
    public:
      GFmachine(uint16_t setID);
      uint16_t id = 0;
      uint8_t command;
      uint8_t data_len;
      QByteArray rev_data;

      bool UpdateFlag = false;
      uint8_t isRecv =0  ;
      int  RecvErrorIdx = 0;
      bool isUpate();
      uint8_t RecvStaus(  );
      bool isReadyUpdate;
      bool isLive;
    private:
};
class Transctrl : public QObject
{
Q_OBJECT
public:
    Transctrl();

    void recvpack(QByteArray data);

    QByteArray CalUpdateCommad(uint16_t machineID, int binSize);
    QByteArray CalUpdateOver(uint16_t machineID);
    QByteArray CalUpdateBin(uint16_t machineID,int idx,QByteArray bufdata);

    bool sendpack(QByteArray data);
    QMap<int,GFmachine*> GFNode;
    ushort usMBCRC16(uchar *pucFrame, int usLen);


private:
     uint8_t  RxBuffer[50];
     uint8_t  _data_len = 0;
     uint8_t  _data_cnt = 0;
     uint8_t     state = 0;

     uint16_t GFnodeCount;
     void unpack(uint8_t data);
     void dataAnalysis(uint8_t *data,int num);
     void UpdateUnpack(uint8_t *data,int num);
     bool isExist(uint16_t id);
signals:
     void Log(QString msg);
     void addNode(int id);
     void delNode(int id);
     void updateProBar(qint64 id,qint64 size,qint64 maxsize);
};

#endif // TRANSPORT_H
