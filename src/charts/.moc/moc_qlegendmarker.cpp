/****************************************************************************
** Meta object code from reading C++ file 'qlegendmarker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../legend/qlegendmarker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlegendmarker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QLegendMarker_t {
    QByteArrayData data[23];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QLegendMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QLegendMarker_t qt_meta_stringdata_QtCharts__QLegendMarker = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QtCharts::QLegendMarker"
QT_MOC_LITERAL(1, 24, 7), // "clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "hovered"
QT_MOC_LITERAL(4, 41, 6), // "status"
QT_MOC_LITERAL(5, 48, 12), // "labelChanged"
QT_MOC_LITERAL(6, 61, 17), // "labelBrushChanged"
QT_MOC_LITERAL(7, 79, 11), // "fontChanged"
QT_MOC_LITERAL(8, 91, 10), // "penChanged"
QT_MOC_LITERAL(9, 102, 12), // "brushChanged"
QT_MOC_LITERAL(10, 115, 14), // "visibleChanged"
QT_MOC_LITERAL(11, 130, 5), // "label"
QT_MOC_LITERAL(12, 136, 10), // "labelBrush"
QT_MOC_LITERAL(13, 147, 4), // "font"
QT_MOC_LITERAL(14, 152, 3), // "pen"
QT_MOC_LITERAL(15, 156, 5), // "brush"
QT_MOC_LITERAL(16, 162, 7), // "visible"
QT_MOC_LITERAL(17, 170, 16), // "LegendMarkerType"
QT_MOC_LITERAL(18, 187, 20), // "LegendMarkerTypeArea"
QT_MOC_LITERAL(19, 208, 19), // "LegendMarkerTypeBar"
QT_MOC_LITERAL(20, 228, 19), // "LegendMarkerTypePie"
QT_MOC_LITERAL(21, 248, 18), // "LegendMarkerTypeXY"
QT_MOC_LITERAL(22, 267, 23) // "LegendMarkerTypeBoxPlot"

    },
    "QtCharts::QLegendMarker\0clicked\0\0"
    "hovered\0status\0labelChanged\0"
    "labelBrushChanged\0fontChanged\0penChanged\0"
    "brushChanged\0visibleChanged\0label\0"
    "labelBrush\0font\0pen\0brush\0visible\0"
    "LegendMarkerType\0LegendMarkerTypeArea\0"
    "LegendMarkerTypeBar\0LegendMarkerTypePie\0"
    "LegendMarkerTypeXY\0LegendMarkerTypeBoxPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QLegendMarker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   64, // properties
       1,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,
       9,    0,   62,    2, 0x06 /* Public */,
      10,    0,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QBrush, 0x00495103,
      13, QMetaType::QFont, 0x00495103,
      14, QMetaType::QPen, 0x00495103,
      15, QMetaType::QBrush, 0x00495103,
      16, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,
       7,

 // enums: name, flags, count, data
      17, 0x0,    5,   92,

 // enum data: key, value
      18, uint(QtCharts::QLegendMarker::LegendMarkerTypeArea),
      19, uint(QtCharts::QLegendMarker::LegendMarkerTypeBar),
      20, uint(QtCharts::QLegendMarker::LegendMarkerTypePie),
      21, uint(QtCharts::QLegendMarker::LegendMarkerTypeXY),
      22, uint(QtCharts::QLegendMarker::LegendMarkerTypeBoxPlot),

       0        // eod
};

void QtCharts::QLegendMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLegendMarker *_t = static_cast<QLegendMarker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->labelChanged(); break;
        case 3: _t->labelBrushChanged(); break;
        case 4: _t->fontChanged(); break;
        case 5: _t->penChanged(); break;
        case 6: _t->brushChanged(); break;
        case 7: _t->visibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::labelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::labelBrushChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::fontChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::penChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::brushChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QLegendMarker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegendMarker::visibleChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLegendMarker *_t = static_cast<QLegendMarker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->labelBrush(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLegendMarker *_t = static_cast<QLegendMarker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLabelBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QLegendMarker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QLegendMarker.data,
      qt_meta_data_QtCharts__QLegendMarker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QLegendMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QLegendMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QLegendMarker.stringdata0))
        return static_cast<void*>(const_cast< QLegendMarker*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCharts::QLegendMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QtCharts::QLegendMarker::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtCharts::QLegendMarker::hovered(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QLegendMarker::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QtCharts::QLegendMarker::labelBrushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QtCharts::QLegendMarker::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QtCharts::QLegendMarker::penChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QtCharts::QLegendMarker::brushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QtCharts::QLegendMarker::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
