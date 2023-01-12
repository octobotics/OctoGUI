/****************************************************************************
** Meta object code from reading C++ file 'rosthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OctoboticsApp/Source/rosthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RosThread_t {
    QByteArrayData data[40];
    char stringdata0[540];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosThread_t qt_meta_stringdata_RosThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RosThread"
QT_MOC_LITERAL(1, 10, 15), // "armToolCallback"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 12), // "commCallback"
QT_MOC_LITERAL(5, 46, 12), // "battCallback"
QT_MOC_LITERAL(6, 59, 11), // "velCallback"
QT_MOC_LITERAL(7, 71, 18), // "current_vel_linear"
QT_MOC_LITERAL(8, 90, 19), // "current_vel_angular"
QT_MOC_LITERAL(9, 110, 10), // "max_linear"
QT_MOC_LITERAL(10, 121, 11), // "max_angular"
QT_MOC_LITERAL(11, 133, 10), // "utCallback"
QT_MOC_LITERAL(12, 144, 2), // "ut"
QT_MOC_LITERAL(13, 147, 9), // "fCallback"
QT_MOC_LITERAL(14, 157, 5), // "force"
QT_MOC_LITERAL(15, 163, 11), // "armCallback"
QT_MOC_LITERAL(16, 175, 4), // "base"
QT_MOC_LITERAL(17, 180, 8), // "shoulder"
QT_MOC_LITERAL(18, 189, 5), // "elbow"
QT_MOC_LITERAL(19, 195, 4), // "tool"
QT_MOC_LITERAL(20, 200, 14), // "toggleCallback"
QT_MOC_LITERAL(21, 215, 4), // "flag"
QT_MOC_LITERAL(22, 220, 15), // "crawlerCallback"
QT_MOC_LITERAL(23, 236, 9), // "frontLeft"
QT_MOC_LITERAL(24, 246, 10), // "frontRight"
QT_MOC_LITERAL(25, 257, 10), // "backrRight"
QT_MOC_LITERAL(26, 268, 8), // "backLeft"
QT_MOC_LITERAL(27, 277, 7), // "addLine"
QT_MOC_LITERAL(28, 285, 7), // "newLine"
QT_MOC_LITERAL(29, 293, 22), // "std_msgs::Int8ConstPtr"
QT_MOC_LITERAL(30, 316, 3), // "msg"
QT_MOC_LITERAL(31, 320, 24), // "std_msgs::Int8::ConstPtr"
QT_MOC_LITERAL(32, 345, 27), // "std_msgs::Float32::ConstPtr"
QT_MOC_LITERAL(33, 373, 30), // "octo_qt::ang_lin_arr::ConstPtr"
QT_MOC_LITERAL(34, 404, 30), // "octo_qt::tool_status::Request&"
QT_MOC_LITERAL(35, 435, 3), // "req"
QT_MOC_LITERAL(36, 439, 31), // "octo_qt::tool_status::Response&"
QT_MOC_LITERAL(37, 471, 3), // "res"
QT_MOC_LITERAL(38, 475, 31), // "octo_qt::motor_status::Request&"
QT_MOC_LITERAL(39, 507, 32) // "octo_qt::motor_status::Response&"

    },
    "RosThread\0armToolCallback\0\0value\0"
    "commCallback\0battCallback\0velCallback\0"
    "current_vel_linear\0current_vel_angular\0"
    "max_linear\0max_angular\0utCallback\0ut\0"
    "fCallback\0force\0armCallback\0base\0"
    "shoulder\0elbow\0tool\0toggleCallback\0"
    "flag\0crawlerCallback\0frontLeft\0"
    "frontRight\0backrRight\0backLeft\0addLine\0"
    "newLine\0std_msgs::Int8ConstPtr\0msg\0"
    "std_msgs::Int8::ConstPtr\0"
    "std_msgs::Float32::ConstPtr\0"
    "octo_qt::ang_lin_arr::ConstPtr\0"
    "octo_qt::tool_status::Request&\0req\0"
    "octo_qt::tool_status::Response&\0res\0"
    "octo_qt::motor_status::Request&\0"
    "octo_qt::motor_status::Response&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       5,    1,  115,    2, 0x06 /* Public */,
       6,    4,  118,    2, 0x06 /* Public */,
      11,    1,  127,    2, 0x06 /* Public */,
      13,    1,  130,    2, 0x06 /* Public */,
      15,    4,  133,    2, 0x06 /* Public */,
      20,    1,  142,    2, 0x06 /* Public */,
      22,    4,  145,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  154,    2, 0x0a /* Public */,
       1,    1,  157,    2, 0x0a /* Public */,
       4,    1,  160,    2, 0x0a /* Public */,
       5,    1,  163,    2, 0x0a /* Public */,
       6,    1,  166,    2, 0x0a /* Public */,
      11,    1,  169,    2, 0x0a /* Public */,
      13,    1,  172,    2, 0x0a /* Public */,
      20,    2,  175,    2, 0x0a /* Public */,
      15,    2,  180,    2, 0x0a /* Public */,
      22,    2,  185,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   23,   24,   25,   26,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 31,   30,
    QMetaType::Void, 0x80000000 | 32,   30,
    QMetaType::Void, 0x80000000 | 33,   30,
    QMetaType::Void, 0x80000000 | 32,   30,
    QMetaType::Void, 0x80000000 | 32,   30,
    QMetaType::Bool, 0x80000000 | 34, 0x80000000 | 36,   35,   37,
    QMetaType::Bool, 0x80000000 | 38, 0x80000000 | 39,   35,   37,
    QMetaType::Bool, 0x80000000 | 38, 0x80000000 | 39,   35,   37,

       0        // eod
};

void RosThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->velCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 4: _t->utCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->armCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 9: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->armToolCallback((*reinterpret_cast< const std_msgs::Int8ConstPtr(*)>(_a[1]))); break;
        case 11: _t->commCallback((*reinterpret_cast< const std_msgs::Int8::ConstPtr(*)>(_a[1]))); break;
        case 12: _t->battCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 13: _t->velCallback((*reinterpret_cast< const octo_qt::ang_lin_arr::ConstPtr(*)>(_a[1]))); break;
        case 14: _t->utCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 15: _t->fCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 16: { bool _r = _t->toggleCallback((*reinterpret_cast< octo_qt::tool_status::Request(*)>(_a[1])),(*reinterpret_cast< octo_qt::tool_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->armCallback((*reinterpret_cast< octo_qt::motor_status::Request(*)>(_a[1])),(*reinterpret_cast< octo_qt::motor_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->crawlerCallback((*reinterpret_cast< octo_qt::motor_status::Request(*)>(_a[1])),(*reinterpret_cast< octo_qt::motor_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armToolCallback)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::commCallback)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::battCallback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::velCallback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::utCallback)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::fCallback)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armCallback)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::toggleCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::crawlerCallback)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RosThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_RosThread.data,
    qt_meta_data_RosThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RosThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RosThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RosThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RosThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void RosThread::armToolCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosThread::commCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosThread::battCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosThread::velCallback(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosThread::utCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosThread::fCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosThread::armCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosThread::toggleCallback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosThread::crawlerCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
