/****************************************************************************
** Meta object code from reading C++ file 'publisher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OctoboticsApp/Source/publisher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'publisher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Publisher_t {
    QByteArrayData data[71];
    char stringdata0[894];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Publisher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Publisher_t qt_meta_stringdata_Publisher = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Publisher"
QT_MOC_LITERAL(1, 10, 7), // "message"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "msg"
QT_MOC_LITERAL(4, 23, 8), // "message1"
QT_MOC_LITERAL(5, 32, 19), // "batteryValueChanged"
QT_MOC_LITERAL(6, 52, 5), // "value"
QT_MOC_LITERAL(7, 58, 16), // "comStatusChanged"
QT_MOC_LITERAL(8, 75, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(9, 96, 20), // "velocityValueChanged"
QT_MOC_LITERAL(10, 117, 18), // "toggleValueChanged"
QT_MOC_LITERAL(11, 136, 16), // "armStatusChanged"
QT_MOC_LITERAL(12, 153, 6), // "status"
QT_MOC_LITERAL(13, 160, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(14, 179, 15), // "utstatusChanged"
QT_MOC_LITERAL(15, 195, 14), // "FstatusChanged"
QT_MOC_LITERAL(16, 210, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(17, 232, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(18, 256, 15), // "armToolCallback"
QT_MOC_LITERAL(19, 272, 3), // "arg"
QT_MOC_LITERAL(20, 276, 12), // "commCallback"
QT_MOC_LITERAL(21, 289, 12), // "battCallback"
QT_MOC_LITERAL(22, 302, 11), // "velCallback"
QT_MOC_LITERAL(23, 314, 18), // "current_vel_linear"
QT_MOC_LITERAL(24, 333, 19), // "current_vel_angular"
QT_MOC_LITERAL(25, 353, 10), // "max_linear"
QT_MOC_LITERAL(26, 364, 11), // "max_angular"
QT_MOC_LITERAL(27, 376, 10), // "utCallback"
QT_MOC_LITERAL(28, 387, 2), // "ut"
QT_MOC_LITERAL(29, 390, 9), // "fCallback"
QT_MOC_LITERAL(30, 400, 5), // "force"
QT_MOC_LITERAL(31, 406, 13), // "initRosThread"
QT_MOC_LITERAL(32, 420, 15), // "getBatteryValue"
QT_MOC_LITERAL(33, 436, 15), // "setBatteryValue"
QT_MOC_LITERAL(34, 452, 12), // "setComStatus"
QT_MOC_LITERAL(35, 465, 12), // "getComStatus"
QT_MOC_LITERAL(36, 478, 16), // "getArmToolStatus"
QT_MOC_LITERAL(37, 495, 16), // "setArmToolStatus"
QT_MOC_LITERAL(38, 512, 16), // "getVelocityValue"
QT_MOC_LITERAL(39, 529, 16), // "setVelocityValue"
QT_MOC_LITERAL(40, 546, 14), // "getToggleValue"
QT_MOC_LITERAL(41, 561, 14), // "setToggleValue"
QT_MOC_LITERAL(42, 576, 4), // "flag"
QT_MOC_LITERAL(43, 581, 14), // "toggleCallback"
QT_MOC_LITERAL(44, 596, 11), // "armCallback"
QT_MOC_LITERAL(45, 608, 4), // "base"
QT_MOC_LITERAL(46, 613, 8), // "shoulder"
QT_MOC_LITERAL(47, 622, 5), // "elbow"
QT_MOC_LITERAL(48, 628, 4), // "tool"
QT_MOC_LITERAL(49, 633, 12), // "getArmStatus"
QT_MOC_LITERAL(50, 646, 12), // "setArmStatus"
QT_MOC_LITERAL(51, 659, 15), // "crawlerCallback"
QT_MOC_LITERAL(52, 675, 9), // "frontLeft"
QT_MOC_LITERAL(53, 685, 10), // "frontRight"
QT_MOC_LITERAL(54, 696, 10), // "backrRight"
QT_MOC_LITERAL(55, 707, 8), // "backLeft"
QT_MOC_LITERAL(56, 716, 14), // "getCrawlStatus"
QT_MOC_LITERAL(57, 731, 14), // "setCrawlStatus"
QT_MOC_LITERAL(58, 746, 11), // "getUtstatus"
QT_MOC_LITERAL(59, 758, 11), // "setUtstatus"
QT_MOC_LITERAL(60, 770, 10), // "getFstatus"
QT_MOC_LITERAL(61, 781, 10), // "setFstatus"
QT_MOC_LITERAL(62, 792, 12), // "batteryValue"
QT_MOC_LITERAL(63, 805, 9), // "comStatus"
QT_MOC_LITERAL(64, 815, 13), // "armToolStatus"
QT_MOC_LITERAL(65, 829, 13), // "velocityValue"
QT_MOC_LITERAL(66, 843, 11), // "toggleValue"
QT_MOC_LITERAL(67, 855, 9), // "armStatus"
QT_MOC_LITERAL(68, 865, 11), // "crawlStatus"
QT_MOC_LITERAL(69, 877, 8), // "utstatus"
QT_MOC_LITERAL(70, 886, 7) // "Fstatus"

    },
    "Publisher\0message\0\0msg\0message1\0"
    "batteryValueChanged\0value\0comStatusChanged\0"
    "armToolStatusChanged\0velocityValueChanged\0"
    "toggleValueChanged\0armStatusChanged\0"
    "status\0crawlStatusChanged\0utstatusChanged\0"
    "FstatusChanged\0on_pushButton_pressed\0"
    "on_pushButton_2_pressed\0armToolCallback\0"
    "arg\0commCallback\0battCallback\0velCallback\0"
    "current_vel_linear\0current_vel_angular\0"
    "max_linear\0max_angular\0utCallback\0ut\0"
    "fCallback\0force\0initRosThread\0"
    "getBatteryValue\0setBatteryValue\0"
    "setComStatus\0getComStatus\0getArmToolStatus\0"
    "setArmToolStatus\0getVelocityValue\0"
    "setVelocityValue\0getToggleValue\0"
    "setToggleValue\0flag\0toggleCallback\0"
    "armCallback\0base\0shoulder\0elbow\0tool\0"
    "getArmStatus\0setArmStatus\0crawlerCallback\0"
    "frontLeft\0frontRight\0backrRight\0"
    "backLeft\0getCrawlStatus\0setCrawlStatus\0"
    "getUtstatus\0setUtstatus\0getFstatus\0"
    "setFstatus\0batteryValue\0comStatus\0"
    "armToolStatus\0velocityValue\0toggleValue\0"
    "armStatus\0crawlStatus\0utstatus\0Fstatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       9,  336, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  219,    2, 0x06 /* Public */,
       4,    1,  222,    2, 0x06 /* Public */,
       5,    1,  225,    2, 0x06 /* Public */,
       7,    1,  228,    2, 0x06 /* Public */,
       8,    1,  231,    2, 0x06 /* Public */,
       9,    1,  234,    2, 0x06 /* Public */,
      10,    1,  237,    2, 0x06 /* Public */,
      11,    1,  240,    2, 0x06 /* Public */,
      13,    1,  243,    2, 0x06 /* Public */,
      14,    1,  246,    2, 0x06 /* Public */,
      15,    1,  249,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  252,    2, 0x0a /* Public */,
      17,    0,  253,    2, 0x0a /* Public */,
      18,    1,  254,    2, 0x0a /* Public */,
      20,    1,  257,    2, 0x0a /* Public */,
      21,    1,  260,    2, 0x0a /* Public */,
      22,    4,  263,    2, 0x0a /* Public */,
      27,    1,  272,    2, 0x0a /* Public */,
      29,    1,  275,    2, 0x0a /* Public */,
      31,    0,  278,    2, 0x0a /* Public */,
      32,    0,  279,    2, 0x0a /* Public */,
      33,    1,  280,    2, 0x0a /* Public */,
      34,    1,  283,    2, 0x0a /* Public */,
      35,    0,  286,    2, 0x0a /* Public */,
      36,    0,  287,    2, 0x0a /* Public */,
      37,    1,  288,    2, 0x0a /* Public */,
      38,    0,  291,    2, 0x0a /* Public */,
      39,    1,  292,    2, 0x0a /* Public */,
      40,    0,  295,    2, 0x0a /* Public */,
      41,    1,  296,    2, 0x0a /* Public */,
      43,    1,  299,    2, 0x0a /* Public */,
      44,    4,  302,    2, 0x0a /* Public */,
      49,    0,  311,    2, 0x0a /* Public */,
      50,    1,  312,    2, 0x0a /* Public */,
      51,    4,  315,    2, 0x0a /* Public */,
      56,    0,  324,    2, 0x0a /* Public */,
      57,    1,  325,    2, 0x0a /* Public */,
      58,    0,  328,    2, 0x0a /* Public */,
      59,    1,  329,    2, 0x0a /* Public */,
      60,    0,  332,    2, 0x0a /* Public */,
      61,    1,  333,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    QMetaType::Void, QMetaType::QVariantMap,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   23,   24,   25,   26,
    QMetaType::Void, QMetaType::Float,   28,
    QMetaType::Void, QMetaType::Float,   30,
    QMetaType::Void,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   45,   46,   47,   48,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   52,   53,   54,   55,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    6,

 // properties: name, type, flags
      62, QMetaType::Float, 0x00495103,
      63, QMetaType::Int, 0x00495103,
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::QVariantMap, 0x00495103,
      66, QMetaType::Bool, 0x00495103,
      67, QMetaType::QVariantMap, 0x00495103,
      68, QMetaType::QVariantMap, 0x00495103,
      69, QMetaType::QVariantMap, 0x00495103,
      70, QMetaType::QVariantMap, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

       0        // eod
};

void Publisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->message1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->velocityValueChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 6: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->armStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 8: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 9: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 10: _t->FstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_pressed(); break;
        case 12: _t->on_pushButton_2_pressed(); break;
        case 13: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->velCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 17: _t->utCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->initRosThread(); break;
        case 20: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: { QVariantMap _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setVelocityValue((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 28: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->armCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 32: { QVariantMap _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setArmStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 34: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 35: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 37: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 39: { QVariantMap _r = _t->getFstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setFstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::message1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::FstatusChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getComStatus(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getArmToolStatus(); break;
        case 3: *reinterpret_cast< QVariantMap*>(_v) = _t->getVelocityValue(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getToggleValue(); break;
        case 5: *reinterpret_cast< QVariantMap*>(_v) = _t->getArmStatus(); break;
        case 6: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 7: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 8: *reinterpret_cast< QVariantMap*>(_v) = _t->getFstatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setComStatus(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setArmToolStatus(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setVelocityValue(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 4: _t->setToggleValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setArmStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 6: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 7: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 8: _t->setFstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Publisher::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Publisher.data,
    qt_meta_data_Publisher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Publisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Publisher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Publisher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Publisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Publisher::message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Publisher::message1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Publisher::velocityValueChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Publisher::armStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::FstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
