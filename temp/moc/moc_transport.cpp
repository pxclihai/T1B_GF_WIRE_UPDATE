/****************************************************************************
** Meta object code from reading C++ file 'transport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../transport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GFmachine_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GFmachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GFmachine_t qt_meta_stringdata_GFmachine = {
    {
QT_MOC_LITERAL(0, 0, 9) // "GFmachine"

    },
    "GFmachine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GFmachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GFmachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GFmachine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GFmachine.data,
      qt_meta_data_GFmachine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GFmachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GFmachine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GFmachine.stringdata0))
        return static_cast<void*>(const_cast< GFmachine*>(this));
    return QObject::qt_metacast(_clname);
}

int GFmachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Transctrl_t {
    QByteArrayData data[10];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Transctrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Transctrl_t qt_meta_stringdata_Transctrl = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Transctrl"
QT_MOC_LITERAL(1, 10, 3), // "Log"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 3), // "msg"
QT_MOC_LITERAL(4, 19, 7), // "addNode"
QT_MOC_LITERAL(5, 27, 2), // "id"
QT_MOC_LITERAL(6, 30, 7), // "delNode"
QT_MOC_LITERAL(7, 38, 12), // "updateProBar"
QT_MOC_LITERAL(8, 51, 4), // "size"
QT_MOC_LITERAL(9, 56, 7) // "maxsize"

    },
    "Transctrl\0Log\0\0msg\0addNode\0id\0delNode\0"
    "updateProBar\0size\0maxsize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Transctrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    3,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    5,    8,    9,

       0        // eod
};

void Transctrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Transctrl *_t = static_cast<Transctrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->delNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateProBar((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Transctrl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Transctrl::Log)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Transctrl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Transctrl::addNode)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Transctrl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Transctrl::delNode)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Transctrl::*_t)(qint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Transctrl::updateProBar)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Transctrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Transctrl.data,
      qt_meta_data_Transctrl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Transctrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Transctrl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Transctrl.stringdata0))
        return static_cast<void*>(const_cast< Transctrl*>(this));
    return QObject::qt_metacast(_clname);
}

int Transctrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Transctrl::Log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Transctrl::addNode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Transctrl::delNode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Transctrl::updateProBar(qint64 _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
