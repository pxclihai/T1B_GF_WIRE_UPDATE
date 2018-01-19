/****************************************************************************
** Meta object code from reading C++ file 'sendfilethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sendfilethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendfilethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendFileThread_t {
    QByteArrayData data[19];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendFileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendFileThread_t qt_meta_stringdata_SendFileThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendFileThread"
QT_MOC_LITERAL(1, 15, 7), // "message"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "info"
QT_MOC_LITERAL(4, 29, 8), // "progress"
QT_MOC_LITERAL(5, 38, 7), // "present"
QT_MOC_LITERAL(6, 46, 3), // "Log"
QT_MOC_LITERAL(7, 50, 3), // "msg"
QT_MOC_LITERAL(8, 54, 14), // "updateSendPBar"
QT_MOC_LITERAL(9, 69, 4), // "size"
QT_MOC_LITERAL(10, 74, 7), // "maxSize"
QT_MOC_LITERAL(11, 82, 12), // "updateProBar"
QT_MOC_LITERAL(12, 95, 2), // "id"
QT_MOC_LITERAL(13, 98, 7), // "maxsize"
QT_MOC_LITERAL(14, 106, 12), // "updateStatus"
QT_MOC_LITERAL(15, 119, 6), // "status"
QT_MOC_LITERAL(16, 126, 9), // "UpdateBin"
QT_MOC_LITERAL(17, 136, 11), // "frmNetTool*"
QT_MOC_LITERAL(18, 148, 10) // "frmNetTool"

    },
    "SendFileThread\0message\0\0info\0progress\0"
    "present\0Log\0msg\0updateSendPBar\0size\0"
    "maxSize\0updateProBar\0id\0maxsize\0"
    "updateStatus\0status\0UpdateBin\0frmNetTool*\0"
    "frmNetTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendFileThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    2,   58,    2, 0x06 /* Public */,
      11,    3,   63,    2, 0x06 /* Public */,
      14,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,   12,    9,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   12,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void SendFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendFileThread *_t = static_cast<SendFileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->updateSendPBar((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->updateProBar((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 5: _t->updateStatus((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->UpdateBin((*reinterpret_cast< frmNetTool*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendFileThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SendFileThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SendFileThread::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::Log)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SendFileThread::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::updateSendPBar)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SendFileThread::*_t)(qint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::updateProBar)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SendFileThread::*_t)(qint64 , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFileThread::updateStatus)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject SendFileThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SendFileThread.data,
      qt_meta_data_SendFileThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendFileThread.stringdata0))
        return static_cast<void*>(const_cast< SendFileThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SendFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SendFileThread::message(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendFileThread::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SendFileThread::Log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SendFileThread::updateSendPBar(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SendFileThread::updateProBar(qint64 _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SendFileThread::updateStatus(qint64 _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
