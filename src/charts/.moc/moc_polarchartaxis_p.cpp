/****************************************************************************
** Meta object code from reading C++ file 'polarchartaxis_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../axis/polarchartaxis_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polarchartaxis_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__PolarChartAxis_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PolarChartAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PolarChartAxis_t qt_meta_stringdata_QtCharts__PolarChartAxis = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtCharts::PolarChartAxis"
QT_MOC_LITERAL(1, 25, 24), // "handleShadesBrushChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "brush"
QT_MOC_LITERAL(4, 57, 22), // "handleShadesPenChanged"
QT_MOC_LITERAL(5, 80, 3) // "pen"

    },
    "QtCharts::PolarChartAxis\0"
    "handleShadesBrushChanged\0\0brush\0"
    "handleShadesPenChanged\0pen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PolarChartAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QBrush,    3,
    QMetaType::Void, QMetaType::QPen,    5,

       0        // eod
};

void QtCharts::PolarChartAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PolarChartAxis *_t = static_cast<PolarChartAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleShadesBrushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 1: _t->handleShadesPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCharts::PolarChartAxis::staticMetaObject = {
    { &ChartAxisElement::staticMetaObject, qt_meta_stringdata_QtCharts__PolarChartAxis.data,
      qt_meta_data_QtCharts__PolarChartAxis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::PolarChartAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PolarChartAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PolarChartAxis.stringdata0))
        return static_cast<void*>(const_cast< PolarChartAxis*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< PolarChartAxis*>(this));
    return ChartAxisElement::qt_metacast(_clname);
}

int QtCharts::PolarChartAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartAxisElement::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
