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
    QByteArrayData data[88];
    char stringdata0[1108];
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
QT_MOC_LITERAL(15, 159, 15), // "crawlerCallback"
QT_MOC_LITERAL(16, 175, 2), // "m1"
QT_MOC_LITERAL(17, 178, 2), // "m2"
QT_MOC_LITERAL(18, 181, 2), // "m3"
QT_MOC_LITERAL(19, 184, 2), // "m4"
QT_MOC_LITERAL(20, 187, 11), // "armCallback"
QT_MOC_LITERAL(21, 199, 10), // "arm_status"
QT_MOC_LITERAL(22, 210, 10), // "utCallback"
QT_MOC_LITERAL(23, 221, 3), // "vel"
QT_MOC_LITERAL(24, 225, 8), // "deepcoat"
QT_MOC_LITERAL(25, 234, 4), // "echo"
QT_MOC_LITERAL(26, 239, 9), // "fCallback"
QT_MOC_LITERAL(27, 249, 5), // "force"
QT_MOC_LITERAL(28, 255, 11), // "uidCallback"
QT_MOC_LITERAL(29, 267, 16), // "QVector<QString>"
QT_MOC_LITERAL(30, 284, 3), // "uid"
QT_MOC_LITERAL(31, 288, 15), // "currentCallback"
QT_MOC_LITERAL(32, 304, 7), // "current"
QT_MOC_LITERAL(33, 312, 14), // "toggleCallback"
QT_MOC_LITERAL(34, 327, 4), // "flag"
QT_MOC_LITERAL(35, 332, 7), // "trigImg"
QT_MOC_LITERAL(36, 340, 1), // "k"
QT_MOC_LITERAL(37, 342, 17), // "thicknessCallback"
QT_MOC_LITERAL(38, 360, 9), // "thickness"
QT_MOC_LITERAL(39, 370, 4), // "unit"
QT_MOC_LITERAL(40, 375, 7), // "slideCW"
QT_MOC_LITERAL(41, 383, 8), // "slideCCW"
QT_MOC_LITERAL(42, 392, 5), // "lacCW"
QT_MOC_LITERAL(43, 398, 6), // "lacCCW"
QT_MOC_LITERAL(44, 405, 7), // "stopArm"
QT_MOC_LITERAL(45, 413, 6), // "rstArm"
QT_MOC_LITERAL(46, 420, 11), // "initCrawler"
QT_MOC_LITERAL(47, 432, 11), // "stopCrawler"
QT_MOC_LITERAL(48, 444, 10), // "rstCrawler"
QT_MOC_LITERAL(49, 455, 9), // "graphCall"
QT_MOC_LITERAL(50, 465, 15), // "QVector<double>"
QT_MOC_LITERAL(51, 481, 4), // "data"
QT_MOC_LITERAL(52, 486, 5), // "tuple"
QT_MOC_LITERAL(53, 492, 7), // "int64_t"
QT_MOC_LITERAL(54, 500, 7), // "x_range"
QT_MOC_LITERAL(55, 508, 7), // "addLine"
QT_MOC_LITERAL(56, 516, 7), // "newLine"
QT_MOC_LITERAL(57, 524, 9), // "sendUtVel"
QT_MOC_LITERAL(58, 534, 10), // "sendUtData"
QT_MOC_LITERAL(59, 545, 9), // "capImgPub"
QT_MOC_LITERAL(60, 555, 27), // "std_msgs::Float32::ConstPtr"
QT_MOC_LITERAL(61, 583, 3), // "msg"
QT_MOC_LITERAL(62, 587, 25), // "std_msgs::Int16::ConstPtr"
QT_MOC_LITERAL(63, 613, 22), // "std_msgs::Int8ConstPtr"
QT_MOC_LITERAL(64, 636, 12), // "odomCallback"
QT_MOC_LITERAL(65, 649, 25), // "std_msgs::Int32::ConstPtr"
QT_MOC_LITERAL(66, 675, 12), // "tripCallback"
QT_MOC_LITERAL(67, 688, 29), // "my_actuator::vitals::ConstPtr"
QT_MOC_LITERAL(68, 718, 32), // "serialtoros::thick_arr::ConstPtr"
QT_MOC_LITERAL(69, 751, 13), // "graphCallback"
QT_MOC_LITERAL(70, 765, 32), // "serialtoros::graph_arr::ConstPtr"
QT_MOC_LITERAL(71, 798, 30), // "serialtoros::VDE_arr::ConstPtr"
QT_MOC_LITERAL(72, 829, 39), // "launch_crawler::SerialNumbers..."
QT_MOC_LITERAL(73, 869, 33), // "stm_client::tool_status::Requ..."
QT_MOC_LITERAL(74, 903, 3), // "req"
QT_MOC_LITERAL(75, 907, 34), // "stm_client::tool_status::Resp..."
QT_MOC_LITERAL(76, 942, 3), // "res"
QT_MOC_LITERAL(77, 946, 11), // "imgCallback"
QT_MOC_LITERAL(78, 958, 32), // "serialtoros::GraphPath::Request&"
QT_MOC_LITERAL(79, 991, 33), // "serialtoros::GraphPath::Respo..."
QT_MOC_LITERAL(80, 1025, 12), // "sendToolData"
QT_MOC_LITERAL(81, 1038, 14), // "crawlerInitSrv"
QT_MOC_LITERAL(82, 1053, 13), // "reset_crawler"
QT_MOC_LITERAL(83, 1067, 3), // "val"
QT_MOC_LITERAL(84, 1071, 14), // "checkArmStatus"
QT_MOC_LITERAL(85, 1086, 9), // "reset_arm"
QT_MOC_LITERAL(86, 1096, 7), // "saveImg"
QT_MOC_LITERAL(87, 1104, 3) // "img"

    },
    "RosThread\0waterCallback\0\0level\0"
    "commCallback\0value\0armToolCallback\0"
    "battCallback\0tempCallback\0QVector<int>\0"
    "temp\0errorCallback\0err\0velCallback\0"
    "current_vel_linear\0crawlerCallback\0"
    "m1\0m2\0m3\0m4\0armCallback\0arm_status\0"
    "utCallback\0vel\0deepcoat\0echo\0fCallback\0"
    "force\0uidCallback\0QVector<QString>\0"
    "uid\0currentCallback\0current\0toggleCallback\0"
    "flag\0trigImg\0k\0thicknessCallback\0"
    "thickness\0unit\0slideCW\0slideCCW\0lacCW\0"
    "lacCCW\0stopArm\0rstArm\0initCrawler\0"
    "stopCrawler\0rstCrawler\0graphCall\0"
    "QVector<double>\0data\0tuple\0int64_t\0"
    "x_range\0addLine\0newLine\0sendUtVel\0"
    "sendUtData\0capImgPub\0std_msgs::Float32::ConstPtr\0"
    "msg\0std_msgs::Int16::ConstPtr\0"
    "std_msgs::Int8ConstPtr\0odomCallback\0"
    "std_msgs::Int32::ConstPtr\0tripCallback\0"
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
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  289,    2, 0x06 /* Public */,
       4,    1,  292,    2, 0x06 /* Public */,
       6,    1,  295,    2, 0x06 /* Public */,
       7,    1,  298,    2, 0x06 /* Public */,
       8,    1,  301,    2, 0x06 /* Public */,
      11,    1,  304,    2, 0x06 /* Public */,
      13,    1,  307,    2, 0x06 /* Public */,
      15,    4,  310,    2, 0x06 /* Public */,
      20,    1,  319,    2, 0x06 /* Public */,
      22,    3,  322,    2, 0x06 /* Public */,
      26,    1,  329,    2, 0x06 /* Public */,
      28,    1,  332,    2, 0x06 /* Public */,
      31,    1,  335,    2, 0x06 /* Public */,
      33,    1,  338,    2, 0x06 /* Public */,
      35,    1,  341,    2, 0x06 /* Public */,
      37,    2,  344,    2, 0x06 /* Public */,
      40,    1,  349,    2, 0x06 /* Public */,
      41,    1,  352,    2, 0x06 /* Public */,
      42,    1,  355,    2, 0x06 /* Public */,
      43,    1,  358,    2, 0x06 /* Public */,
      44,    1,  361,    2, 0x06 /* Public */,
      45,    1,  364,    2, 0x06 /* Public */,
      46,    1,  367,    2, 0x06 /* Public */,
      47,    1,  370,    2, 0x06 /* Public */,
      48,    1,  373,    2, 0x06 /* Public */,
      49,    3,  376,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    1,  383,    2, 0x0a /* Public */,
      57,    1,  386,    2, 0x0a /* Public */,
      58,    1,  389,    2, 0x0a /* Public */,
      59,    1,  392,    2, 0x0a /* Public */,
       1,    1,  395,    2, 0x0a /* Public */,
       4,    1,  398,    2, 0x0a /* Public */,
       6,    1,  401,    2, 0x0a /* Public */,
      13,    1,  404,    2, 0x0a /* Public */,
      64,    1,  407,    2, 0x0a /* Public */,
      66,    1,  410,    2, 0x0a /* Public */,
      15,    1,  413,    2, 0x0a /* Public */,
      37,    1,  416,    2, 0x0a /* Public */,
      69,    1,  419,    2, 0x0a /* Public */,
      22,    1,  422,    2, 0x0a /* Public */,
      26,    1,  425,    2, 0x0a /* Public */,
      31,    1,  428,    2, 0x0a /* Public */,
      28,    1,  431,    2, 0x0a /* Public */,
      33,    2,  434,    2, 0x0a /* Public */,
      77,    2,  439,    2, 0x0a /* Public */,
      80,    1,  444,    2, 0x0a /* Public */,
      81,    1,  447,    2, 0x0a /* Public */,
      82,    1,  450,    2, 0x0a /* Public */,
      40,    1,  453,    2, 0x0a /* Public */,
      41,    1,  456,    2, 0x0a /* Public */,
      42,    1,  459,    2, 0x0a /* Public */,
      43,    1,  462,    2, 0x0a /* Public */,
      84,    0,  465,    2, 0x0a /* Public */,
      85,    1,  466,    2, 0x0a /* Public */,
      86,    1,  469,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   16,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 9,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   24,   25,
    QMetaType::Void, QMetaType::Float,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   38,   39,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 50, 0x80000000 | 53,   51,   52,   54,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 62,   61,
    QMetaType::Void, 0x80000000 | 63,   61,
    QMetaType::Void, 0x80000000 | 62,   61,
    QMetaType::Void, 0x80000000 | 65,   61,
    QMetaType::Void, 0x80000000 | 65,   61,
    QMetaType::Void, 0x80000000 | 67,   61,
    QMetaType::Void, 0x80000000 | 68,   61,
    QMetaType::Void, 0x80000000 | 70,   61,
    QMetaType::Void, 0x80000000 | 71,   61,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 72,   61,
    QMetaType::Bool, 0x80000000 | 73, 0x80000000 | 75,   74,   76,
    QMetaType::Bool, 0x80000000 | 78, 0x80000000 | 79,   74,   76,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::QString,   87,

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
        case 7: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 8: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 9: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 12: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->trigImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->graphCall((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 26: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->sendUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->sendUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->capImgPub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->waterCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 31: _t->commCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 32: _t->armToolCallback((*reinterpret_cast< const std_msgs::Int8ConstPtr(*)>(_a[1]))); break;
        case 33: _t->velCallback((*reinterpret_cast< const std_msgs::Int16::ConstPtr(*)>(_a[1]))); break;
        case 34: _t->odomCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 35: _t->tripCallback((*reinterpret_cast< const std_msgs::Int32::ConstPtr(*)>(_a[1]))); break;
        case 36: _t->crawlerCallback((*reinterpret_cast< const my_actuator::vitals::ConstPtr(*)>(_a[1]))); break;
        case 37: _t->thicknessCallback((*reinterpret_cast< const serialtoros::thick_arr::ConstPtr(*)>(_a[1]))); break;
        case 38: _t->graphCallback((*reinterpret_cast< const serialtoros::graph_arr::ConstPtr(*)>(_a[1]))); break;
        case 39: _t->utCallback((*reinterpret_cast< const serialtoros::VDE_arr::ConstPtr(*)>(_a[1]))); break;
        case 40: _t->fCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 41: _t->currentCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 42: _t->uidCallback((*reinterpret_cast< const launch_crawler::SerialNumbers::ConstPtr(*)>(_a[1]))); break;
        case 43: { bool _r = _t->toggleCallback((*reinterpret_cast< stm_client::tool_status::Request(*)>(_a[1])),(*reinterpret_cast< stm_client::tool_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->imgCallback((*reinterpret_cast< serialtoros::GraphPath::Request(*)>(_a[1])),(*reinterpret_cast< serialtoros::GraphPath::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->sendToolData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->crawlerInitSrv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->reset_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->slideCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->slideCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->lacCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->lacCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->checkArmStatus(); break;
        case 53: _t->reset_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->saveImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        case 8:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 25:
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
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::crawlerCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armCallback)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::utCallback)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::fCallback)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::uidCallback)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::currentCallback)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::toggleCallback)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::trigImg)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::thicknessCallback)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCW)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::slideCCW)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCW)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::lacCCW)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopArm)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstArm)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::initCrawler)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopCrawler)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstCrawler)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<double> , QVector<double> , int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::graphCall)) {
                *result = 25;
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
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
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
void RosThread::crawlerCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosThread::armCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RosThread::utCallback(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RosThread::fCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RosThread::uidCallback(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RosThread::currentCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RosThread::toggleCallback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RosThread::trigImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RosThread::thicknessCallback(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RosThread::slideCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RosThread::slideCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RosThread::lacCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RosThread::lacCCW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RosThread::stopArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RosThread::rstArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RosThread::initCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RosThread::stopCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RosThread::rstCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RosThread::graphCall(QVector<double> _t1, QVector<double> _t2, int64_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
