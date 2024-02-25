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
#include <QtCore/QVector>
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
    QByteArrayData data[95];
    char stringdata0[1193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosThread_t qt_meta_stringdata_RosThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RosThread"
QT_MOC_LITERAL(1, 10, 15), // "voltageCallback"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13), // "waterCallback"
QT_MOC_LITERAL(5, 47, 5), // "level"
QT_MOC_LITERAL(6, 53, 12), // "commCallback"
QT_MOC_LITERAL(7, 66, 15), // "armToolCallback"
QT_MOC_LITERAL(8, 82, 12), // "battCallback"
QT_MOC_LITERAL(9, 95, 12), // "tempCallback"
QT_MOC_LITERAL(10, 108, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 121, 4), // "temp"
QT_MOC_LITERAL(12, 126, 13), // "errorCallback"
QT_MOC_LITERAL(13, 140, 3), // "err"
QT_MOC_LITERAL(14, 144, 11), // "velCallback"
QT_MOC_LITERAL(15, 156, 18), // "current_vel_linear"
QT_MOC_LITERAL(16, 175, 12), // "odomCallback"
QT_MOC_LITERAL(17, 188, 12), // "current_odom"
QT_MOC_LITERAL(18, 201, 12), // "tripCallback"
QT_MOC_LITERAL(19, 214, 12), // "current_trip"
QT_MOC_LITERAL(20, 227, 15), // "crawlerCallback"
QT_MOC_LITERAL(21, 243, 2), // "m1"
QT_MOC_LITERAL(22, 246, 2), // "m2"
QT_MOC_LITERAL(23, 249, 2), // "m3"
QT_MOC_LITERAL(24, 252, 2), // "m4"
QT_MOC_LITERAL(25, 255, 11), // "armCallback"
QT_MOC_LITERAL(26, 267, 10), // "arm_status"
QT_MOC_LITERAL(27, 278, 10), // "utCallback"
QT_MOC_LITERAL(28, 289, 3), // "vel"
QT_MOC_LITERAL(29, 293, 8), // "deepcoat"
QT_MOC_LITERAL(30, 302, 4), // "echo"
QT_MOC_LITERAL(31, 307, 9), // "fCallback"
QT_MOC_LITERAL(32, 317, 5), // "force"
QT_MOC_LITERAL(33, 323, 11), // "uidCallback"
QT_MOC_LITERAL(34, 335, 16), // "QVector<QString>"
QT_MOC_LITERAL(35, 352, 3), // "uid"
QT_MOC_LITERAL(36, 356, 15), // "currentCallback"
QT_MOC_LITERAL(37, 372, 7), // "current"
QT_MOC_LITERAL(38, 380, 14), // "toggleCallback"
QT_MOC_LITERAL(39, 395, 4), // "flag"
QT_MOC_LITERAL(40, 400, 7), // "trigImg"
QT_MOC_LITERAL(41, 408, 1), // "k"
QT_MOC_LITERAL(42, 410, 17), // "thicknessCallback"
QT_MOC_LITERAL(43, 428, 9), // "thickness"
QT_MOC_LITERAL(44, 438, 4), // "unit"
QT_MOC_LITERAL(45, 443, 7), // "slideCW"
QT_MOC_LITERAL(46, 451, 8), // "slideCCW"
QT_MOC_LITERAL(47, 460, 5), // "lacCW"
QT_MOC_LITERAL(48, 466, 6), // "lacCCW"
QT_MOC_LITERAL(49, 473, 11), // "lacCallback"
QT_MOC_LITERAL(50, 485, 9), // "lac_value"
QT_MOC_LITERAL(51, 495, 9), // "resetTrip"
QT_MOC_LITERAL(52, 505, 7), // "stopArm"
QT_MOC_LITERAL(53, 513, 6), // "rstArm"
QT_MOC_LITERAL(54, 520, 11), // "initCrawler"
QT_MOC_LITERAL(55, 532, 11), // "stopCrawler"
QT_MOC_LITERAL(56, 544, 10), // "rstCrawler"
QT_MOC_LITERAL(57, 555, 10), // "cameraInit"
QT_MOC_LITERAL(58, 566, 9), // "graphCall"
QT_MOC_LITERAL(59, 576, 15), // "QVector<double>"
QT_MOC_LITERAL(60, 592, 4), // "data"
QT_MOC_LITERAL(61, 597, 5), // "tuple"
QT_MOC_LITERAL(62, 603, 7), // "int64_t"
QT_MOC_LITERAL(63, 611, 7), // "x_range"
QT_MOC_LITERAL(64, 619, 7), // "addLine"
QT_MOC_LITERAL(65, 627, 7), // "newLine"
QT_MOC_LITERAL(66, 635, 9), // "sendUtVel"
QT_MOC_LITERAL(67, 645, 10), // "sendUtData"
QT_MOC_LITERAL(68, 656, 9), // "capImgPub"
QT_MOC_LITERAL(69, 666, 25), // "std_msgs::Int32::ConstPtr"
QT_MOC_LITERAL(70, 692, 3), // "msg"
QT_MOC_LITERAL(71, 696, 27), // "std_msgs::Float32::ConstPtr"
QT_MOC_LITERAL(72, 724, 25), // "std_msgs::Int16::ConstPtr"
QT_MOC_LITERAL(73, 750, 22), // "std_msgs::Int8ConstPtr"
QT_MOC_LITERAL(74, 773, 29), // "my_actuator::vitals::ConstPtr"
QT_MOC_LITERAL(75, 803, 32), // "serialtoros::thick_arr::ConstPtr"
QT_MOC_LITERAL(76, 836, 13), // "graphCallback"
QT_MOC_LITERAL(77, 850, 32), // "serialtoros::graph_arr::ConstPtr"
QT_MOC_LITERAL(78, 883, 30), // "serialtoros::VDE_arr::ConstPtr"
QT_MOC_LITERAL(79, 914, 39), // "launch_crawler::SerialNumbers..."
QT_MOC_LITERAL(80, 954, 33), // "stm_client::tool_status::Requ..."
QT_MOC_LITERAL(81, 988, 3), // "req"
QT_MOC_LITERAL(82, 992, 34), // "stm_client::tool_status::Resp..."
QT_MOC_LITERAL(83, 1027, 3), // "res"
QT_MOC_LITERAL(84, 1031, 11), // "imgCallback"
QT_MOC_LITERAL(85, 1043, 32), // "serialtoros::GraphPath::Request&"
QT_MOC_LITERAL(86, 1076, 33), // "serialtoros::GraphPath::Respo..."
QT_MOC_LITERAL(87, 1110, 12), // "sendToolData"
QT_MOC_LITERAL(88, 1123, 14), // "crawlerInitSrv"
QT_MOC_LITERAL(89, 1138, 13), // "reset_crawler"
QT_MOC_LITERAL(90, 1152, 3), // "val"
QT_MOC_LITERAL(91, 1156, 14), // "checkArmStatus"
QT_MOC_LITERAL(92, 1171, 9), // "reset_arm"
QT_MOC_LITERAL(93, 1181, 7), // "saveImg"
QT_MOC_LITERAL(94, 1189, 3) // "img"

    },
    "RosThread\0voltageCallback\0\0value\0"
    "waterCallback\0level\0commCallback\0"
    "armToolCallback\0battCallback\0tempCallback\0"
    "QVector<int>\0temp\0errorCallback\0err\0"
    "velCallback\0current_vel_linear\0"
    "odomCallback\0current_odom\0tripCallback\0"
    "current_trip\0crawlerCallback\0m1\0m2\0"
    "m3\0m4\0armCallback\0arm_status\0utCallback\0"
    "vel\0deepcoat\0echo\0fCallback\0force\0"
    "uidCallback\0QVector<QString>\0uid\0"
    "currentCallback\0current\0toggleCallback\0"
    "flag\0trigImg\0k\0thicknessCallback\0"
    "thickness\0unit\0slideCW\0slideCCW\0lacCW\0"
    "lacCCW\0lacCallback\0lac_value\0resetTrip\0"
    "stopArm\0rstArm\0initCrawler\0stopCrawler\0"
    "rstCrawler\0cameraInit\0graphCall\0"
    "QVector<double>\0data\0tuple\0int64_t\0"
    "x_range\0addLine\0newLine\0sendUtVel\0"
    "sendUtData\0capImgPub\0std_msgs::Int32::ConstPtr\0"
    "msg\0std_msgs::Float32::ConstPtr\0"
    "std_msgs::Int16::ConstPtr\0"
    "std_msgs::Int8ConstPtr\0"
    "my_actuator::vitals::ConstPtr\0"
    "serialtoros::thick_arr::ConstPtr\0"
    "graphCallback\0serialtoros::graph_arr::ConstPtr\0"
    "serialtoros::VDE_arr::ConstPtr\0"
    "launch_crawler::SerialNumbers::ConstPtr\0"
    "stm_client::tool_status::Request&\0req\0"
    "stm_client::tool_status::Response&\0"
    "res\0imgCallback\0serialtoros::GraphPath::Request&\0"
    "serialtoros::GraphPath::Response&\0"
    "sendToolData\0crawlerInitSrv\0reset_crawler\0"
    "val\0checkArmStatus\0reset_arm\0saveImg\0"
    "img"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  339,    2, 0x06 /* Public */,
       4,    1,  342,    2, 0x06 /* Public */,
       6,    1,  345,    2, 0x06 /* Public */,
       7,    1,  348,    2, 0x06 /* Public */,
       8,    1,  351,    2, 0x06 /* Public */,
       9,    1,  354,    2, 0x06 /* Public */,
      12,    1,  357,    2, 0x06 /* Public */,
      14,    1,  360,    2, 0x06 /* Public */,
      16,    1,  363,    2, 0x06 /* Public */,
      18,    1,  366,    2, 0x06 /* Public */,
      20,    4,  369,    2, 0x06 /* Public */,
      25,    1,  378,    2, 0x06 /* Public */,
      27,    3,  381,    2, 0x06 /* Public */,
      31,    1,  388,    2, 0x06 /* Public */,
      33,    1,  391,    2, 0x06 /* Public */,
      36,    1,  394,    2, 0x06 /* Public */,
      38,    1,  397,    2, 0x06 /* Public */,
      40,    1,  400,    2, 0x06 /* Public */,
      42,    2,  403,    2, 0x06 /* Public */,
      45,    1,  408,    2, 0x06 /* Public */,
      46,    1,  411,    2, 0x06 /* Public */,
      47,    1,  414,    2, 0x06 /* Public */,
      48,    1,  417,    2, 0x06 /* Public */,
      49,    1,  420,    2, 0x06 /* Public */,
      51,    1,  423,    2, 0x06 /* Public */,
      52,    1,  426,    2, 0x06 /* Public */,
      53,    1,  429,    2, 0x06 /* Public */,
      54,    1,  432,    2, 0x06 /* Public */,
      55,    1,  435,    2, 0x06 /* Public */,
      56,    1,  438,    2, 0x06 /* Public */,
      57,    1,  441,    2, 0x06 /* Public */,
      58,    3,  444,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    1,  451,    2, 0x0a /* Public */,
      66,    1,  454,    2, 0x0a /* Public */,
      67,    1,  457,    2, 0x0a /* Public */,
      68,    1,  460,    2, 0x0a /* Public */,
      49,    1,  463,    2, 0x0a /* Public */,
       4,    1,  466,    2, 0x0a /* Public */,
       6,    1,  469,    2, 0x0a /* Public */,
       7,    1,  472,    2, 0x0a /* Public */,
      14,    1,  475,    2, 0x0a /* Public */,
      16,    1,  478,    2, 0x0a /* Public */,
      18,    1,  481,    2, 0x0a /* Public */,
      20,    1,  484,    2, 0x0a /* Public */,
      42,    1,  487,    2, 0x0a /* Public */,
      76,    1,  490,    2, 0x0a /* Public */,
      27,    1,  493,    2, 0x0a /* Public */,
      31,    1,  496,    2, 0x0a /* Public */,
      36,    1,  499,    2, 0x0a /* Public */,
      33,    1,  502,    2, 0x0a /* Public */,
       1,    1,  505,    2, 0x0a /* Public */,
      38,    2,  508,    2, 0x0a /* Public */,
      84,    2,  513,    2, 0x0a /* Public */,
      87,    1,  518,    2, 0x0a /* Public */,
      88,    1,  521,    2, 0x0a /* Public */,
      89,    1,  524,    2, 0x0a /* Public */,
      51,    1,  527,    2, 0x0a /* Public */,
      45,    1,  530,    2, 0x0a /* Public */,
      46,    1,  533,    2, 0x0a /* Public */,
      47,    1,  536,    2, 0x0a /* Public */,
      48,    1,  539,    2, 0x0a /* Public */,
      57,    1,  542,    2, 0x0a /* Public */,
      91,    0,  545,    2, 0x0a /* Public */,
      92,    1,  546,    2, 0x0a /* Public */,
      93,    1,  549,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   21,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 10,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Float,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   43,   44,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, 0x80000000 | 59, 0x80000000 | 59, 0x80000000 | 62,   60,   61,   63,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 71,   70,
    QMetaType::Void, 0x80000000 | 72,   70,
    QMetaType::Void, 0x80000000 | 73,   70,
    QMetaType::Void, 0x80000000 | 72,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 74,   70,
    QMetaType::Void, 0x80000000 | 75,   70,
    QMetaType::Void, 0x80000000 | 77,   70,
    QMetaType::Void, 0x80000000 | 78,   70,
    QMetaType::Void, 0x80000000 | 71,   70,
    QMetaType::Void, 0x80000000 | 71,   70,
    QMetaType::Void, 0x80000000 | 79,   70,
    QMetaType::Void, 0x80000000 | 72,   70,
    QMetaType::Bool, 0x80000000 | 80, 0x80000000 | 82,   81,   83,
    QMetaType::Bool, 0x80000000 | 85, 0x80000000 | 86,   81,   83,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::QString,   94,

       0        // eod
};

void RosThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->voltageCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 6: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 7: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 11: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 12: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 15: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->trigImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->graphCall((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 32: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->sendUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->sendUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->capImgPub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->lacCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 37: _t->waterCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 38: _t->commCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 39: _t->armToolCallback((*reinterpret_cast< const std_msgs::Int8ConstPtr(*)>(_a[1]))); break;
        case 40: _t->velCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 41: _t->odomCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 42: _t->tripCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 43: _t->crawlerCallback((*reinterpret_cast< const my_actuator::vitals::ConstPtr(*)>(_a[1]))); break;
        case 44: _t->thicknessCallback((*reinterpret_cast< const serialtoros::thick_arr::ConstPtr(*)>(_a[1]))); break;
        case 45: _t->graphCallback((*reinterpret_cast< const serialtoros::graph_arr::ConstPtr(*)>(_a[1]))); break;
        case 46: _t->utCallback((*reinterpret_cast< const serialtoros::VDE_arr::ConstPtr(*)>(_a[1]))); break;
        case 47: _t->fCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 48: _t->currentCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 49: _t->uidCallback((*reinterpret_cast< const launch_crawler::SerialNumbers::ConstPtr(*)>(_a[1]))); break;
        case 50: _t->voltageCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 51: { bool _r = _t->toggleCallback((*reinterpret_cast< stm_client::tool_status::Request(*)>(_a[1])),(*reinterpret_cast< stm_client::tool_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->imgCallback((*reinterpret_cast< serialtoros::GraphPath::Request(*)>(_a[1])),(*reinterpret_cast< serialtoros::GraphPath::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->sendToolData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: _t->crawlerInitSrv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->reset_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->slideCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->slideCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->lacCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->lacCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->checkArmStatus(); break;
        case 63: _t->reset_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->saveImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 31:
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
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::voltageCallback)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::waterCallback)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::commCallback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armToolCallback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::battCallback)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::tempCallback)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::errorCallback)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::velCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::odomCallback)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::tripCallback)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::crawlerCallback)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armCallback)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::utCallback)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::fCallback)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::uidCallback)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::currentCallback)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::toggleCallback)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::trigImg)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::thicknessCallback)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCW)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCCW)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCW)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCCW)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCallback)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::resetTrip)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopArm)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstArm)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::initCrawler)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopCrawler)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstCrawler)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::cameraInit)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<double> , QVector<double> , int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::graphCall)) {
                *result = 31;
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
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void RosThread::voltageCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosThread::waterCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosThread::commCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosThread::armToolCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosThread::battCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosThread::tempCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosThread::errorCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosThread::velCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosThread::odomCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RosThread::tripCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RosThread::crawlerCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RosThread::armCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RosThread::utCallback(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RosThread::fCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RosThread::uidCallback(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RosThread::currentCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RosThread::toggleCallback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RosThread::trigImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RosThread::thicknessCallback(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RosThread::slideCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RosThread::slideCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RosThread::lacCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RosThread::lacCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RosThread::lacCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RosThread::resetTrip(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RosThread::stopArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void RosThread::rstArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void RosThread::initCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void RosThread::stopCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void RosThread::rstCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void RosThread::cameraInit(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void RosThread::graphCall(QVector<double> _t1, QVector<double> _t2, int64_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
