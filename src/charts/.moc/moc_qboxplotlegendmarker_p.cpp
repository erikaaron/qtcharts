/****************************************************************************
** Meta object code from reading C++ file 'qboxplotlegendmarker_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../legend/qboxplotlegendmarker_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qboxplotlegendmarker_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate_t qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtCharts::QBoxPlotLegendMarke..."
QT_MOC_LITERAL(1, 38, 7), // "updated"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "QtCharts::QBoxPlotLegendMarkerPrivate\0"
    "updated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QBoxPlotLegendMarkerPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtCharts::QBoxPlotLegendMarkerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBoxPlotLegendMarkerPrivate *_t = static_cast<QBoxPlotLegendMarkerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QBoxPlotLegendMarkerPrivate::staticMetaObject = {
    { &QLegendMarkerPrivate::staticMetaObject, qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate.data,
      qt_meta_data_QtCharts__QBoxPlotLegendMarkerPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QBoxPlotLegendMarkerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QBoxPlotLegendMarkerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QBoxPlotLegendMarkerPrivate.stringdata0))
        return static_cast<void*>(const_cast< QBoxPlotLegendMarkerPrivate*>(this));
    return QLegendMarkerPrivate::qt_metacast(_clname);
}

int QtCharts::QBoxPlotLegendMarkerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLegendMarkerPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
