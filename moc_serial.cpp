/****************************************************************************
** Meta object code from reading C++ file 'serial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialLog_t {
    QByteArrayData data[13];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SerialLog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SerialLog_t qt_meta_stringdata_SerialLog = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 4),
QT_MOC_LITERAL(4, 27, 12),
QT_MOC_LITERAL(5, 40, 5),
QT_MOC_LITERAL(6, 46, 13),
QT_MOC_LITERAL(7, 60, 14),
QT_MOC_LITERAL(8, 75, 13),
QT_MOC_LITERAL(9, 89, 12),
QT_MOC_LITERAL(10, 102, 10),
QT_MOC_LITERAL(11, 113, 9),
QT_MOC_LITERAL(12, 123, 7)
    },
    "SerialLog\0getRpmData\0\0data\0getSpeedData\0"
    "data1\0openSerialLog\0closeSerialLog\0"
    "readSerialLog\0setspeedData\0setrpmData\0"
    "speedData\0rpmData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       4,    1,   52,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x08,
       7,    0,   56,    2, 0x08,
       8,    0,   57,    2, 0x08,
       9,    1,   58,    2, 0x08,
      10,    1,   61,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095003,
      12, QMetaType::Int, 0x00095003,

       0        // eod
};

void SerialLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialLog *_t = static_cast<SerialLog *>(_o);
        switch (_id) {
        case 0: _t->getRpmData((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->getSpeedData((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->openSerialLog(); break;
        case 3: _t->closeSerialLog(); break;
        case 4: _t->readSerialLog(); break;
        case 5: _t->setspeedData((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->setrpmData((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialLog::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialLog::getRpmData)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialLog::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialLog::getSpeedData)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SerialLog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SerialLog.data,
      qt_meta_data_SerialLog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SerialLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLog.stringdata))
        return static_cast<void*>(const_cast< SerialLog*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SerialLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = speedData(); break;
        case 1: *reinterpret_cast< int*>(_v) = rpmData(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setspeedData(*reinterpret_cast< int*>(_v)); break;
        case 1: setrpmData(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialLog::getRpmData(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialLog::getSpeedData(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
