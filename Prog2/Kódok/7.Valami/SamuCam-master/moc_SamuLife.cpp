/****************************************************************************
** Meta object code from reading C++ file 'SamuLife.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SamuLife.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SamuLife.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SamuLife_t {
    QByteArrayData data[7];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SamuLife_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SamuLife_t qt_meta_stringdata_SamuLife = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SamuLife"
QT_MOC_LITERAL(1, 9, 11), // "updateCells"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "int**"
QT_MOC_LITERAL(4, 28, 10), // "updateFace"
QT_MOC_LITERAL(5, 39, 7), // "QImage*"
QT_MOC_LITERAL(6, 47, 4) // "face"

    },
    "SamuLife\0updateCells\0\0int**\0updateFace\0"
    "QImage*\0face"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SamuLife[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x0a /* Public */,
       4,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void SamuLife::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SamuLife *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCells((*reinterpret_cast< int**(*)>(_a[1])),(*reinterpret_cast< int**(*)>(_a[2])),(*reinterpret_cast< int**(*)>(_a[3])),(*reinterpret_cast< int**(*)>(_a[4]))); break;
        case 1: _t->updateFace((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SamuLife::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_SamuLife.data,
    qt_meta_data_SamuLife,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SamuLife::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SamuLife::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SamuLife.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SamuLife::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
