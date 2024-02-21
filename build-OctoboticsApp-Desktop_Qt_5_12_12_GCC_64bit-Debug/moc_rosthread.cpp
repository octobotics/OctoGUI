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
    QByteArrayData data[91];
    char stringdata0[1144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosThread_t qt_meta_stringdata_RosThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RosThread"
QT_MOC_LITERAL(1, 10, 13), // "waterCallback"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "level"
QT_MOC_LITERAL(4, 31, 12), // "commCallback"
QT_MOC_LITERAL(5, 44, 5), // "value"
QT_MOC_LITERAL(6, 50, 15), // "armToolCallback"
QT_MOC_LITERAL(7, 66, 12), // "battCallback"
QT_MOC_LITERAL(8, 79, 12), // "tempCallback"
QT_MOC_LITERAL(9, 92, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 105, 4), // "temp"
QT_MOC_LITERAL(11, 110, 13), // "errorCallback"
QT_MOC_LITERAL(12, 124, 3), // "err"
QT_MOC_LITERAL(13, 128, 11), // "velCallback"
QT_MOC_LITERAL(14, 140, 18), // "current_vel_linear"
QT_MOC_LITERAL(15, 159, 12), // "odomCallback"
QT_MOC_LITERAL(16, 172, 12), // "current_odom"
QT_MOC_LITERAL(17, 185, 12), // "tripCallback"
QT_MOC_LITERAL(18, 198, 12), // "current_trip"
QT_MOC_LITERAL(19, 211, 15), // "crawlerCallback"
QT_MOC_LITERAL(20, 227, 2), // "m1"
QT_MOC_LITERAL(21, 230, 2), // "m2"
QT_MOC_LITERAL(22, 233, 2), // "m3"
QT_MOC_LITERAL(23, 236, 2), // "m4"
QT_MOC_LITERAL(24, 239, 11), // "armCallback"
QT_MOC_LITERAL(25, 251, 10), // "arm_status"
QT_MOC_LITERAL(26, 262, 10), // "utCallback"
QT_MOC_LITERAL(27, 273, 3), // "vel"
QT_MOC_LITERAL(28, 277, 8), // "deepcoat"
QT_MOC_LITERAL(29, 286, 4), // "echo"
QT_MOC_LITERAL(30, 291, 9), // "fCallback"
QT_MOC_LITERAL(31, 301, 5), // "force"
QT_MOC_LITERAL(32, 307, 11), // "uidCallback"
QT_MOC_LITERAL(33, 319, 16), // "QVector<QString>"
QT_MOC_LITERAL(34, 336, 3), // "uid"
QT_MOC_LITERAL(35, 340, 15), // "currentCallback"
QT_MOC_LITERAL(36, 356, 7), // "current"
QT_MOC_LITERAL(37, 364, 14), // "toggleCallback"
QT_MOC_LITERAL(38, 379, 4), // "flag"
QT_MOC_LITERAL(39, 384, 7), // "trigImg"
QT_MOC_LITERAL(40, 392, 1), // "k"
QT_MOC_LITERAL(41, 394, 17), // "thicknessCallback"
QT_MOC_LITERAL(42, 412, 9), // "thickness"
QT_MOC_LITERAL(43, 422, 4), // "unit"
QT_MOC_LITERAL(44, 427, 7), // "slideCW"
QT_MOC_LITERAL(45, 435, 8), // "slideCCW"
QT_MOC_LITERAL(46, 444, 5), // "lacCW"
QT_MOC_LITERAL(47, 450, 6), // "lacCCW"
QT_MOC_LITERAL(48, 457, 9), // "resetTrip"
QT_MOC_LITERAL(49, 467, 7), // "stopArm"
QT_MOC_LITERAL(50, 475, 6), // "rstArm"
QT_MOC_LITERAL(51, 482, 11), // "initCrawler"
QT_MOC_LITERAL(52, 494, 11), // "stopCrawler"
QT_MOC_LITERAL(53, 506, 10), // "rstCrawler"
QT_MOC_LITERAL(54, 517, 9), // "graphCall"
QT_MOC_LITERAL(55, 527, 15), // "QVector<double>"
QT_MOC_LITERAL(56, 543, 4), // "data"
QT_MOC_LITERAL(57, 548, 5), // "tuple"
QT_MOC_LITERAL(58, 554, 7), // "int64_t"
QT_MOC_LITERAL(59, 562, 7), // "x_range"
QT_MOC_LITERAL(60, 570, 7), // "addLine"
QT_MOC_LITERAL(61, 578, 7), // "newLine"
QT_MOC_LITERAL(62, 586, 9), // "sendUtVel"
QT_MOC_LITERAL(63, 596, 10), // "sendUtData"
QT_MOC_LITERAL(64, 607, 9), // "capImgPub"
QT_MOC_LITERAL(65, 617, 27), // "std_msgs::Float32::ConstPtr"
QT_MOC_LITERAL(66, 645, 3), // "msg"
QT_MOC_LITERAL(67, 649, 25), // "std_msgs::Int16::ConstPtr"
QT_MOC_LITERAL(68, 675, 22), // "std_msgs::Int8ConstPtr"
QT_MOC_LITERAL(69, 698, 25), // "std_msgs::Int32::ConstPtr"
QT_MOC_LITERAL(70, 724, 29), // "my_actuator::vitals::ConstPtr"
QT_MOC_LITERAL(71, 754, 32), // "serialtoros::thick_arr::ConstPtr"
QT_MOC_LITERAL(72, 787, 13), // "graphCallback"
QT_MOC_LITERAL(73, 801, 32), // "serialtoros::graph_arr::ConstPtr"
QT_MOC_LITERAL(74, 834, 30), // "serialtoros::VDE_arr::ConstPtr"
QT_MOC_LITERAL(75, 865, 39), // "launch_crawler::SerialNumbers..."
QT_MOC_LITERAL(76, 905, 33), // "stm_client::tool_status::Requ..."
QT_MOC_LITERAL(77, 939, 3), // "req"
QT_MOC_LITERAL(78, 943, 34), // "stm_client::tool_status::Resp..."
QT_MOC_LITERAL(79, 978, 3), // "res"
QT_MOC_LITERAL(80, 982, 11), // "imgCallback"
QT_MOC_LITERAL(81, 994, 32), // "serialtoros::GraphPath::Request&"
QT_MOC_LITERAL(82, 1027, 33), // "serialtoros::GraphPath::Respo..."
QT_MOC_LITERAL(83, 1061, 12), // "sendToolData"
QT_MOC_LITERAL(84, 1074, 14), // "crawlerInitSrv"
QT_MOC_LITERAL(85, 1089, 13), // "reset_crawler"
QT_MOC_LITERAL(86, 1103, 3), // "val"
QT_MOC_LITERAL(87, 1107, 14), // "checkArmStatus"
QT_MOC_LITERAL(88, 1122, 9), // "reset_arm"
QT_MOC_LITERAL(89, 1132, 7), // "saveImg"
QT_MOC_LITERAL(90, 1140, 3) // "img"

    },
    "RosThread\0waterCallback\0\0level\0"
    "commCallback\0value\0armToolCallback\0"
    "battCallback\0tempCallback\0QVector<int>\0"
    "temp\0errorCallback\0err\0velCallback\0"
    "current_vel_linear\0odomCallback\0"
    "current_odom\0tripCallback\0current_trip\0"
    "crawlerCallback\0m1\0m2\0m3\0m4\0armCallback\0"
    "arm_status\0utCallback\0vel\0deepcoat\0"
    "echo\0fCallback\0force\0uidCallback\0"
    "QVector<QString>\0uid\0currentCallback\0"
    "current\0toggleCallback\0flag\0trigImg\0"
    "k\0thicknessCallback\0thickness\0unit\0"
    "slideCW\0slideCCW\0lacCW\0lacCCW\0resetTrip\0"
    "stopArm\0rstArm\0initCrawler\0stopCrawler\0"
    "rstCrawler\0graphCall\0QVector<double>\0"
    "data\0tuple\0int64_t\0x_range\0addLine\0"
    "newLine\0sendUtVel\0sendUtData\0capImgPub\0"
    "std_msgs::Float32::ConstPtr\0msg\0"
    "std_msgs::Int16::ConstPtr\0"
    "std_msgs::Int8ConstPtr\0std_msgs::Int32::ConstPtr\0"
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
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  309,    2, 0x06 /* Public */,
       4,    1,  312,    2, 0x06 /* Public */,
       6,    1,  315,    2, 0x06 /* Public */,
       7,    1,  318,    2, 0x06 /* Public */,
       8,    1,  321,    2, 0x06 /* Public */,
      11,    1,  324,    2, 0x06 /* Public */,
      13,    1,  327,    2, 0x06 /* Public */,
      15,    1,  330,    2, 0x06 /* Public */,
      17,    1,  333,    2, 0x06 /* Public */,
      19,    4,  336,    2, 0x06 /* Public */,
      24,    1,  345,    2, 0x06 /* Public */,
      26,    3,  348,    2, 0x06 /* Public */,
      30,    1,  355,    2, 0x06 /* Public */,
      32,    1,  358,    2, 0x06 /* Public */,
      35,    1,  361,    2, 0x06 /* Public */,
      37,    1,  364,    2, 0x06 /* Public */,
      39,    1,  367,    2, 0x06 /* Public */,
      41,    2,  370,    2, 0x06 /* Public */,
      44,    1,  375,    2, 0x06 /* Public */,
      45,    1,  378,    2, 0x06 /* Public */,
      46,    1,  381,    2, 0x06 /* Public */,
      47,    1,  384,    2, 0x06 /* Public */,
      48,    1,  387,    2, 0x06 /* Public */,
      49,    1,  390,    2, 0x06 /* Public */,
      50,    1,  393,    2, 0x06 /* Public */,
      51,    1,  396,    2, 0x06 /* Public */,
      52,    1,  399,    2, 0x06 /* Public */,
      53,    1,  402,    2, 0x06 /* Public */,
      54,    3,  405,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      60,    1,  412,    2, 0x0a /* Public */,
      62,    1,  415,    2, 0x0a /* Public */,
      63,    1,  418,    2, 0x0a /* Public */,
      64,    1,  421,    2, 0x0a /* Public */,
       1,    1,  424,    2, 0x0a /* Public */,
       4,    1,  427,    2, 0x0a /* Public */,
       6,    1,  430,    2, 0x0a /* Public */,
      13,    1,  433,    2, 0x0a /* Public */,
      15,    1,  436,    2, 0x0a /* Public */,
      17,    1,  439,    2, 0x0a /* Public */,
      19,    1,  442,    2, 0x0a /* Public */,
      41,    1,  445,    2, 0x0a /* Public */,
      72,    1,  448,    2, 0x0a /* Public */,
      26,    1,  451,    2, 0x0a /* Public */,
      30,    1,  454,    2, 0x0a /* Public */,
      35,    1,  457,    2, 0x0a /* Public */,
      32,    1,  460,    2, 0x0a /* Public */,
      37,    2,  463,    2, 0x0a /* Public */,
      80,    2,  468,    2, 0x0a /* Public */,
      83,    1,  473,    2, 0x0a /* Public */,
      84,    1,  476,    2, 0x0a /* Public */,
      85,    1,  479,    2, 0x0a /* Public */,
      48,    1,  482,    2, 0x0a /* Public */,
      44,    1,  485,    2, 0x0a /* Public */,
      45,    1,  488,    2, 0x0a /* Public */,
      46,    1,  491,    2, 0x0a /* Public */,
      47,    1,  494,    2, 0x0a /* Public */,
      87,    0,  497,    2, 0x0a /* Public */,
      88,    1,  498,    2, 0x0a /* Public */,
      89,    1,  501,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   20,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 9,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   27,   28,   29,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Float,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   42,   43,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 55, 0x80000000 | 58,   56,   57,   59,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 67,   66,
    QMetaType::Void, 0x80000000 | 68,   66,
    QMetaType::Void, 0x80000000 | 67,   66,
    QMetaType::Void, 0x80000000 | 69,   66,
    QMetaType::Void, 0x80000000 | 69,   66,
    QMetaType::Void, 0x80000000 | 70,   66,
    QMetaType::Void, 0x80000000 | 71,   66,
    QMetaType::Void, 0x80000000 | 73,   66,
    QMetaType::Void, 0x80000000 | 74,   66,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 75,   66,
    QMetaType::Bool, 0x80000000 | 76, 0x80000000 | 78,   77,   79,
    QMetaType::Bool, 0x80000000 | 81, 0x80000000 | 82,   77,   79,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void, QMetaType::QString,   90,

       0        // eod
};

void RosThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 5: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 6: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 11: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 14: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->trigImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->graphCall((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 29: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->sendUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->sendUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->capImgPub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->waterCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 34: _t->commCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 35: _t->armToolCallback((*reinterpret_cast< const std_msgs::Int8ConstPtr(*)>(_a[1]))); break;
        case 36: _t->velCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 37: _t->odomCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 38: _t->tripCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 39: _t->crawlerCallback((*reinterpret_cast< const my_actuator::vitals::ConstPtr(*)>(_a[1]))); break;
        case 40: _t->thicknessCallback((*reinterpret_cast< const serialtoros::thick_arr::ConstPtr(*)>(_a[1]))); break;
        case 41: _t->graphCallback((*reinterpret_cast< const serialtoros::graph_arr::ConstPtr(*)>(_a[1]))); break;
        case 42: _t->utCallback((*reinterpret_cast< const serialtoros::VDE_arr::ConstPtr(*)>(_a[1]))); break;
        case 43: _t->fCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 44: _t->currentCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 45: _t->uidCallback((*reinterpret_cast< const launch_crawler::SerialNumbers::ConstPtr(*)>(_a[1]))); break;
        case 46: { bool _r = _t->toggleCallback((*reinterpret_cast< stm_client::tool_status::Request(*)>(_a[1])),(*reinterpret_cast< stm_client::tool_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->imgCallback((*reinterpret_cast< serialtoros::GraphPath::Request(*)>(_a[1])),(*reinterpret_cast< serialtoros::GraphPath::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->sendToolData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->crawlerInitSrv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->reset_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->slideCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->slideCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->lacCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->lacCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->checkArmStatus(); break;
        case 57: _t->reset_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->saveImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 28:
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
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::waterCallback)) {
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
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armToolCallback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::battCallback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::tempCallback)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::errorCallback)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::velCallback)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::odomCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::tripCallback)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::crawlerCallback)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armCallback)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::utCallback)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::fCallback)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::uidCallback)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::currentCallback)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::toggleCallback)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::trigImg)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::thicknessCallback)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCW)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCCW)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCW)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCCW)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::resetTrip)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopArm)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstArm)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::initCrawler)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopCrawler)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstCrawler)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<double> , QVector<double> , int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::graphCall)) {
                *result = 28;
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
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}

// SIGNAL 0
void RosThread::waterCallback(float _t1)
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
void RosThread::armToolCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosThread::battCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosThread::tempCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosThread::errorCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosThread::velCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosThread::odomCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosThread::tripCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RosThread::crawlerCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RosThread::armCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RosThread::utCallback(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RosThread::fCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RosThread::uidCallback(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RosThread::currentCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RosThread::toggleCallback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RosThread::trigImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RosThread::thicknessCallback(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RosThread::slideCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RosThread::slideCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RosThread::lacCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RosThread::lacCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RosThread::resetTrip(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RosThread::stopArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RosThread::rstArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RosThread::initCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void RosThread::stopCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void RosThread::rstCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void RosThread::graphCall(QVector<double> _t1, QVector<double> _t2, int64_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
