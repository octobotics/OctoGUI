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
    QByteArrayData data[184];
    char stringdata0[2450];
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
QT_MOC_LITERAL(7, 45, 6), // "value3"
QT_MOC_LITERAL(8, 52, 6), // "value4"
QT_MOC_LITERAL(9, 59, 6), // "value5"
QT_MOC_LITERAL(10, 66, 6), // "value6"
QT_MOC_LITERAL(11, 73, 6), // "value7"
QT_MOC_LITERAL(12, 80, 16), // "comStatusChanged"
QT_MOC_LITERAL(13, 97, 18), // "toggleValueChanged"
QT_MOC_LITERAL(14, 116, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(15, 137, 17), // "toolToggleChanged"
QT_MOC_LITERAL(16, 155, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(17, 175, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(18, 196, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(19, 214, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(20, 233, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(21, 255, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(22, 274, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(23, 294, 6), // "rstArm"
QT_MOC_LITERAL(24, 301, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(25, 327, 16), // "armStatusChanged"
QT_MOC_LITERAL(26, 344, 12), // "QVector<int>"
QT_MOC_LITERAL(27, 357, 6), // "status"
QT_MOC_LITERAL(28, 364, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(29, 388, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(30, 412, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(31, 435, 15), // "errValueChanged"
QT_MOC_LITERAL(32, 451, 16), // "tempValueChanged"
QT_MOC_LITERAL(33, 468, 10), // "rstCrawler"
QT_MOC_LITERAL(34, 479, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(35, 498, 20), // "velocityValueChanged"
QT_MOC_LITERAL(36, 519, 16), // "odomValueChanged"
QT_MOC_LITERAL(37, 536, 12), // "current_odom"
QT_MOC_LITERAL(38, 549, 16), // "tripValueChanged"
QT_MOC_LITERAL(39, 566, 12), // "current_trip"
QT_MOC_LITERAL(40, 579, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(41, 602, 5), // "level"
QT_MOC_LITERAL(42, 608, 19), // "batteryValueChanged"
QT_MOC_LITERAL(43, 628, 19), // "currentValueChanged"
QT_MOC_LITERAL(44, 648, 15), // "utstatusChanged"
QT_MOC_LITERAL(45, 664, 16), // "thicknessChanged"
QT_MOC_LITERAL(46, 681, 12), // "utVelChanged"
QT_MOC_LITERAL(47, 694, 13), // "utDataChanged"
QT_MOC_LITERAL(48, 708, 10), // "uidChanged"
QT_MOC_LITERAL(49, 719, 16), // "QVector<QString>"
QT_MOC_LITERAL(50, 736, 6), // "capImg"
QT_MOC_LITERAL(51, 743, 13), // "initRosThread"
QT_MOC_LITERAL(52, 757, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(53, 779, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(54, 803, 12), // "getComStatus"
QT_MOC_LITERAL(55, 816, 12), // "setComStatus"
QT_MOC_LITERAL(56, 829, 12), // "commCallback"
QT_MOC_LITERAL(57, 842, 14), // "getToggleValue"
QT_MOC_LITERAL(58, 857, 14), // "setToggleValue"
QT_MOC_LITERAL(59, 872, 4), // "flag"
QT_MOC_LITERAL(60, 877, 14), // "toggleCallback"
QT_MOC_LITERAL(61, 892, 13), // "getToolToggle"
QT_MOC_LITERAL(62, 906, 13), // "setToolToggle"
QT_MOC_LITERAL(63, 920, 16), // "getArmToolStatus"
QT_MOC_LITERAL(64, 937, 16), // "setArmToolStatus"
QT_MOC_LITERAL(65, 954, 15), // "armToolCallback"
QT_MOC_LITERAL(66, 970, 3), // "arg"
QT_MOC_LITERAL(67, 974, 15), // "getslideCWValue"
QT_MOC_LITERAL(68, 990, 15), // "setslideCWValue"
QT_MOC_LITERAL(69, 1006, 1), // "k"
QT_MOC_LITERAL(70, 1008, 16), // "getslideCCWValue"
QT_MOC_LITERAL(71, 1025, 16), // "setslideCCWValue"
QT_MOC_LITERAL(72, 1042, 13), // "getlacCWValue"
QT_MOC_LITERAL(73, 1056, 13), // "setlacCWValue"
QT_MOC_LITERAL(74, 1070, 14), // "getlacCCWValue"
QT_MOC_LITERAL(75, 1085, 14), // "setlacCCWValue"
QT_MOC_LITERAL(76, 1100, 17), // "getresetTripValue"
QT_MOC_LITERAL(77, 1118, 17), // "setresetTripValue"
QT_MOC_LITERAL(78, 1136, 13), // "getWaterLevel"
QT_MOC_LITERAL(79, 1150, 13), // "setWaterLevel"
QT_MOC_LITERAL(80, 1164, 15), // "getStopArmValue"
QT_MOC_LITERAL(81, 1180, 15), // "setStopArmValue"
QT_MOC_LITERAL(82, 1196, 14), // "setRstArmValue"
QT_MOC_LITERAL(83, 1211, 14), // "getRstArmValue"
QT_MOC_LITERAL(84, 1226, 12), // "getArmStatus"
QT_MOC_LITERAL(85, 1239, 12), // "setArmStatus"
QT_MOC_LITERAL(86, 1252, 12), // "call_arminit"
QT_MOC_LITERAL(87, 1265, 3), // "val"
QT_MOC_LITERAL(88, 1269, 14), // "trig_armStatus"
QT_MOC_LITERAL(89, 1284, 7), // "rst_arm"
QT_MOC_LITERAL(90, 1292, 11), // "armCallback"
QT_MOC_LITERAL(91, 1304, 7), // "slideCW"
QT_MOC_LITERAL(92, 1312, 8), // "slideCCW"
QT_MOC_LITERAL(93, 1321, 9), // "resetTrip"
QT_MOC_LITERAL(94, 1331, 5), // "lacCW"
QT_MOC_LITERAL(95, 1337, 6), // "lacCCW"
QT_MOC_LITERAL(96, 1344, 7), // "stopArm"
QT_MOC_LITERAL(97, 1352, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(98, 1372, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(99, 1392, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(100, 1412, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(101, 1432, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(102, 1451, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(103, 1470, 12), // "getTempValue"
QT_MOC_LITERAL(104, 1483, 12), // "setTempValue"
QT_MOC_LITERAL(105, 1496, 11), // "getErrValue"
QT_MOC_LITERAL(106, 1508, 11), // "setErrValue"
QT_MOC_LITERAL(107, 1520, 14), // "getCrawlStatus"
QT_MOC_LITERAL(108, 1535, 14), // "setCrawlStatus"
QT_MOC_LITERAL(109, 1550, 11), // "rst_crawler"
QT_MOC_LITERAL(110, 1562, 16), // "call_crawlerinit"
QT_MOC_LITERAL(111, 1579, 12), // "call_slidecw"
QT_MOC_LITERAL(112, 1592, 13), // "call_slideccw"
QT_MOC_LITERAL(113, 1606, 10), // "call_laccw"
QT_MOC_LITERAL(114, 1617, 11), // "call_lacccw"
QT_MOC_LITERAL(115, 1629, 14), // "call_resetTrip"
QT_MOC_LITERAL(116, 1644, 13), // "errorCallback"
QT_MOC_LITERAL(117, 1658, 12), // "tempCallback"
QT_MOC_LITERAL(118, 1671, 15), // "crawlerCallback"
QT_MOC_LITERAL(119, 1687, 9), // "frontLeft"
QT_MOC_LITERAL(120, 1697, 10), // "frontRight"
QT_MOC_LITERAL(121, 1708, 10), // "backrRight"
QT_MOC_LITERAL(122, 1719, 8), // "backLeft"
QT_MOC_LITERAL(123, 1728, 11), // "initCrawler"
QT_MOC_LITERAL(124, 1740, 11), // "stopCrawler"
QT_MOC_LITERAL(125, 1752, 15), // "getBatteryValue"
QT_MOC_LITERAL(126, 1768, 15), // "setBatteryValue"
QT_MOC_LITERAL(127, 1784, 12), // "battCallback"
QT_MOC_LITERAL(128, 1797, 11), // "velCallback"
QT_MOC_LITERAL(129, 1809, 18), // "current_vel_linear"
QT_MOC_LITERAL(130, 1828, 16), // "getVelocityValue"
QT_MOC_LITERAL(131, 1845, 16), // "setVelocityValue"
QT_MOC_LITERAL(132, 1862, 12), // "odomCallback"
QT_MOC_LITERAL(133, 1875, 12), // "getodomValue"
QT_MOC_LITERAL(134, 1888, 12), // "setodomValue"
QT_MOC_LITERAL(135, 1901, 12), // "tripCallback"
QT_MOC_LITERAL(136, 1914, 12), // "gettripValue"
QT_MOC_LITERAL(137, 1927, 12), // "settripValue"
QT_MOC_LITERAL(138, 1940, 15), // "getCurrentValue"
QT_MOC_LITERAL(139, 1956, 15), // "setCurrentValue"
QT_MOC_LITERAL(140, 1972, 15), // "currentCallback"
QT_MOC_LITERAL(141, 1988, 13), // "waterCallback"
QT_MOC_LITERAL(142, 2002, 9), // "getUtData"
QT_MOC_LITERAL(143, 2012, 9), // "setUtData"
QT_MOC_LITERAL(144, 2022, 8), // "getUtVel"
QT_MOC_LITERAL(145, 2031, 8), // "setUtVel"
QT_MOC_LITERAL(146, 2040, 11), // "getUtstatus"
QT_MOC_LITERAL(147, 2052, 11), // "setUtstatus"
QT_MOC_LITERAL(148, 2064, 12), // "getThickness"
QT_MOC_LITERAL(149, 2077, 12), // "setThickness"
QT_MOC_LITERAL(150, 2090, 10), // "utCallback"
QT_MOC_LITERAL(151, 2101, 3), // "vel"
QT_MOC_LITERAL(152, 2105, 8), // "deepcoat"
QT_MOC_LITERAL(153, 2114, 4), // "echo"
QT_MOC_LITERAL(154, 2119, 17), // "thicknessCallback"
QT_MOC_LITERAL(155, 2137, 9), // "thickness"
QT_MOC_LITERAL(156, 2147, 4), // "unit"
QT_MOC_LITERAL(157, 2152, 6), // "getUid"
QT_MOC_LITERAL(158, 2159, 6), // "setUid"
QT_MOC_LITERAL(159, 2166, 11), // "uidCallback"
QT_MOC_LITERAL(160, 2178, 11), // "call_capImg"
QT_MOC_LITERAL(161, 2190, 9), // "comStatus"
QT_MOC_LITERAL(162, 2200, 11), // "toggleValue"
QT_MOC_LITERAL(163, 2212, 13), // "armToolStatus"
QT_MOC_LITERAL(164, 2226, 10), // "toolToggle"
QT_MOC_LITERAL(165, 2237, 12), // "stopArmValue"
QT_MOC_LITERAL(166, 2250, 11), // "rstArmValue"
QT_MOC_LITERAL(167, 2262, 9), // "armStatus"
QT_MOC_LITERAL(168, 2272, 16), // "initCrawlerValue"
QT_MOC_LITERAL(169, 2289, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(170, 2306, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(171, 2322, 8), // "errValue"
QT_MOC_LITERAL(172, 2331, 9), // "tempValue"
QT_MOC_LITERAL(173, 2341, 11), // "crawlStatus"
QT_MOC_LITERAL(174, 2353, 10), // "waterLevel"
QT_MOC_LITERAL(175, 2364, 13), // "velocityValue"
QT_MOC_LITERAL(176, 2378, 9), // "odomValue"
QT_MOC_LITERAL(177, 2388, 9), // "tripValue"
QT_MOC_LITERAL(178, 2398, 12), // "batteryValue"
QT_MOC_LITERAL(179, 2411, 12), // "currentValue"
QT_MOC_LITERAL(180, 2424, 6), // "utData"
QT_MOC_LITERAL(181, 2431, 5), // "utVel"
QT_MOC_LITERAL(182, 2437, 8), // "utstatus"
QT_MOC_LITERAL(183, 2446, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "slideCWValueChanged\0slideCCWValueChanged\0"
    "lacCWValueChanged\0lacCCWValueChanged\0"
    "resetTripValueChanged\0rstArmValueChanged\0"
    "stopArmValueChanged\0rstArm\0"
    "trigArmStatusValueChanged\0armStatusChanged\0"
    "QVector<int>\0status\0initCrawlerValueChanged\0"
    "stopCrawlerValueChanged\0rstCrawlerValueChanged\0"
    "errValueChanged\0tempValueChanged\0"
    "rstCrawler\0crawlStatusChanged\0"
    "velocityValueChanged\0odomValueChanged\0"
    "current_odom\0tripValueChanged\0"
    "current_trip\0waterlevelValueChanged\0"
    "level\0batteryValueChanged\0currentValueChanged\0"
    "utstatusChanged\0thicknessChanged\0"
    "utVelChanged\0utDataChanged\0uidChanged\0"
    "QVector<QString>\0capImg\0initRosThread\0"
    "on_pushButton_pressed\0on_pushButton_2_pressed\0"
    "getComStatus\0setComStatus\0commCallback\0"
    "getToggleValue\0setToggleValue\0flag\0"
    "toggleCallback\0getToolToggle\0setToolToggle\0"
    "getArmToolStatus\0setArmToolStatus\0"
    "armToolCallback\0arg\0getslideCWValue\0"
    "setslideCWValue\0k\0getslideCCWValue\0"
    "setslideCCWValue\0getlacCWValue\0"
    "setlacCWValue\0getlacCCWValue\0"
    "setlacCCWValue\0getresetTripValue\0"
    "setresetTripValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0resetTrip\0"
    "lacCW\0lacCCW\0stopArm\0getInitCrawlerValue\0"
    "setInitCrawlerValue\0getStopCrawlerValue\0"
    "setStopCrawlerValue\0getRstCrawlerValue\0"
    "setRstCrawlerValue\0getTempValue\0"
    "setTempValue\0getErrValue\0setErrValue\0"
    "getCrawlStatus\0setCrawlStatus\0rst_crawler\0"
    "call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
    "call_resetTrip\0errorCallback\0tempCallback\0"
    "crawlerCallback\0frontLeft\0frontRight\0"
    "backrRight\0backLeft\0initCrawler\0"
    "stopCrawler\0getBatteryValue\0setBatteryValue\0"
    "battCallback\0velCallback\0current_vel_linear\0"
    "getVelocityValue\0setVelocityValue\0"
    "odomCallback\0getodomValue\0setodomValue\0"
    "tripCallback\0gettripValue\0settripValue\0"
    "getCurrentValue\0setCurrentValue\0"
    "currentCallback\0waterCallback\0getUtData\0"
    "setUtData\0getUtVel\0setUtVel\0getUtstatus\0"
    "setUtstatus\0getThickness\0setThickness\0"
    "utCallback\0vel\0deepcoat\0echo\0"
    "thicknessCallback\0thickness\0unit\0"
    "getUid\0setUid\0uidCallback\0call_capImg\0"
    "comStatus\0toggleValue\0armToolStatus\0"
    "toolToggle\0stopArmValue\0rstArmValue\0"
    "armStatus\0initCrawlerValue\0stopCrawlerValue\0"
    "rstCrawlerValue\0errValue\0tempValue\0"
    "crawlStatus\0waterLevel\0velocityValue\0"
    "odomValue\0tripValue\0batteryValue\0"
    "currentValue\0utData\0utVel\0utstatus\0"
    "uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     140,   14, // methods
      29, 1078, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  714,    2, 0x06 /* Public */,
       4,    1,  717,    2, 0x06 /* Public */,
       5,    1,  720,    2, 0x06 /* Public */,
       6,    1,  723,    2, 0x06 /* Public */,
       7,    1,  726,    2, 0x06 /* Public */,
       8,    1,  729,    2, 0x06 /* Public */,
       9,    1,  732,    2, 0x06 /* Public */,
      10,    1,  735,    2, 0x06 /* Public */,
      11,    1,  738,    2, 0x06 /* Public */,
      12,    1,  741,    2, 0x06 /* Public */,
      13,    1,  744,    2, 0x06 /* Public */,
      14,    1,  747,    2, 0x06 /* Public */,
      15,    1,  750,    2, 0x06 /* Public */,
      16,    1,  753,    2, 0x06 /* Public */,
      17,    1,  756,    2, 0x06 /* Public */,
      18,    1,  759,    2, 0x06 /* Public */,
      19,    1,  762,    2, 0x06 /* Public */,
      20,    1,  765,    2, 0x06 /* Public */,
      21,    1,  768,    2, 0x06 /* Public */,
      22,    1,  771,    2, 0x06 /* Public */,
      23,    1,  774,    2, 0x06 /* Public */,
      24,    0,  777,    2, 0x06 /* Public */,
      25,    1,  778,    2, 0x06 /* Public */,
      28,    1,  781,    2, 0x06 /* Public */,
      29,    1,  784,    2, 0x06 /* Public */,
      30,    1,  787,    2, 0x06 /* Public */,
      31,    1,  790,    2, 0x06 /* Public */,
      32,    1,  793,    2, 0x06 /* Public */,
      33,    1,  796,    2, 0x06 /* Public */,
      34,    1,  799,    2, 0x06 /* Public */,
      35,    1,  802,    2, 0x06 /* Public */,
      36,    1,  805,    2, 0x06 /* Public */,
      38,    1,  808,    2, 0x06 /* Public */,
      40,    1,  811,    2, 0x06 /* Public */,
      42,    1,  814,    2, 0x06 /* Public */,
      43,    1,  817,    2, 0x06 /* Public */,
      44,    1,  820,    2, 0x06 /* Public */,
      45,    1,  823,    2, 0x06 /* Public */,
      46,    1,  826,    2, 0x06 /* Public */,
      47,    1,  829,    2, 0x06 /* Public */,
      48,    1,  832,    2, 0x06 /* Public */,
      50,    1,  835,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  838,    2, 0x0a /* Public */,
      52,    0,  839,    2, 0x0a /* Public */,
      53,    0,  840,    2, 0x0a /* Public */,
      54,    0,  841,    2, 0x0a /* Public */,
      55,    1,  842,    2, 0x0a /* Public */,
      56,    1,  845,    2, 0x0a /* Public */,
      57,    0,  848,    2, 0x0a /* Public */,
      58,    1,  849,    2, 0x0a /* Public */,
      60,    1,  852,    2, 0x0a /* Public */,
      61,    0,  855,    2, 0x0a /* Public */,
      62,    1,  856,    2, 0x0a /* Public */,
      63,    0,  859,    2, 0x0a /* Public */,
      64,    1,  860,    2, 0x0a /* Public */,
      65,    1,  863,    2, 0x0a /* Public */,
      67,    0,  866,    2, 0x0a /* Public */,
      68,    1,  867,    2, 0x0a /* Public */,
      70,    0,  870,    2, 0x0a /* Public */,
      71,    1,  871,    2, 0x0a /* Public */,
      72,    0,  874,    2, 0x0a /* Public */,
      73,    1,  875,    2, 0x0a /* Public */,
      74,    0,  878,    2, 0x0a /* Public */,
      75,    1,  879,    2, 0x0a /* Public */,
      76,    0,  882,    2, 0x0a /* Public */,
      77,    1,  883,    2, 0x0a /* Public */,
      78,    0,  886,    2, 0x0a /* Public */,
      79,    1,  887,    2, 0x0a /* Public */,
      80,    0,  890,    2, 0x0a /* Public */,
      81,    1,  891,    2, 0x0a /* Public */,
      82,    1,  894,    2, 0x0a /* Public */,
      83,    0,  897,    2, 0x0a /* Public */,
      84,    0,  898,    2, 0x0a /* Public */,
      85,    1,  899,    2, 0x0a /* Public */,
      86,    1,  902,    2, 0x0a /* Public */,
      88,    0,  905,    2, 0x0a /* Public */,
      89,    1,  906,    2, 0x0a /* Public */,
      90,    1,  909,    2, 0x0a /* Public */,
      91,    1,  912,    2, 0x0a /* Public */,
      92,    1,  915,    2, 0x0a /* Public */,
      93,    1,  918,    2, 0x0a /* Public */,
      94,    1,  921,    2, 0x0a /* Public */,
      95,    1,  924,    2, 0x0a /* Public */,
      96,    1,  927,    2, 0x0a /* Public */,
      23,    1,  930,    2, 0x0a /* Public */,
      97,    0,  933,    2, 0x0a /* Public */,
      98,    1,  934,    2, 0x0a /* Public */,
      99,    0,  937,    2, 0x0a /* Public */,
     100,    1,  938,    2, 0x0a /* Public */,
     101,    0,  941,    2, 0x0a /* Public */,
     102,    1,  942,    2, 0x0a /* Public */,
     103,    0,  945,    2, 0x0a /* Public */,
     104,    1,  946,    2, 0x0a /* Public */,
     105,    0,  949,    2, 0x0a /* Public */,
     106,    1,  950,    2, 0x0a /* Public */,
     107,    0,  953,    2, 0x0a /* Public */,
     108,    1,  954,    2, 0x0a /* Public */,
     109,    1,  957,    2, 0x0a /* Public */,
     110,    1,  960,    2, 0x0a /* Public */,
     111,    1,  963,    2, 0x0a /* Public */,
     112,    1,  966,    2, 0x0a /* Public */,
     113,    1,  969,    2, 0x0a /* Public */,
     114,    1,  972,    2, 0x0a /* Public */,
     115,    1,  975,    2, 0x0a /* Public */,
     116,    1,  978,    2, 0x0a /* Public */,
     117,    1,  981,    2, 0x0a /* Public */,
     118,    4,  984,    2, 0x0a /* Public */,
     123,    1,  993,    2, 0x0a /* Public */,
     124,    1,  996,    2, 0x0a /* Public */,
      33,    1,  999,    2, 0x0a /* Public */,
     125,    0, 1002,    2, 0x0a /* Public */,
     126,    1, 1003,    2, 0x0a /* Public */,
     127,    1, 1006,    2, 0x0a /* Public */,
     128,    1, 1009,    2, 0x0a /* Public */,
     130,    0, 1012,    2, 0x0a /* Public */,
     131,    1, 1013,    2, 0x0a /* Public */,
     132,    1, 1016,    2, 0x0a /* Public */,
     133,    0, 1019,    2, 0x0a /* Public */,
     134,    1, 1020,    2, 0x0a /* Public */,
     135,    1, 1023,    2, 0x0a /* Public */,
     136,    0, 1026,    2, 0x0a /* Public */,
     137,    1, 1027,    2, 0x0a /* Public */,
     138,    0, 1030,    2, 0x0a /* Public */,
     139,    1, 1031,    2, 0x0a /* Public */,
     140,    1, 1034,    2, 0x0a /* Public */,
     141,    1, 1037,    2, 0x0a /* Public */,
     142,    0, 1040,    2, 0x0a /* Public */,
     143,    1, 1041,    2, 0x0a /* Public */,
     144,    0, 1044,    2, 0x0a /* Public */,
     145,    1, 1045,    2, 0x0a /* Public */,
     146,    0, 1048,    2, 0x0a /* Public */,
     147,    1, 1049,    2, 0x0a /* Public */,
     148,    0, 1052,    2, 0x0a /* Public */,
     149,    1, 1053,    2, 0x0a /* Public */,
     150,    3, 1056,    2, 0x0a /* Public */,
     154,    2, 1063,    2, 0x0a /* Public */,
     157,    0, 1068,    2, 0x0a /* Public */,
     158,    1, 1069,    2, 0x0a /* Public */,
     159,    1, 1072,    2, 0x0a /* Public */,
     160,    1, 1075,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   27,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Float,   41,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   27,
    QMetaType::Void, QMetaType::QVariantMap,   27,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 49,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   41,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    0x80000000 | 26,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    0x80000000 | 26,
    QMetaType::Void, 0x80000000 | 26,    5,
    0x80000000 | 26,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::Void, 0x80000000 | 26,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  119,  120,  121,  122,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  129,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   41,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  151,  152,  153,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  155,  156,
    0x80000000 | 49,
    QMetaType::Void, 0x80000000 | 49,    5,
    QMetaType::Void, 0x80000000 | 49,    5,
    QMetaType::Void, QMetaType::Int,   87,

 // properties: name, type, flags
     161, QMetaType::Int, 0x00495103,
     162, QMetaType::Bool, 0x00495103,
     163, QMetaType::Int, 0x00495103,
     164, QMetaType::QString, 0x00495103,
      91, QMetaType::Bool, 0x00495003,
      92, QMetaType::Bool, 0x00495003,
      94, QMetaType::Bool, 0x00495003,
      95, QMetaType::Bool, 0x00495003,
     165, QMetaType::Bool, 0x00495103,
     166, QMetaType::Bool, 0x00495103,
     167, 0x80000000 | 26, 0x0049510b,
     168, QMetaType::Bool, 0x00495103,
     169, QMetaType::Bool, 0x00495103,
     170, QMetaType::Bool, 0x00495103,
     171, 0x80000000 | 26, 0x0049510b,
     172, 0x80000000 | 26, 0x0049510b,
     173, QMetaType::QVariantMap, 0x00495103,
     174, QMetaType::Float, 0x00495103,
     175, QMetaType::Int, 0x00495103,
     176, QMetaType::Int, 0x00495003,
     177, QMetaType::Int, 0x00495003,
      93, QMetaType::Int, 0x00495003,
     178, QMetaType::Float, 0x00495103,
     179, QMetaType::Float, 0x00495103,
     180, QMetaType::QString, 0x00495103,
     181, QMetaType::QString, 0x00495103,
     182, QMetaType::QVariantMap, 0x00495103,
     155, QMetaType::QVariantMap, 0x00495103,
     183, 0x80000000 | 49, 0x0049510b,

 // properties: notify_signal_id
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      19,
      18,
      22,
      23,
      24,
      25,
      26,
      27,
      29,
      33,
      30,
      31,
      32,
      17,
      34,
      35,
      39,
      38,
      36,
      37,
      40,

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
        case 4: _t->value3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->value4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->value5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->value6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->value7((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->trigArmStatusValueChanged(); break;
        case 22: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 23: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 27: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 28: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 30: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 35: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 37: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 38: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 41: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->initRosThread(); break;
        case 43: _t->on_pushButton_pressed(); break;
        case 44: _t->on_pushButton_2_pressed(); break;
        case 45: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 53: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 68: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 74: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->trig_armStatus(); break;
        case 76: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 78: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 92: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 93: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 95: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 97: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 99: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 100: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 101: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 103: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 105: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 106: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 107: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 111: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 112: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 113: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 115: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 116: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 120: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 124: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 125: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 126: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 128: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 130: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 132: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 133: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 134: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 135: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 136: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 137: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 138: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 139: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 104:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 105:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 137:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 138:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value3)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value4)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value5)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value6)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value7)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 41;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 15:
        case 14:
        case 10:
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
        case 4: *reinterpret_cast< bool*>(_v) = _t->getslideCWValue(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getslideCCWValue(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getlacCWValue(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getlacCCWValue(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 10: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 14: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 15: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 16: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 26: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 27: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 28: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 4: _t->setslideCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setslideCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setlacCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setlacCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 11: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 15: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 16: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 17: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 25: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 26: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 27: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 28: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 140)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 140;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 140)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 140;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 29;
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
void Publisher::value3(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Publisher::value4(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Publisher::value5(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Publisher::value6(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Publisher::value7(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
