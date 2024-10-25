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
#include <QtCore/QVector>
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
    QByteArrayData data[144];
    char stringdata0[1926];
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
QT_MOC_LITERAL(5, 32, 5), // "value"
QT_MOC_LITERAL(6, 38, 6), // "value2"
QT_MOC_LITERAL(7, 45, 16), // "comStatusChanged"
QT_MOC_LITERAL(8, 62, 18), // "toggleValueChanged"
QT_MOC_LITERAL(9, 81, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(10, 102, 17), // "toolToggleChanged"
QT_MOC_LITERAL(11, 120, 19), // "initArmValueChanged"
QT_MOC_LITERAL(12, 140, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(13, 159, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(14, 179, 6), // "rstArm"
QT_MOC_LITERAL(15, 186, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(16, 212, 16), // "armStatusChanged"
QT_MOC_LITERAL(17, 229, 12), // "QVector<int>"
QT_MOC_LITERAL(18, 242, 6), // "status"
QT_MOC_LITERAL(19, 249, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(20, 273, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(21, 297, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(22, 320, 15), // "errValueChanged"
QT_MOC_LITERAL(23, 336, 16), // "tempValueChanged"
QT_MOC_LITERAL(24, 353, 10), // "rstCrawler"
QT_MOC_LITERAL(25, 364, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(26, 383, 20), // "velocityValueChanged"
QT_MOC_LITERAL(27, 404, 19), // "batteryValueChanged"
QT_MOC_LITERAL(28, 424, 19), // "currentValueChanged"
QT_MOC_LITERAL(29, 444, 15), // "utstatusChanged"
QT_MOC_LITERAL(30, 460, 16), // "thicknessChanged"
QT_MOC_LITERAL(31, 477, 12), // "utVelChanged"
QT_MOC_LITERAL(32, 490, 13), // "utDataChanged"
QT_MOC_LITERAL(33, 504, 10), // "uidChanged"
QT_MOC_LITERAL(34, 515, 16), // "QVector<QString>"
QT_MOC_LITERAL(35, 532, 6), // "capImg"
QT_MOC_LITERAL(36, 539, 13), // "initRosThread"
QT_MOC_LITERAL(37, 553, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(38, 575, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(39, 599, 12), // "getComStatus"
QT_MOC_LITERAL(40, 612, 12), // "setComStatus"
QT_MOC_LITERAL(41, 625, 12), // "commCallback"
QT_MOC_LITERAL(42, 638, 14), // "getToggleValue"
QT_MOC_LITERAL(43, 653, 14), // "setToggleValue"
QT_MOC_LITERAL(44, 668, 4), // "flag"
QT_MOC_LITERAL(45, 673, 14), // "toggleCallback"
QT_MOC_LITERAL(46, 688, 13), // "getToolToggle"
QT_MOC_LITERAL(47, 702, 13), // "setToolToggle"
QT_MOC_LITERAL(48, 716, 16), // "getArmToolStatus"
QT_MOC_LITERAL(49, 733, 16), // "setArmToolStatus"
QT_MOC_LITERAL(50, 750, 15), // "armToolCallback"
QT_MOC_LITERAL(51, 766, 3), // "arg"
QT_MOC_LITERAL(52, 770, 15), // "getInitArmValue"
QT_MOC_LITERAL(53, 786, 15), // "setInitArmValue"
QT_MOC_LITERAL(54, 802, 1), // "k"
QT_MOC_LITERAL(55, 804, 15), // "getStopArmValue"
QT_MOC_LITERAL(56, 820, 15), // "setStopArmValue"
QT_MOC_LITERAL(57, 836, 14), // "setRstArmValue"
QT_MOC_LITERAL(58, 851, 14), // "getRstArmValue"
QT_MOC_LITERAL(59, 866, 12), // "getArmStatus"
QT_MOC_LITERAL(60, 879, 12), // "setArmStatus"
QT_MOC_LITERAL(61, 892, 12), // "call_arminit"
QT_MOC_LITERAL(62, 905, 3), // "val"
QT_MOC_LITERAL(63, 909, 14), // "trig_armStatus"
QT_MOC_LITERAL(64, 924, 7), // "rst_arm"
QT_MOC_LITERAL(65, 932, 11), // "armCallback"
QT_MOC_LITERAL(66, 944, 7), // "initArm"
QT_MOC_LITERAL(67, 952, 7), // "stopArm"
QT_MOC_LITERAL(68, 960, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(69, 980, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(70, 1000, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(71, 1020, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(72, 1040, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(73, 1059, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(74, 1078, 12), // "getTempValue"
QT_MOC_LITERAL(75, 1091, 12), // "setTempValue"
QT_MOC_LITERAL(76, 1104, 11), // "getErrValue"
QT_MOC_LITERAL(77, 1116, 11), // "setErrValue"
QT_MOC_LITERAL(78, 1128, 16), // "getVelocityValue"
QT_MOC_LITERAL(79, 1145, 16), // "setVelocityValue"
QT_MOC_LITERAL(80, 1162, 14), // "getCrawlStatus"
QT_MOC_LITERAL(81, 1177, 14), // "setCrawlStatus"
QT_MOC_LITERAL(82, 1192, 11), // "rst_crawler"
QT_MOC_LITERAL(83, 1204, 16), // "call_crawlerinit"
QT_MOC_LITERAL(84, 1221, 13), // "errorCallback"
QT_MOC_LITERAL(85, 1235, 12), // "tempCallback"
QT_MOC_LITERAL(86, 1248, 11), // "velCallback"
QT_MOC_LITERAL(87, 1260, 18), // "current_vel_linear"
QT_MOC_LITERAL(88, 1279, 19), // "current_vel_angular"
QT_MOC_LITERAL(89, 1299, 10), // "max_linear"
QT_MOC_LITERAL(90, 1310, 11), // "max_angular"
QT_MOC_LITERAL(91, 1322, 15), // "crawlerCallback"
QT_MOC_LITERAL(92, 1338, 9), // "frontLeft"
QT_MOC_LITERAL(93, 1348, 10), // "frontRight"
QT_MOC_LITERAL(94, 1359, 10), // "backrRight"
QT_MOC_LITERAL(95, 1370, 8), // "backLeft"
QT_MOC_LITERAL(96, 1379, 11), // "initCrawler"
QT_MOC_LITERAL(97, 1391, 11), // "stopCrawler"
QT_MOC_LITERAL(98, 1403, 15), // "getBatteryValue"
QT_MOC_LITERAL(99, 1419, 15), // "setBatteryValue"
QT_MOC_LITERAL(100, 1435, 12), // "battCallback"
QT_MOC_LITERAL(101, 1448, 15), // "getCurrentValue"
QT_MOC_LITERAL(102, 1464, 15), // "setCurrentValue"
QT_MOC_LITERAL(103, 1480, 15), // "currentCallback"
QT_MOC_LITERAL(104, 1496, 9), // "getUtData"
QT_MOC_LITERAL(105, 1506, 9), // "setUtData"
QT_MOC_LITERAL(106, 1516, 8), // "getUtVel"
QT_MOC_LITERAL(107, 1525, 8), // "setUtVel"
QT_MOC_LITERAL(108, 1534, 11), // "getUtstatus"
QT_MOC_LITERAL(109, 1546, 11), // "setUtstatus"
QT_MOC_LITERAL(110, 1558, 12), // "getThickness"
QT_MOC_LITERAL(111, 1571, 12), // "setThickness"
QT_MOC_LITERAL(112, 1584, 10), // "utCallback"
QT_MOC_LITERAL(113, 1595, 3), // "vel"
QT_MOC_LITERAL(114, 1599, 8), // "deepcoat"
QT_MOC_LITERAL(115, 1608, 4), // "echo"
QT_MOC_LITERAL(116, 1613, 17), // "thicknessCallback"
QT_MOC_LITERAL(117, 1631, 9), // "thickness"
QT_MOC_LITERAL(118, 1641, 4), // "unit"
QT_MOC_LITERAL(119, 1646, 6), // "getUid"
QT_MOC_LITERAL(120, 1653, 6), // "setUid"
QT_MOC_LITERAL(121, 1660, 11), // "uidCallback"
QT_MOC_LITERAL(122, 1672, 11), // "call_capImg"
QT_MOC_LITERAL(123, 1684, 9), // "comStatus"
QT_MOC_LITERAL(124, 1694, 11), // "toggleValue"
QT_MOC_LITERAL(125, 1706, 13), // "armToolStatus"
QT_MOC_LITERAL(126, 1720, 10), // "toolToggle"
QT_MOC_LITERAL(127, 1731, 12), // "initArmValue"
QT_MOC_LITERAL(128, 1744, 12), // "stopArmValue"
QT_MOC_LITERAL(129, 1757, 11), // "rstArmValue"
QT_MOC_LITERAL(130, 1769, 9), // "armStatus"
QT_MOC_LITERAL(131, 1779, 16), // "initCrawlerValue"
QT_MOC_LITERAL(132, 1796, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(133, 1813, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(134, 1829, 8), // "errValue"
QT_MOC_LITERAL(135, 1838, 9), // "tempValue"
QT_MOC_LITERAL(136, 1848, 11), // "crawlStatus"
QT_MOC_LITERAL(137, 1860, 13), // "velocityValue"
QT_MOC_LITERAL(138, 1874, 12), // "batteryValue"
QT_MOC_LITERAL(139, 1887, 12), // "currentValue"
QT_MOC_LITERAL(140, 1900, 6), // "utData"
QT_MOC_LITERAL(141, 1907, 5), // "utVel"
QT_MOC_LITERAL(142, 1913, 8), // "utstatus"
QT_MOC_LITERAL(143, 1922, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "initArmValueChanged\0rstArmValueChanged\0"
    "stopArmValueChanged\0rstArm\0"
    "trigArmStatusValueChanged\0armStatusChanged\0"
    "QVector<int>\0status\0initCrawlerValueChanged\0"
    "stopCrawlerValueChanged\0rstCrawlerValueChanged\0"
    "errValueChanged\0tempValueChanged\0"
    "rstCrawler\0crawlStatusChanged\0"
    "velocityValueChanged\0batteryValueChanged\0"
    "currentValueChanged\0utstatusChanged\0"
    "thicknessChanged\0utVelChanged\0"
    "utDataChanged\0uidChanged\0QVector<QString>\0"
    "capImg\0initRosThread\0on_pushButton_pressed\0"
    "on_pushButton_2_pressed\0getComStatus\0"
    "setComStatus\0commCallback\0getToggleValue\0"
    "setToggleValue\0flag\0toggleCallback\0"
    "getToolToggle\0setToolToggle\0"
    "getArmToolStatus\0setArmToolStatus\0"
    "armToolCallback\0arg\0getInitArmValue\0"
    "setInitArmValue\0k\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0initArm\0stopArm\0"
    "getInitCrawlerValue\0setInitCrawlerValue\0"
    "getStopCrawlerValue\0setStopCrawlerValue\0"
    "getRstCrawlerValue\0setRstCrawlerValue\0"
    "getTempValue\0setTempValue\0getErrValue\0"
    "setErrValue\0getVelocityValue\0"
    "setVelocityValue\0getCrawlStatus\0"
    "setCrawlStatus\0rst_crawler\0call_crawlerinit\0"
    "errorCallback\0tempCallback\0velCallback\0"
    "current_vel_linear\0current_vel_angular\0"
    "max_linear\0max_angular\0crawlerCallback\0"
    "frontLeft\0frontRight\0backrRight\0"
    "backLeft\0initCrawler\0stopCrawler\0"
    "getBatteryValue\0setBatteryValue\0"
    "battCallback\0getCurrentValue\0"
    "setCurrentValue\0currentCallback\0"
    "getUtData\0setUtData\0getUtVel\0setUtVel\0"
    "getUtstatus\0setUtstatus\0getThickness\0"
    "setThickness\0utCallback\0vel\0deepcoat\0"
    "echo\0thicknessCallback\0thickness\0unit\0"
    "getUid\0setUid\0uidCallback\0call_capImg\0"
    "comStatus\0toggleValue\0armToolStatus\0"
    "toolToggle\0initArmValue\0stopArmValue\0"
    "rstArmValue\0armStatus\0initCrawlerValue\0"
    "stopCrawlerValue\0rstCrawlerValue\0"
    "errValue\0tempValue\0crawlStatus\0"
    "velocityValue\0batteryValue\0currentValue\0"
    "utData\0utVel\0utstatus\0uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
      22,  794, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  524,    2, 0x06 /* Public */,
       4,    1,  527,    2, 0x06 /* Public */,
       5,    1,  530,    2, 0x06 /* Public */,
       6,    1,  533,    2, 0x06 /* Public */,
       7,    1,  536,    2, 0x06 /* Public */,
       8,    1,  539,    2, 0x06 /* Public */,
       9,    1,  542,    2, 0x06 /* Public */,
      10,    1,  545,    2, 0x06 /* Public */,
      11,    1,  548,    2, 0x06 /* Public */,
      12,    1,  551,    2, 0x06 /* Public */,
      13,    1,  554,    2, 0x06 /* Public */,
      14,    1,  557,    2, 0x06 /* Public */,
      15,    0,  560,    2, 0x06 /* Public */,
      16,    1,  561,    2, 0x06 /* Public */,
      19,    1,  564,    2, 0x06 /* Public */,
      20,    1,  567,    2, 0x06 /* Public */,
      21,    1,  570,    2, 0x06 /* Public */,
      22,    1,  573,    2, 0x06 /* Public */,
      23,    1,  576,    2, 0x06 /* Public */,
      24,    1,  579,    2, 0x06 /* Public */,
      25,    1,  582,    2, 0x06 /* Public */,
      26,    1,  585,    2, 0x06 /* Public */,
      27,    1,  588,    2, 0x06 /* Public */,
      28,    1,  591,    2, 0x06 /* Public */,
      29,    1,  594,    2, 0x06 /* Public */,
      30,    1,  597,    2, 0x06 /* Public */,
      31,    1,  600,    2, 0x06 /* Public */,
      32,    1,  603,    2, 0x06 /* Public */,
      33,    1,  606,    2, 0x06 /* Public */,
      35,    1,  609,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    0,  612,    2, 0x0a /* Public */,
      37,    0,  613,    2, 0x0a /* Public */,
      38,    0,  614,    2, 0x0a /* Public */,
      39,    0,  615,    2, 0x0a /* Public */,
      40,    1,  616,    2, 0x0a /* Public */,
      41,    1,  619,    2, 0x0a /* Public */,
      42,    0,  622,    2, 0x0a /* Public */,
      43,    1,  623,    2, 0x0a /* Public */,
      45,    1,  626,    2, 0x0a /* Public */,
      46,    0,  629,    2, 0x0a /* Public */,
      47,    1,  630,    2, 0x0a /* Public */,
      48,    0,  633,    2, 0x0a /* Public */,
      49,    1,  634,    2, 0x0a /* Public */,
      50,    1,  637,    2, 0x0a /* Public */,
      52,    0,  640,    2, 0x0a /* Public */,
      53,    1,  641,    2, 0x0a /* Public */,
      55,    0,  644,    2, 0x0a /* Public */,
      56,    1,  645,    2, 0x0a /* Public */,
      57,    1,  648,    2, 0x0a /* Public */,
      58,    0,  651,    2, 0x0a /* Public */,
      59,    0,  652,    2, 0x0a /* Public */,
      60,    1,  653,    2, 0x0a /* Public */,
      61,    1,  656,    2, 0x0a /* Public */,
      63,    0,  659,    2, 0x0a /* Public */,
      64,    1,  660,    2, 0x0a /* Public */,
      65,    1,  663,    2, 0x0a /* Public */,
      66,    1,  666,    2, 0x0a /* Public */,
      67,    1,  669,    2, 0x0a /* Public */,
      14,    1,  672,    2, 0x0a /* Public */,
      68,    0,  675,    2, 0x0a /* Public */,
      69,    1,  676,    2, 0x0a /* Public */,
      70,    0,  679,    2, 0x0a /* Public */,
      71,    1,  680,    2, 0x0a /* Public */,
      72,    0,  683,    2, 0x0a /* Public */,
      73,    1,  684,    2, 0x0a /* Public */,
      74,    0,  687,    2, 0x0a /* Public */,
      75,    1,  688,    2, 0x0a /* Public */,
      76,    0,  691,    2, 0x0a /* Public */,
      77,    1,  692,    2, 0x0a /* Public */,
      78,    0,  695,    2, 0x0a /* Public */,
      79,    1,  696,    2, 0x0a /* Public */,
      80,    0,  699,    2, 0x0a /* Public */,
      81,    1,  700,    2, 0x0a /* Public */,
      82,    1,  703,    2, 0x0a /* Public */,
      83,    1,  706,    2, 0x0a /* Public */,
      84,    1,  709,    2, 0x0a /* Public */,
      85,    1,  712,    2, 0x0a /* Public */,
      86,    4,  715,    2, 0x0a /* Public */,
      91,    4,  724,    2, 0x0a /* Public */,
      96,    1,  733,    2, 0x0a /* Public */,
      97,    1,  736,    2, 0x0a /* Public */,
      24,    1,  739,    2, 0x0a /* Public */,
      98,    0,  742,    2, 0x0a /* Public */,
      99,    1,  743,    2, 0x0a /* Public */,
     100,    1,  746,    2, 0x0a /* Public */,
     101,    0,  749,    2, 0x0a /* Public */,
     102,    1,  750,    2, 0x0a /* Public */,
     103,    1,  753,    2, 0x0a /* Public */,
     104,    0,  756,    2, 0x0a /* Public */,
     105,    1,  757,    2, 0x0a /* Public */,
     106,    0,  760,    2, 0x0a /* Public */,
     107,    1,  761,    2, 0x0a /* Public */,
     108,    0,  764,    2, 0x0a /* Public */,
     109,    1,  765,    2, 0x0a /* Public */,
     110,    0,  768,    2, 0x0a /* Public */,
     111,    1,  769,    2, 0x0a /* Public */,
     112,    3,  772,    2, 0x0a /* Public */,
     116,    2,  779,    2, 0x0a /* Public */,
     119,    0,  784,    2, 0x0a /* Public */,
     120,    1,  785,    2, 0x0a /* Public */,
     121,    1,  788,    2, 0x0a /* Public */,
     122,    1,  791,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   18,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   18,
    QMetaType::Void, QMetaType::QVariantMap,   18,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Bool,
    0x80000000 | 17,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    0x80000000 | 17,
    QMetaType::Void, 0x80000000 | 17,    5,
    0x80000000 | 17,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   87,   88,   89,   90,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   92,   93,   94,   95,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  113,  114,  115,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  117,  118,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Int,   62,

 // properties: name, type, flags
     123, QMetaType::Int, 0x00495103,
     124, QMetaType::Bool, 0x00495103,
     125, QMetaType::Int, 0x00495103,
     126, QMetaType::QString, 0x00495103,
     127, QMetaType::Bool, 0x00495103,
     128, QMetaType::Bool, 0x00495103,
     129, QMetaType::Bool, 0x00495103,
     130, 0x80000000 | 17, 0x0049510b,
     131, QMetaType::Bool, 0x00495103,
     132, QMetaType::Bool, 0x00495103,
     133, QMetaType::Bool, 0x00495103,
     134, 0x80000000 | 17, 0x0049510b,
     135, 0x80000000 | 17, 0x0049510b,
     136, QMetaType::QVariantMap, 0x00495103,
     137, QMetaType::QVariantMap, 0x00495103,
     138, QMetaType::Float, 0x00495103,
     139, QMetaType::Float, 0x00495103,
     140, QMetaType::QString, 0x00495103,
     141, QMetaType::QString, 0x00495103,
     142, QMetaType::QVariantMap, 0x00495103,
     117, QMetaType::QVariantMap, 0x00495103,
     143, 0x80000000 | 34, 0x0049510b,

 // properties: notify_signal_id
       4,
       5,
       6,
       7,
       8,
      10,
       9,
      13,
      14,
      15,
      16,
      17,
      18,
      20,
      21,
      22,
      23,
      27,
      26,
      24,
      25,
      28,

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
        case 2: _t->value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->value2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->initArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->trigArmStatusValueChanged(); break;
        case 13: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 14: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 18: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 19: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 21: _t->velocityValueChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 22: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 25: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 26: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 29: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->initRosThread(); break;
        case 31: _t->on_pushButton_pressed(); break;
        case 32: _t->on_pushButton_2_pressed(); break;
        case 33: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 42: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: { bool _r = _t->getInitArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->setInitArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 52: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->trig_armStatus(); break;
        case 54: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 56: _t->initArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 67: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 69: { QVariantMap _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setVelocityValue((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 71: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 73: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 76: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 77: _t->velCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 78: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 79: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 84: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 85: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 87: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 88: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 92: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 94: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 96: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 97: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 98: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 100: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 101: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
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
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value2)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initArmValueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 29;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 12:
        case 11:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getComStatus(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getToggleValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getArmToolStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getToolToggle(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getInitArmValue(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 7: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 11: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 12: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 13: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 14: *reinterpret_cast< QVariantMap*>(_v) = _t->getVelocityValue(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 19: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 20: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 21: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setComStatus(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setToggleValue(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setArmToolStatus(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setToolToggle(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setInitArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 8: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 12: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 13: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 14: _t->setVelocityValue(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 15: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 20: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 21: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
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
void Publisher::value(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Publisher::value2(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Publisher::initArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::velocityValueChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
