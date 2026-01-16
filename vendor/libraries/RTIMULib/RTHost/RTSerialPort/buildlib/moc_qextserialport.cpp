/****************************************************************************
** Meta object code from reading C++ file 'qextserialport.h'
**
** Created: Sun Jun 3 19:01:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qextserialport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qextserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QextSerialPort[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       2,   84, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   40,   15,   15, 0x0a,
      71,   66,   15,   15, 0x0a,
      95,   15,   15,   15, 0x0a,
     121,   15,   15,   15, 0x0a,
     147,   15,   15,   15, 0x0a,
     169,   15,   15,   15, 0x0a,
     195,   15,   15,   15, 0x0a,
     220,   15,   15,   15, 0x0a,
     241,  237,   15,   15, 0x0a,
     254,   15,   15,   15, 0x2a,
     263,  237,   15,   15, 0x0a,
     276,   15,   15,   15, 0x2a,
     285,   15,   15,   15, 0x08,

 // properties: name, type, flags
     306,  298, 0x0a095103,
     325,  315, 0x0009510b,

 // enums: name, flags, count, data
     315, 0x0,    2,   94,

 // enum data: key, value
     335, uint(QextSerialPort::Polling),
     343, uint(QextSerialPort::EventDriven),

       0        // eod
};

static const char qt_meta_stringdata_QextSerialPort[] = {
    "QextSerialPort\0\0status\0dsrChanged(bool)\0"
    "name\0setPortName(QString)\0mode\0"
    "setQueryMode(QueryMode)\0"
    "setBaudRate(BaudRateType)\0"
    "setDataBits(DataBitsType)\0"
    "setParity(ParityType)\0setStopBits(StopBitsType)\0"
    "setFlowControl(FlowType)\0setTimeout(long)\0"
    "set\0setDtr(bool)\0setDtr()\0setRts(bool)\0"
    "setRts()\0_q_canRead()\0QString\0portName\0"
    "QueryMode\0queryMode\0Polling\0EventDriven\0"
};

void QextSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QextSerialPort *_t = static_cast<QextSerialPort *>(_o);
        switch (_id) {
        case 0: _t->dsrChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPortName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setQueryMode((*reinterpret_cast< QueryMode(*)>(_a[1]))); break;
        case 3: _t->setBaudRate((*reinterpret_cast< BaudRateType(*)>(_a[1]))); break;
        case 4: _t->setDataBits((*reinterpret_cast< DataBitsType(*)>(_a[1]))); break;
        case 5: _t->setParity((*reinterpret_cast< ParityType(*)>(_a[1]))); break;
        case 6: _t->setStopBits((*reinterpret_cast< StopBitsType(*)>(_a[1]))); break;
        case 7: _t->setFlowControl((*reinterpret_cast< FlowType(*)>(_a[1]))); break;
        case 8: _t->setTimeout((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 9: _t->setDtr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setDtr(); break;
        case 11: _t->setRts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setRts(); break;
        case 13: _t->d_func()->_q_canRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QextSerialPort::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QextSerialPort::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QextSerialPort,
      qt_meta_data_QextSerialPort, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QextSerialPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QextSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QextSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QextSerialPort))
        return static_cast<void*>(const_cast< QextSerialPort*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QextSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = portName(); break;
        case 1: *reinterpret_cast< QueryMode*>(_v) = queryMode(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPortName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setQueryMode(*reinterpret_cast< QueryMode*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QextSerialPort::dsrChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
