/****************************************************************************
** Meta object code from reading C++ file 'customplotitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OctoboticsApp/Source/customplotitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customplotitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomPlotItem_t {
    QByteArrayData data[22];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomPlotItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomPlotItem_t qt_meta_stringdata_CustomPlotItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomPlotItem"
QT_MOC_LITERAL(1, 15, 7), // "saveImg"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "myImage"
QT_MOC_LITERAL(4, 32, 12), // "printRandoms"
QT_MOC_LITERAL(5, 45, 5), // "lower"
QT_MOC_LITERAL(6, 51, 5), // "upper"
QT_MOC_LITERAL(7, 57, 9), // "graph_rpt"
QT_MOC_LITERAL(8, 67, 20), // "updateCustomPlotSize"
QT_MOC_LITERAL(9, 88, 14), // "onCustomReplot"
QT_MOC_LITERAL(10, 103, 16), // "realtimeDataSlot"
QT_MOC_LITERAL(11, 120, 7), // "trigImg"
QT_MOC_LITERAL(12, 128, 1), // "k"
QT_MOC_LITERAL(13, 130, 8), // "saveImgk"
QT_MOC_LITERAL(14, 139, 1), // "m"
QT_MOC_LITERAL(15, 141, 9), // "graphCall"
QT_MOC_LITERAL(16, 151, 15), // "QVector<double>"
QT_MOC_LITERAL(17, 167, 1), // "v"
QT_MOC_LITERAL(18, 169, 9), // "graph_arr"
QT_MOC_LITERAL(19, 179, 7), // "int64_t"
QT_MOC_LITERAL(20, 187, 7), // "x_range"
QT_MOC_LITERAL(21, 195, 14) // "initCustomPlot"

    },
    "CustomPlotItem\0saveImg\0\0myImage\0"
    "printRandoms\0lower\0upper\0graph_rpt\0"
    "updateCustomPlotSize\0onCustomReplot\0"
    "realtimeDataSlot\0trigImg\0k\0saveImgk\0"
    "m\0graphCall\0QVector<double>\0v\0graph_arr\0"
    "int64_t\0x_range\0initCustomPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomPlotItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   67,    2, 0x0a /* Public */,
       7,    0,   72,    2, 0x0a /* Public */,
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      13,    1,   79,    2, 0x0a /* Public */,
      15,    3,   82,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 19,   17,   18,   20,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void CustomPlotItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomPlotItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { int _r = _t->printRandoms((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->graph_rpt(); break;
        case 3: _t->updateCustomPlotSize(); break;
        case 4: _t->onCustomReplot(); break;
        case 5: _t->realtimeDataSlot(); break;
        case 6: _t->trigImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->saveImgk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->graphCall((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 9: _t->initCustomPlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomPlotItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomPlotItem::saveImg)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomPlotItem::staticMetaObject = { {
    &QQuickPaintedItem::staticMetaObject,
    qt_meta_stringdata_CustomPlotItem.data,
    qt_meta_data_CustomPlotItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomPlotItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomPlotItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomPlotItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int CustomPlotItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CustomPlotItem::saveImg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
