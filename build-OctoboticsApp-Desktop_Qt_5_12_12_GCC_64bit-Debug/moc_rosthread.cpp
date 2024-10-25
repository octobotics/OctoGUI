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
    QByteArrayData data[85];
    char stringdata0[1098];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosThread_t qt_meta_stringdata_RosThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RosThread"
QT_MOC_LITERAL(1, 10, 12), // "commCallback"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "value"
QT_MOC_LITERAL(4, 30, 15), // "armToolCallback"
QT_MOC_LITERAL(5, 46, 12), // "battCallback"
QT_MOC_LITERAL(6, 59, 12), // "tempCallback"
QT_MOC_LITERAL(7, 72, 12), // "QVector<int>"
QT_MOC_LITERAL(8, 85, 4), // "temp"
QT_MOC_LITERAL(9, 90, 13), // "errorCallback"
QT_MOC_LITERAL(10, 104, 3), // "err"
QT_MOC_LITERAL(11, 108, 11), // "velCallback"
QT_MOC_LITERAL(12, 120, 18), // "current_vel_linear"
QT_MOC_LITERAL(13, 139, 19), // "current_vel_angular"
QT_MOC_LITERAL(14, 159, 10), // "max_linear"
QT_MOC_LITERAL(15, 170, 11), // "max_angular"
QT_MOC_LITERAL(16, 182, 15), // "crawlerCallback"
QT_MOC_LITERAL(17, 198, 2), // "m1"
QT_MOC_LITERAL(18, 201, 2), // "m2"
QT_MOC_LITERAL(19, 204, 2), // "m3"
QT_MOC_LITERAL(20, 207, 2), // "m4"
QT_MOC_LITERAL(21, 210, 11), // "armCallback"
QT_MOC_LITERAL(22, 222, 10), // "arm_status"
QT_MOC_LITERAL(23, 233, 10), // "utCallback"
QT_MOC_LITERAL(24, 244, 3), // "vel"
QT_MOC_LITERAL(25, 248, 8), // "deepcoat"
QT_MOC_LITERAL(26, 257, 4), // "echo"
QT_MOC_LITERAL(27, 262, 9), // "fCallback"
QT_MOC_LITERAL(28, 272, 5), // "force"
QT_MOC_LITERAL(29, 278, 11), // "uidCallback"
QT_MOC_LITERAL(30, 290, 16), // "QVector<QString>"
QT_MOC_LITERAL(31, 307, 3), // "uid"
QT_MOC_LITERAL(32, 311, 15), // "currentCallback"
QT_MOC_LITERAL(33, 327, 7), // "current"
QT_MOC_LITERAL(34, 335, 14), // "toggleCallback"
QT_MOC_LITERAL(35, 350, 4), // "flag"
QT_MOC_LITERAL(36, 355, 7), // "trigImg"
QT_MOC_LITERAL(37, 363, 1), // "k"
QT_MOC_LITERAL(38, 365, 17), // "thicknessCallback"
QT_MOC_LITERAL(39, 383, 9), // "thickness"
QT_MOC_LITERAL(40, 393, 4), // "unit"
QT_MOC_LITERAL(41, 398, 7), // "initArm"
QT_MOC_LITERAL(42, 406, 7), // "stopArm"
QT_MOC_LITERAL(43, 414, 6), // "rstArm"
QT_MOC_LITERAL(44, 421, 11), // "initCrawler"
QT_MOC_LITERAL(45, 433, 11), // "stopCrawler"
QT_MOC_LITERAL(46, 445, 10), // "rstCrawler"
QT_MOC_LITERAL(47, 456, 9), // "graphCall"
QT_MOC_LITERAL(48, 466, 15), // "QVector<double>"
QT_MOC_LITERAL(49, 482, 4), // "data"
QT_MOC_LITERAL(50, 487, 5), // "tuple"
QT_MOC_LITERAL(51, 493, 7), // "int64_t"
QT_MOC_LITERAL(52, 501, 7), // "x_range"
QT_MOC_LITERAL(53, 509, 7), // "addLine"
QT_MOC_LITERAL(54, 517, 7), // "newLine"
QT_MOC_LITERAL(55, 525, 9), // "sendUtVel"
QT_MOC_LITERAL(56, 535, 10), // "sendUtData"
QT_MOC_LITERAL(57, 546, 9), // "capImgPub"
QT_MOC_LITERAL(58, 556, 24), // "std_msgs::Int8::ConstPtr"
QT_MOC_LITERAL(59, 581, 3), // "msg"
QT_MOC_LITERAL(60, 585, 22), // "std_msgs::Int8ConstPtr"
QT_MOC_LITERAL(61, 608, 30), // "octo_qt::ang_lin_arr::ConstPtr"
QT_MOC_LITERAL(62, 639, 29), // "my_actuator::vitals::ConstPtr"
QT_MOC_LITERAL(63, 669, 32), // "serialtoros::thick_arr::ConstPtr"
QT_MOC_LITERAL(64, 702, 13), // "graphCallback"
QT_MOC_LITERAL(65, 716, 32), // "serialtoros::graph_arr::ConstPtr"
QT_MOC_LITERAL(66, 749, 30), // "serialtoros::VDE_arr::ConstPtr"
QT_MOC_LITERAL(67, 780, 27), // "std_msgs::Float32::ConstPtr"
QT_MOC_LITERAL(68, 808, 39), // "launch_crawler::SerialNumbers..."
QT_MOC_LITERAL(69, 848, 33), // "stm_client::tool_status::Requ..."
QT_MOC_LITERAL(70, 882, 3), // "req"
QT_MOC_LITERAL(71, 886, 34), // "stm_client::tool_status::Resp..."
QT_MOC_LITERAL(72, 921, 3), // "res"
QT_MOC_LITERAL(73, 925, 11), // "imgCallback"
QT_MOC_LITERAL(74, 937, 32), // "serialtoros::GraphPath::Request&"
QT_MOC_LITERAL(75, 970, 33), // "serialtoros::GraphPath::Respo..."
QT_MOC_LITERAL(76, 1004, 12), // "sendToolData"
QT_MOC_LITERAL(77, 1017, 14), // "crawlerInitSrv"
QT_MOC_LITERAL(78, 1032, 13), // "reset_crawler"
QT_MOC_LITERAL(79, 1046, 3), // "val"
QT_MOC_LITERAL(80, 1050, 10), // "armInitSrv"
QT_MOC_LITERAL(81, 1061, 14), // "checkArmStatus"
QT_MOC_LITERAL(82, 1076, 9), // "reset_arm"
QT_MOC_LITERAL(83, 1086, 7), // "saveImg"
QT_MOC_LITERAL(84, 1094, 3) // "img"

    },
    "RosThread\0commCallback\0\0value\0"
    "armToolCallback\0battCallback\0tempCallback\0"
    "QVector<int>\0temp\0errorCallback\0err\0"
    "velCallback\0current_vel_linear\0"
    "current_vel_angular\0max_linear\0"
    "max_angular\0crawlerCallback\0m1\0m2\0m3\0"
    "m4\0armCallback\0arm_status\0utCallback\0"
    "vel\0deepcoat\0echo\0fCallback\0force\0"
    "uidCallback\0QVector<QString>\0uid\0"
    "currentCallback\0current\0toggleCallback\0"
    "flag\0trigImg\0k\0thicknessCallback\0"
    "thickness\0unit\0initArm\0stopArm\0rstArm\0"
    "initCrawler\0stopCrawler\0rstCrawler\0"
    "graphCall\0QVector<double>\0data\0tuple\0"
    "int64_t\0x_range\0addLine\0newLine\0"
    "sendUtVel\0sendUtData\0capImgPub\0"
    "std_msgs::Int8::ConstPtr\0msg\0"
    "std_msgs::Int8ConstPtr\0"
    "octo_qt::ang_lin_arr::ConstPtr\0"
    "my_actuator::vitals::ConstPtr\0"
    "serialtoros::thick_arr::ConstPtr\0"
    "graphCallback\0serialtoros::graph_arr::ConstPtr\0"
    "serialtoros::VDE_arr::ConstPtr\0"
    "std_msgs::Float32::ConstPtr\0"
    "launch_crawler::SerialNumbers::ConstPtr\0"
    "stm_client::tool_status::Request&\0req\0"
    "stm_client::tool_status::Response&\0"
    "res\0imgCallback\0serialtoros::GraphPath::Request&\0"
    "serialtoros::GraphPath::Response&\0"
    "sendToolData\0crawlerInitSrv\0reset_crawler\0"
    "val\0armInitSrv\0checkArmStatus\0reset_arm\0"
    "saveImg\0img"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  239,    2, 0x06 /* Public */,
       4,    1,  242,    2, 0x06 /* Public */,
       5,    1,  245,    2, 0x06 /* Public */,
       6,    1,  248,    2, 0x06 /* Public */,
       9,    1,  251,    2, 0x06 /* Public */,
      11,    4,  254,    2, 0x06 /* Public */,
      16,    4,  263,    2, 0x06 /* Public */,
      21,    1,  272,    2, 0x06 /* Public */,
      23,    3,  275,    2, 0x06 /* Public */,
      27,    1,  282,    2, 0x06 /* Public */,
      29,    1,  285,    2, 0x06 /* Public */,
      32,    1,  288,    2, 0x06 /* Public */,
      34,    1,  291,    2, 0x06 /* Public */,
      36,    1,  294,    2, 0x06 /* Public */,
      38,    2,  297,    2, 0x06 /* Public */,
      41,    1,  302,    2, 0x06 /* Public */,
      42,    1,  305,    2, 0x06 /* Public */,
      43,    1,  308,    2, 0x06 /* Public */,
      44,    1,  311,    2, 0x06 /* Public */,
      45,    1,  314,    2, 0x06 /* Public */,
      46,    1,  317,    2, 0x06 /* Public */,
      47,    3,  320,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      53,    1,  327,    2, 0x0a /* Public */,
      55,    1,  330,    2, 0x0a /* Public */,
      56,    1,  333,    2, 0x0a /* Public */,
      57,    1,  336,    2, 0x0a /* Public */,
       1,    1,  339,    2, 0x0a /* Public */,
       4,    1,  342,    2, 0x0a /* Public */,
      11,    1,  345,    2, 0x0a /* Public */,
      16,    1,  348,    2, 0x0a /* Public */,
      38,    1,  351,    2, 0x0a /* Public */,
      64,    1,  354,    2, 0x0a /* Public */,
      23,    1,  357,    2, 0x0a /* Public */,
      27,    1,  360,    2, 0x0a /* Public */,
      32,    1,  363,    2, 0x0a /* Public */,
      29,    1,  366,    2, 0x0a /* Public */,
      34,    2,  369,    2, 0x0a /* Public */,
      73,    2,  374,    2, 0x0a /* Public */,
      76,    1,  379,    2, 0x0a /* Public */,
      77,    1,  382,    2, 0x0a /* Public */,
      78,    1,  385,    2, 0x0a /* Public */,
      80,    1,  388,    2, 0x0a /* Public */,
      81,    0,  391,    2, 0x0a /* Public */,
      82,    1,  392,    2, 0x0a /* Public */,
      83,    1,  395,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   17,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 7,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,
    QMetaType::Void, QMetaType::Float,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Float,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   39,   40,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 48, 0x80000000 | 51,   49,   50,   52,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 60,   59,
    QMetaType::Void, 0x80000000 | 61,   59,
    QMetaType::Void, 0x80000000 | 62,   59,
    QMetaType::Void, 0x80000000 | 63,   59,
    QMetaType::Void, 0x80000000 | 65,   59,
    QMetaType::Void, 0x80000000 | 66,   59,
    QMetaType::Void, 0x80000000 | 67,   59,
    QMetaType::Void, 0x80000000 | 67,   59,
    QMetaType::Void, 0x80000000 | 68,   59,
    QMetaType::Bool, 0x80000000 | 69, 0x80000000 | 71,   70,   72,
    QMetaType::Bool, 0x80000000 | 74, 0x80000000 | 75,   70,   72,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::QString,   84,

       0        // eod
};

void RosThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 4: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 5: _t->velCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 6: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 8: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->fCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 11: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->trigImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 15: _t->initArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->graphCall((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 22: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->sendUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->sendUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->capImgPub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->commCallback((*reinterpret_cast< const std_msgs::Int8::ConstPtr(*)>(_a[1]))); break;
        case 27: _t->armToolCallback((*reinterpret_cast< const std_msgs::Int8ConstPtr(*)>(_a[1]))); break;
        case 28: _t->velCallback((*reinterpret_cast< const octo_qt::ang_lin_arr::ConstPtr(*)>(_a[1]))); break;
        case 29: _t->crawlerCallback((*reinterpret_cast< const my_actuator::vitals::ConstPtr(*)>(_a[1]))); break;
        case 30: _t->thicknessCallback((*reinterpret_cast< const serialtoros::thick_arr::ConstPtr(*)>(_a[1]))); break;
        case 31: _t->graphCallback((*reinterpret_cast< const serialtoros::graph_arr::ConstPtr(*)>(_a[1]))); break;
        case 32: _t->utCallback((*reinterpret_cast< const serialtoros::VDE_arr::ConstPtr(*)>(_a[1]))); break;
        case 33: _t->fCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 34: _t->currentCallback((*reinterpret_cast< const std_msgs::Float32::ConstPtr(*)>(_a[1]))); break;
        case 35: _t->uidCallback((*reinterpret_cast< const launch_crawler::SerialNumbers::ConstPtr(*)>(_a[1]))); break;
        case 36: { bool _r = _t->toggleCallback((*reinterpret_cast< stm_client::tool_status::Request(*)>(_a[1])),(*reinterpret_cast< stm_client::tool_status::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->imgCallback((*reinterpret_cast< serialtoros::GraphPath::Request(*)>(_a[1])),(*reinterpret_cast< serialtoros::GraphPath::Response(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->sendToolData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->crawlerInitSrv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->reset_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->armInitSrv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->checkArmStatus(); break;
        case 43: _t->reset_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->saveImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 7:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 21:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::commCallback)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armToolCallback)) {
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
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::tempCallback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::errorCallback)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::velCallback)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::crawlerCallback)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::armCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::utCallback)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::fCallback)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::uidCallback)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::currentCallback)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::toggleCallback)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::trigImg)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::thicknessCallback)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::initArm)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopArm)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstArm)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::initCrawler)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::stopCrawler)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::rstCrawler)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RosThread::*)(QVector<double> , QVector<double> , int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosThread::graphCall)) {
                *result = 21;
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
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void RosThread::commCallback(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosThread::armToolCallback(int _t1)
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
void RosThread::tempCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosThread::errorCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosThread::velCallback(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosThread::crawlerCallback(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosThread::armCallback(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosThread::utCallback(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RosThread::fCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RosThread::uidCallback(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RosThread::currentCallback(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RosThread::toggleCallback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RosThread::trigImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RosThread::thicknessCallback(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RosThread::initArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RosThread::stopArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RosThread::rstArm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RosThread::initCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RosThread::stopCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RosThread::rstCrawler(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RosThread::graphCall(QVector<double> _t1, QVector<double> _t2, int64_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
