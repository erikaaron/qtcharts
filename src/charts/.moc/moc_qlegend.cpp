/****************************************************************************
** Meta object code from reading C++ file 'qlegend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../legend/qlegend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QLegend_t {
    QByteArrayData data[19];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QLegend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QLegend_t qt_meta_stringdata_QtCharts__QLegend = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtCharts::QLegend"
QT_MOC_LITERAL(1, 18, 24), // "backgroundVisibleChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "visible"
QT_MOC_LITERAL(4, 52, 12), // "colorChanged"
QT_MOC_LITERAL(5, 65, 5), // "color"
QT_MOC_LITERAL(6, 71, 18), // "borderColorChanged"
QT_MOC_LITERAL(7, 90, 11), // "fontChanged"
QT_MOC_LITERAL(8, 102, 4), // "font"
QT_MOC_LITERAL(9, 107, 17), // "labelColorChanged"
QT_MOC_LITERAL(10, 125, 21), // "reverseMarkersChanged"
QT_MOC_LITERAL(11, 147, 14), // "reverseMarkers"
QT_MOC_LITERAL(12, 162, 19), // "showToolTipsChanged"
QT_MOC_LITERAL(13, 182, 12), // "showToolTips"
QT_MOC_LITERAL(14, 195, 9), // "alignment"
QT_MOC_LITERAL(15, 205, 13), // "Qt::Alignment"
QT_MOC_LITERAL(16, 219, 17), // "backgroundVisible"
QT_MOC_LITERAL(17, 237, 11), // "borderColor"
QT_MOC_LITERAL(18, 249, 10) // "labelColor"

    },
    "QtCharts::QLegend\0backgroundVisibleChanged\0"
    "\0visible\0colorChanged\0color\0"
    "borderColorChanged\0fontChanged\0font\0"
    "labelColorChanged\0reverseMarkersChanged\0"
    "reverseMarkers\0showToolTipsChanged\0"
    "showToolTips\0alignment\0Qt::Alignment\0"
    "backgroundVisible\0borderColor\0labelColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QLegend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      12,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QFont,    8,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Bool, 0x00495103,
       5, QMetaType::QColor, 0x00495103,
      17, QMetaType::QColor, 0x00495103,
       8, QMetaType::QFont, 0x00495103,
      18, QMetaType::QColor, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QtCharts::QLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLegend *_t = static_cast<QLegend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->borderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->fontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 4: _t->labelColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->reverseMarkersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showToolTipsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLegend::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::backgroundVisibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::borderColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(QFont );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::fontChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::labelColorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::reverseMarkersChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QLegend::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLegend::showToolTipsChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLegend *_t = static_cast<QLegend *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isBackgroundVisible(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 4: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->labelColor(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->reverseMarkers(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showToolTips(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLegend *_t = static_cast<QLegend *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 1: _t->setBackgroundVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 5: _t->setLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setReverseMarkers(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setShowToolTips(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::QLegend::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_QtCharts__QLegend.data,
      qt_meta_data_QtCharts__QLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QLegend.stringdata0))
        return static_cast<void*>(const_cast< QLegend*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int QtCharts::QLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
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
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QLegend::backgroundVisibleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QLegend::colorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QLegend::borderColorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QLegend::fontChanged(QFont _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QLegend::labelColorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QLegend::reverseMarkersChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCharts::QLegend::showToolTipsChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
