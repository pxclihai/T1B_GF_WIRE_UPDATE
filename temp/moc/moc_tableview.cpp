/****************************************************************************
** Meta object code from reading C++ file 'tableview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tableview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TableViewDeal_t {
    QByteArrayData data[10];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableViewDeal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableViewDeal_t qt_meta_stringdata_TableViewDeal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TableViewDeal"
QT_MOC_LITERAL(1, 14, 7), // "addNode"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "id"
QT_MOC_LITERAL(4, 26, 7), // "delNode"
QT_MOC_LITERAL(5, 34, 12), // "updateProBar"
QT_MOC_LITERAL(6, 47, 4), // "size"
QT_MOC_LITERAL(7, 52, 7), // "maxsize"
QT_MOC_LITERAL(8, 60, 12), // "updateStatus"
QT_MOC_LITERAL(9, 73, 6) // "status"

    },
    "TableViewDeal\0addNode\0\0id\0delNode\0"
    "updateProBar\0size\0maxsize\0updateStatus\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableViewDeal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    3,   40,    2, 0x0a /* Public */,
       8,    2,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    3,    6,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    3,    9,

       0        // eod
};

void TableViewDeal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableViewDeal *_t = static_cast<TableViewDeal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->delNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateProBar((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 3: _t->updateStatus((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TableViewDeal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TableViewDeal.data,
      qt_meta_data_TableViewDeal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableViewDeal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableViewDeal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableViewDeal.stringdata0))
        return static_cast<void*>(const_cast< TableViewDeal*>(this));
    return QObject::qt_metacast(_clname);
}

int TableViewDeal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
