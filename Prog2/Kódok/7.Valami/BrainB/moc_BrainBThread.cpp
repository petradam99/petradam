/****************************************************************************
** Meta object code from reading C++ file 'BrainBThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BrainBThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrainBThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrainBThread_t {
    QByteArrayData data[8];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BrainBThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BrainBThread_t qt_meta_stringdata_BrainBThread = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 13),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 5),
QT_MOC_LITERAL(4, 34, 1),
QT_MOC_LITERAL(5, 36, 1),
QT_MOC_LITERAL(6, 38, 11),
QT_MOC_LITERAL(7, 50, 1)
    },
    "BrainBThread\0heroesChanged\0\0image\0x\0"
    "y\0endAndStats\0t\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrainBThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x05,
       6,    1,   31,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void BrainBThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrainBThread *_t = static_cast<BrainBThread *>(_o);
        switch (_id) {
        case 0: _t->heroesChanged((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 1: _t->endAndStats((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrainBThread::*_t)(const QImage & , const int & , const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrainBThread::heroesChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BrainBThread::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrainBThread::endAndStats)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject BrainBThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BrainBThread.data,
      qt_meta_data_BrainBThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *BrainBThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrainBThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrainBThread.stringdata))
        return static_cast<void*>(const_cast< BrainBThread*>(this));
    return QThread::qt_metacast(_clname);
}

int BrainBThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BrainBThread::heroesChanged(const QImage & _t1, const int & _t2, const int & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BrainBThread::endAndStats(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
