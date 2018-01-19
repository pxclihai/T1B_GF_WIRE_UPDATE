#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#define CHECK_BOX_COLUMN 3
#define ID_COLUMN    0
class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableModel(QObject *parent = 0);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    void setHorizontalHeader(const QStringList& headers);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;


    void setData(const QVector<QStringList>& data);
    bool setData(const QModelIndex &index, const QVariant &value, int role);//for checkbox data

    QVector<QStringList>& DataVector() {return m_data;}
    ~TableModel(void);

signals:

public slots:

private:
    QStringList m_HorizontalHeader;
    QVector<QStringList> m_data;

};

#endif // TABLEMODEL_H
