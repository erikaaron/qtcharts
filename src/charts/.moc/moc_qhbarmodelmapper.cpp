/****************************************************************************
** Meta object code from reading C++ file 'qhbarmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../barchart/qhbarmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhbarmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QHBarModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QHBarModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QHBarModelMapper_t qt_meta_stringdata_QtCharts__QHBarModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QtCharts::QHBarModelMapper"
QT_MOC_LITERAL(1, 27, 14), // "seriesReplaced"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "modelReplaced"
QT_MOC_LITERAL(4, 57, 21), // "firstBarSetRowChanged"
QT_MOC_LITERAL(5, 79, 20), // "lastBarSetRowChanged"
QT_MOC_LITERAL(6, 100, 18), // "firstColumnChanged"
QT_MOC_LITERAL(7, 119, 18), // "columnCountChanged"
QT_MOC_LITERAL(8, 138, 6), // "series"
QT_MOC_LITERAL(9, 145, 19), // "QAbstractBarSeries*"
QT_MOC_LITERAL(10, 165, 5), // "model"
QT_MOC_LITERAL(11, 171, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(12, 191, 14), // "firstBarSetRow"
QT_MOC_LITERAL(13, 206, 13), // "lastBarSetRow"
QT_MOC_LITERAL(14, 220, 11), // "firstColumn"
QT_MOC_LITERAL(15, 232, 11) // "columnCount"

    },
    "QtCharts::QHBarModelMapper\0seriesReplaced\0"
    "\0modelReplaced\0firstBarSetRowChanged\0"
    "lastBarSetRowChanged\0firstColumnChanged\0"
    "columnCountChanged\0series\0QAbstractBarSeries*\0"
    "model\0QAbstractItemModel*\0firstBarSetRow\0"
    "lastBarSetRow\0firstColumn\0columnCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QHBarModelMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QtCharts::QHBarModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHBarModelMapper *_t = static_cast<QHBarModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesReplaced(); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->firstBarSetRowChanged(); break;
        case 3: _t->lastBarSetRowChanged(); break;
        case 4: _t->firstColumnChanged(); break;
        case 5: _t->columnCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::seriesReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::modelReplaced)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::firstBarSetRowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::lastBarSetRowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::firstColumnChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHBarModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHBarModelMapper::columnCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHBarModelMapper *_t = static_cast<QHBarModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractBarSeries**>(_v) = _t->series(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->firstBarSetRow(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lastBarSetRow(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->firstColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHBarModelMapper *_t = static_cast<QHBarModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeries(*reinterpret_cast< QAbstractBarSeries**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setFirstBarSetRow(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLastBarSetRow(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QHBarModelMapper::staticMetaObject = {
    { &QBarModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QHBarModelMapper.data,
      qt_meta_data_QtCharts__QHBarModelMapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QHBarModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QHBarModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QHBarModelMapper.stringdata0))
        return static_cast<void*>(const_cast< QHBarModelMapper*>(this));
    return QBarModelMapper::qt_metacast(_clname);
}

int QtCharts::QHBarModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBarModelMapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QHBarModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtCharts::QHBarModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QtCharts::QHBarModelMapper::firstBarSetRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QtCharts::QHBarModelMapper::lastBarSetRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QtCharts::QHBarModelMapper::firstColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QtCharts::QHBarModelMapper::columnCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
