/****************************************************************************
** Meta object code from reading C++ file 'qdatetimeaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../axis/datetimeaxis/qdatetimeaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatetimeaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QDateTimeAxis_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QDateTimeAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QDateTimeAxis_t qt_meta_stringdata_QtCharts__QDateTimeAxis = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QtCharts::QDateTimeAxis"
QT_MOC_LITERAL(1, 24, 10), // "minChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "min"
QT_MOC_LITERAL(4, 40, 10), // "maxChanged"
QT_MOC_LITERAL(5, 51, 3), // "max"
QT_MOC_LITERAL(6, 55, 12), // "rangeChanged"
QT_MOC_LITERAL(7, 68, 13), // "formatChanged"
QT_MOC_LITERAL(8, 82, 6), // "format"
QT_MOC_LITERAL(9, 89, 16), // "tickCountChanged"
QT_MOC_LITERAL(10, 106, 4), // "tick"
QT_MOC_LITERAL(11, 111, 9) // "tickCount"

    },
    "QtCharts::QDateTimeAxis\0minChanged\0\0"
    "min\0maxChanged\0max\0rangeChanged\0"
    "formatChanged\0format\0tickCountChanged\0"
    "tick\0tickCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QDateTimeAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QDateTime,    5,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    3,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,
       3, QMetaType::QDateTime, 0x00495103,
       5, QMetaType::QDateTime, 0x00495103,
       8, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       4,
       0,
       1,
       3,

       0        // eod
};

void QtCharts::QDateTimeAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDateTimeAxis *_t = static_cast<QDateTimeAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->maxChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 3: _t->formatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->tickCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDateTimeAxis::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDateTimeAxis::minChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDateTimeAxis::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDateTimeAxis::maxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDateTimeAxis::*_t)(QDateTime , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDateTimeAxis::rangeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDateTimeAxis::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDateTimeAxis::formatChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDateTimeAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDateTimeAxis::tickCountChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDateTimeAxis *_t = static_cast<QDateTimeAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tickCount(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->min(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->max(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->format(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDateTimeAxis *_t = static_cast<QDateTimeAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTickCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMin(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setMax(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: _t->setFormat(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QDateTimeAxis::staticMetaObject = {
    { &QAbstractAxis::staticMetaObject, qt_meta_stringdata_QtCharts__QDateTimeAxis.data,
      qt_meta_data_QtCharts__QDateTimeAxis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QDateTimeAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QDateTimeAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QDateTimeAxis.stringdata0))
        return static_cast<void*>(const_cast< QDateTimeAxis*>(this));
    return QAbstractAxis::qt_metacast(_clname);
}

int QtCharts::QDateTimeAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QDateTimeAxis::minChanged(QDateTime _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QDateTimeAxis::maxChanged(QDateTime _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QDateTimeAxis::rangeChanged(QDateTime _t1, QDateTime _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QDateTimeAxis::formatChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QDateTimeAxis::tickCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
