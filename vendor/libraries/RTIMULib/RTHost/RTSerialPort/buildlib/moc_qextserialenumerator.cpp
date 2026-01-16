/****************************************************************************
** Meta object code from reading C++ file 'qextserialenumerator.h'
**
** Created: Sun Jun 3 19:01:58 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qextserialenumerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qextserialenumerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QextSerialEnumerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      58,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QextSerialEnumerator[] = {
    "QextSerialEnumerator\0\0info\0"
    "deviceDiscovered(QextPortInfo)\0"
    "deviceRemoved(QextPortInfo)\0"
};

void QextSerialEnumerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QextSerialEnumerator *_t = static_cast<QextSerialEnumerator *>(_o);
        switch (_id) {
        case 0: _t->deviceDiscovered((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QextSerialEnumerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QextSerialEnumerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QextSerialEnumerator,
      qt_meta_data_QextSerialEnumerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QextSerialEnumerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QextSerialEnumerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QextSerialEnumerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QextSerialEnumerator))
        return static_cast<void*>(const_cast< QextSerialEnumerator*>(this));
    return QObject::qt_metacast(_clname);
}

int QextSerialEnumerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QextSerialEnumerator::deviceDiscovered(const QextPortInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QextSerialEnumerator::deviceRemoved(const QextPortInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
