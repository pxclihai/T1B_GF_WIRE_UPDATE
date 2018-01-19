#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QTableView>

class TableModel;
class ProgressBarDelegate;
class Transctrl;
class TableViewDeal: public QObject
{
     Q_OBJECT
public:
    explicit TableViewDeal(QTableView *parent = 0);
    TableModel *tableModel() {return m_model;}
    QTableView *tableViewDeal;
   QByteArray getChooseUpdate();
    ~TableViewDeal();

signals:

public slots:
    void addNode(int id);
    void delNode(int id);
    void updateProBar(qint64 id,qint64 size,qint64 maxsize);
    void updateStatus(qint64 id,QString status);

private:
    void iniData();

private:

    QVector<QStringList> dataNode;
    TableModel *m_model;
    ProgressBarDelegate *m_progressBarDelegate;

};

#endif // TABLEVIEW_H
