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
    QByteArrayData data[195];
    char stringdata0[2602];
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
QT_MOC_LITERAL(20, 233, 15), // "lacValueChanged"
QT_MOC_LITERAL(21, 249, 9), // "lac_value"
QT_MOC_LITERAL(22, 259, 19), // "voltageValueChanged"
QT_MOC_LITERAL(23, 279, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(24, 301, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(25, 320, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(26, 340, 6), // "rstArm"
QT_MOC_LITERAL(27, 347, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(28, 373, 16), // "armStatusChanged"
QT_MOC_LITERAL(29, 390, 12), // "QVector<int>"
QT_MOC_LITERAL(30, 403, 6), // "status"
QT_MOC_LITERAL(31, 410, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(32, 434, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(33, 458, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(34, 481, 15), // "errValueChanged"
QT_MOC_LITERAL(35, 497, 16), // "tempValueChanged"
QT_MOC_LITERAL(36, 514, 10), // "rstCrawler"
QT_MOC_LITERAL(37, 525, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(38, 544, 20), // "velocityValueChanged"
QT_MOC_LITERAL(39, 565, 16), // "odomValueChanged"
QT_MOC_LITERAL(40, 582, 12), // "current_odom"
QT_MOC_LITERAL(41, 595, 16), // "tripValueChanged"
QT_MOC_LITERAL(42, 612, 12), // "current_trip"
QT_MOC_LITERAL(43, 625, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(44, 648, 5), // "level"
QT_MOC_LITERAL(45, 654, 19), // "batteryValueChanged"
QT_MOC_LITERAL(46, 674, 19), // "currentValueChanged"
QT_MOC_LITERAL(47, 694, 15), // "utstatusChanged"
QT_MOC_LITERAL(48, 710, 16), // "thicknessChanged"
QT_MOC_LITERAL(49, 727, 12), // "utVelChanged"
QT_MOC_LITERAL(50, 740, 13), // "utDataChanged"
QT_MOC_LITERAL(51, 754, 10), // "uidChanged"
QT_MOC_LITERAL(52, 765, 16), // "QVector<QString>"
QT_MOC_LITERAL(53, 782, 6), // "capImg"
QT_MOC_LITERAL(54, 789, 13), // "initRosThread"
QT_MOC_LITERAL(55, 803, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(56, 825, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(57, 849, 12), // "getComStatus"
QT_MOC_LITERAL(58, 862, 12), // "setComStatus"
QT_MOC_LITERAL(59, 875, 12), // "commCallback"
QT_MOC_LITERAL(60, 888, 14), // "getToggleValue"
QT_MOC_LITERAL(61, 903, 14), // "setToggleValue"
QT_MOC_LITERAL(62, 918, 4), // "flag"
QT_MOC_LITERAL(63, 923, 14), // "toggleCallback"
QT_MOC_LITERAL(64, 938, 13), // "getToolToggle"
QT_MOC_LITERAL(65, 952, 13), // "setToolToggle"
QT_MOC_LITERAL(66, 966, 16), // "getArmToolStatus"
QT_MOC_LITERAL(67, 983, 16), // "setArmToolStatus"
QT_MOC_LITERAL(68, 1000, 15), // "armToolCallback"
QT_MOC_LITERAL(69, 1016, 3), // "arg"
QT_MOC_LITERAL(70, 1020, 15), // "getslideCWValue"
QT_MOC_LITERAL(71, 1036, 15), // "setslideCWValue"
QT_MOC_LITERAL(72, 1052, 1), // "k"
QT_MOC_LITERAL(73, 1054, 16), // "getslideCCWValue"
QT_MOC_LITERAL(74, 1071, 16), // "setslideCCWValue"
QT_MOC_LITERAL(75, 1088, 13), // "getlacCWValue"
QT_MOC_LITERAL(76, 1102, 13), // "setlacCWValue"
QT_MOC_LITERAL(77, 1116, 14), // "getlacCCWValue"
QT_MOC_LITERAL(78, 1131, 14), // "setlacCCWValue"
QT_MOC_LITERAL(79, 1146, 17), // "getresetTripValue"
QT_MOC_LITERAL(80, 1164, 17), // "setresetTripValue"
QT_MOC_LITERAL(81, 1182, 13), // "getWaterLevel"
QT_MOC_LITERAL(82, 1196, 13), // "setWaterLevel"
QT_MOC_LITERAL(83, 1210, 15), // "getStopArmValue"
QT_MOC_LITERAL(84, 1226, 15), // "setStopArmValue"
QT_MOC_LITERAL(85, 1242, 14), // "setRstArmValue"
QT_MOC_LITERAL(86, 1257, 14), // "getRstArmValue"
QT_MOC_LITERAL(87, 1272, 12), // "getArmStatus"
QT_MOC_LITERAL(88, 1285, 12), // "setArmStatus"
QT_MOC_LITERAL(89, 1298, 12), // "call_arminit"
QT_MOC_LITERAL(90, 1311, 3), // "val"
QT_MOC_LITERAL(91, 1315, 14), // "trig_armStatus"
QT_MOC_LITERAL(92, 1330, 7), // "rst_arm"
QT_MOC_LITERAL(93, 1338, 11), // "armCallback"
QT_MOC_LITERAL(94, 1350, 7), // "slideCW"
QT_MOC_LITERAL(95, 1358, 8), // "slideCCW"
QT_MOC_LITERAL(96, 1367, 9), // "resetTrip"
QT_MOC_LITERAL(97, 1377, 5), // "lacCW"
QT_MOC_LITERAL(98, 1383, 6), // "lacCCW"
QT_MOC_LITERAL(99, 1390, 7), // "stopArm"
QT_MOC_LITERAL(100, 1398, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(101, 1418, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(102, 1438, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(103, 1458, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(104, 1478, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(105, 1497, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(106, 1516, 12), // "getTempValue"
QT_MOC_LITERAL(107, 1529, 12), // "setTempValue"
QT_MOC_LITERAL(108, 1542, 11), // "getErrValue"
QT_MOC_LITERAL(109, 1554, 11), // "setErrValue"
QT_MOC_LITERAL(110, 1566, 14), // "getCrawlStatus"
QT_MOC_LITERAL(111, 1581, 14), // "setCrawlStatus"
QT_MOC_LITERAL(112, 1596, 11), // "rst_crawler"
QT_MOC_LITERAL(113, 1608, 16), // "call_crawlerinit"
QT_MOC_LITERAL(114, 1625, 12), // "call_slidecw"
QT_MOC_LITERAL(115, 1638, 13), // "call_slideccw"
QT_MOC_LITERAL(116, 1652, 10), // "call_laccw"
QT_MOC_LITERAL(117, 1663, 11), // "call_lacccw"
QT_MOC_LITERAL(118, 1675, 14), // "call_resetTrip"
QT_MOC_LITERAL(119, 1690, 13), // "errorCallback"
QT_MOC_LITERAL(120, 1704, 12), // "tempCallback"
QT_MOC_LITERAL(121, 1717, 15), // "crawlerCallback"
QT_MOC_LITERAL(122, 1733, 9), // "frontLeft"
QT_MOC_LITERAL(123, 1743, 10), // "frontRight"
QT_MOC_LITERAL(124, 1754, 10), // "backrRight"
QT_MOC_LITERAL(125, 1765, 8), // "backLeft"
QT_MOC_LITERAL(126, 1774, 11), // "initCrawler"
QT_MOC_LITERAL(127, 1786, 11), // "stopCrawler"
QT_MOC_LITERAL(128, 1798, 15), // "getBatteryValue"
QT_MOC_LITERAL(129, 1814, 15), // "setBatteryValue"
QT_MOC_LITERAL(130, 1830, 12), // "battCallback"
QT_MOC_LITERAL(131, 1843, 15), // "getvoltageValue"
QT_MOC_LITERAL(132, 1859, 15), // "setvoltageValue"
QT_MOC_LITERAL(133, 1875, 15), // "voltageCallback"
QT_MOC_LITERAL(134, 1891, 11), // "velCallback"
QT_MOC_LITERAL(135, 1903, 18), // "current_vel_linear"
QT_MOC_LITERAL(136, 1922, 16), // "getVelocityValue"
QT_MOC_LITERAL(137, 1939, 16), // "setVelocityValue"
QT_MOC_LITERAL(138, 1956, 11), // "lacCallback"
QT_MOC_LITERAL(139, 1968, 11), // "getlacValue"
QT_MOC_LITERAL(140, 1980, 11), // "setlacValue"
QT_MOC_LITERAL(141, 1992, 12), // "odomCallback"
QT_MOC_LITERAL(142, 2005, 12), // "getodomValue"
QT_MOC_LITERAL(143, 2018, 12), // "setodomValue"
QT_MOC_LITERAL(144, 2031, 12), // "tripCallback"
QT_MOC_LITERAL(145, 2044, 12), // "gettripValue"
QT_MOC_LITERAL(146, 2057, 12), // "settripValue"
QT_MOC_LITERAL(147, 2070, 15), // "getCurrentValue"
QT_MOC_LITERAL(148, 2086, 15), // "setCurrentValue"
QT_MOC_LITERAL(149, 2102, 15), // "currentCallback"
QT_MOC_LITERAL(150, 2118, 13), // "waterCallback"
QT_MOC_LITERAL(151, 2132, 9), // "getUtData"
QT_MOC_LITERAL(152, 2142, 9), // "setUtData"
QT_MOC_LITERAL(153, 2152, 8), // "getUtVel"
QT_MOC_LITERAL(154, 2161, 8), // "setUtVel"
QT_MOC_LITERAL(155, 2170, 11), // "getUtstatus"
QT_MOC_LITERAL(156, 2182, 11), // "setUtstatus"
QT_MOC_LITERAL(157, 2194, 12), // "getThickness"
QT_MOC_LITERAL(158, 2207, 12), // "setThickness"
QT_MOC_LITERAL(159, 2220, 10), // "utCallback"
QT_MOC_LITERAL(160, 2231, 3), // "vel"
QT_MOC_LITERAL(161, 2235, 8), // "deepcoat"
QT_MOC_LITERAL(162, 2244, 4), // "echo"
QT_MOC_LITERAL(163, 2249, 17), // "thicknessCallback"
QT_MOC_LITERAL(164, 2267, 9), // "thickness"
QT_MOC_LITERAL(165, 2277, 4), // "unit"
QT_MOC_LITERAL(166, 2282, 6), // "getUid"
QT_MOC_LITERAL(167, 2289, 6), // "setUid"
QT_MOC_LITERAL(168, 2296, 11), // "uidCallback"
QT_MOC_LITERAL(169, 2308, 11), // "call_capImg"
QT_MOC_LITERAL(170, 2320, 9), // "comStatus"
QT_MOC_LITERAL(171, 2330, 11), // "toggleValue"
QT_MOC_LITERAL(172, 2342, 13), // "armToolStatus"
QT_MOC_LITERAL(173, 2356, 10), // "toolToggle"
QT_MOC_LITERAL(174, 2367, 8), // "lacValue"
QT_MOC_LITERAL(175, 2376, 12), // "stopArmValue"
QT_MOC_LITERAL(176, 2389, 11), // "rstArmValue"
QT_MOC_LITERAL(177, 2401, 9), // "armStatus"
QT_MOC_LITERAL(178, 2411, 16), // "initCrawlerValue"
QT_MOC_LITERAL(179, 2428, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(180, 2445, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(181, 2461, 8), // "errValue"
QT_MOC_LITERAL(182, 2470, 9), // "tempValue"
QT_MOC_LITERAL(183, 2480, 11), // "crawlStatus"
QT_MOC_LITERAL(184, 2492, 10), // "waterLevel"
QT_MOC_LITERAL(185, 2503, 13), // "velocityValue"
QT_MOC_LITERAL(186, 2517, 9), // "odomValue"
QT_MOC_LITERAL(187, 2527, 9), // "tripValue"
QT_MOC_LITERAL(188, 2537, 12), // "batteryValue"
QT_MOC_LITERAL(189, 2550, 12), // "currentValue"
QT_MOC_LITERAL(190, 2563, 12), // "voltageValue"
QT_MOC_LITERAL(191, 2576, 6), // "utData"
QT_MOC_LITERAL(192, 2583, 5), // "utVel"
QT_MOC_LITERAL(193, 2589, 8), // "utstatus"
QT_MOC_LITERAL(194, 2598, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "slideCWValueChanged\0slideCCWValueChanged\0"
    "lacCWValueChanged\0lacCCWValueChanged\0"
    "lacValueChanged\0lac_value\0voltageValueChanged\0"
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
    "battCallback\0getvoltageValue\0"
    "setvoltageValue\0voltageCallback\0"
    "velCallback\0current_vel_linear\0"
    "getVelocityValue\0setVelocityValue\0"
    "lacCallback\0getlacValue\0setlacValue\0"
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
    "toolToggle\0lacValue\0stopArmValue\0"
    "rstArmValue\0armStatus\0initCrawlerValue\0"
    "stopCrawlerValue\0rstCrawlerValue\0"
    "errValue\0tempValue\0crawlStatus\0"
    "waterLevel\0velocityValue\0odomValue\0"
    "tripValue\0batteryValue\0currentValue\0"
    "voltageValue\0utData\0utVel\0utstatus\0"
    "uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
      31, 1138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      44,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  754,    2, 0x06 /* Public */,
       4,    1,  757,    2, 0x06 /* Public */,
       5,    1,  760,    2, 0x06 /* Public */,
       6,    1,  763,    2, 0x06 /* Public */,
       7,    1,  766,    2, 0x06 /* Public */,
       8,    1,  769,    2, 0x06 /* Public */,
       9,    1,  772,    2, 0x06 /* Public */,
      10,    1,  775,    2, 0x06 /* Public */,
      11,    1,  778,    2, 0x06 /* Public */,
      12,    1,  781,    2, 0x06 /* Public */,
      13,    1,  784,    2, 0x06 /* Public */,
      14,    1,  787,    2, 0x06 /* Public */,
      15,    1,  790,    2, 0x06 /* Public */,
      16,    1,  793,    2, 0x06 /* Public */,
      17,    1,  796,    2, 0x06 /* Public */,
      18,    1,  799,    2, 0x06 /* Public */,
      19,    1,  802,    2, 0x06 /* Public */,
      20,    1,  805,    2, 0x06 /* Public */,
      22,    1,  808,    2, 0x06 /* Public */,
      23,    1,  811,    2, 0x06 /* Public */,
      24,    1,  814,    2, 0x06 /* Public */,
      25,    1,  817,    2, 0x06 /* Public */,
      26,    1,  820,    2, 0x06 /* Public */,
      27,    0,  823,    2, 0x06 /* Public */,
      28,    1,  824,    2, 0x06 /* Public */,
      31,    1,  827,    2, 0x06 /* Public */,
      32,    1,  830,    2, 0x06 /* Public */,
      33,    1,  833,    2, 0x06 /* Public */,
      34,    1,  836,    2, 0x06 /* Public */,
      35,    1,  839,    2, 0x06 /* Public */,
      36,    1,  842,    2, 0x06 /* Public */,
      37,    1,  845,    2, 0x06 /* Public */,
      38,    1,  848,    2, 0x06 /* Public */,
      39,    1,  851,    2, 0x06 /* Public */,
      41,    1,  854,    2, 0x06 /* Public */,
      43,    1,  857,    2, 0x06 /* Public */,
      45,    1,  860,    2, 0x06 /* Public */,
      46,    1,  863,    2, 0x06 /* Public */,
      47,    1,  866,    2, 0x06 /* Public */,
      48,    1,  869,    2, 0x06 /* Public */,
      49,    1,  872,    2, 0x06 /* Public */,
      50,    1,  875,    2, 0x06 /* Public */,
      51,    1,  878,    2, 0x06 /* Public */,
      53,    1,  881,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    0,  884,    2, 0x0a /* Public */,
      55,    0,  885,    2, 0x0a /* Public */,
      56,    0,  886,    2, 0x0a /* Public */,
      57,    0,  887,    2, 0x0a /* Public */,
      58,    1,  888,    2, 0x0a /* Public */,
      59,    1,  891,    2, 0x0a /* Public */,
      60,    0,  894,    2, 0x0a /* Public */,
      61,    1,  895,    2, 0x0a /* Public */,
      63,    1,  898,    2, 0x0a /* Public */,
      64,    0,  901,    2, 0x0a /* Public */,
      65,    1,  902,    2, 0x0a /* Public */,
      66,    0,  905,    2, 0x0a /* Public */,
      67,    1,  906,    2, 0x0a /* Public */,
      68,    1,  909,    2, 0x0a /* Public */,
      70,    0,  912,    2, 0x0a /* Public */,
      71,    1,  913,    2, 0x0a /* Public */,
      73,    0,  916,    2, 0x0a /* Public */,
      74,    1,  917,    2, 0x0a /* Public */,
      75,    0,  920,    2, 0x0a /* Public */,
      76,    1,  921,    2, 0x0a /* Public */,
      77,    0,  924,    2, 0x0a /* Public */,
      78,    1,  925,    2, 0x0a /* Public */,
      79,    0,  928,    2, 0x0a /* Public */,
      80,    1,  929,    2, 0x0a /* Public */,
      81,    0,  932,    2, 0x0a /* Public */,
      82,    1,  933,    2, 0x0a /* Public */,
      83,    0,  936,    2, 0x0a /* Public */,
      84,    1,  937,    2, 0x0a /* Public */,
      85,    1,  940,    2, 0x0a /* Public */,
      86,    0,  943,    2, 0x0a /* Public */,
      87,    0,  944,    2, 0x0a /* Public */,
      88,    1,  945,    2, 0x0a /* Public */,
      89,    1,  948,    2, 0x0a /* Public */,
      91,    0,  951,    2, 0x0a /* Public */,
      92,    1,  952,    2, 0x0a /* Public */,
      93,    1,  955,    2, 0x0a /* Public */,
      94,    1,  958,    2, 0x0a /* Public */,
      95,    1,  961,    2, 0x0a /* Public */,
      96,    1,  964,    2, 0x0a /* Public */,
      97,    1,  967,    2, 0x0a /* Public */,
      98,    1,  970,    2, 0x0a /* Public */,
      99,    1,  973,    2, 0x0a /* Public */,
      26,    1,  976,    2, 0x0a /* Public */,
     100,    0,  979,    2, 0x0a /* Public */,
     101,    1,  980,    2, 0x0a /* Public */,
     102,    0,  983,    2, 0x0a /* Public */,
     103,    1,  984,    2, 0x0a /* Public */,
     104,    0,  987,    2, 0x0a /* Public */,
     105,    1,  988,    2, 0x0a /* Public */,
     106,    0,  991,    2, 0x0a /* Public */,
     107,    1,  992,    2, 0x0a /* Public */,
     108,    0,  995,    2, 0x0a /* Public */,
     109,    1,  996,    2, 0x0a /* Public */,
     110,    0,  999,    2, 0x0a /* Public */,
     111,    1, 1000,    2, 0x0a /* Public */,
     112,    1, 1003,    2, 0x0a /* Public */,
     113,    1, 1006,    2, 0x0a /* Public */,
     114,    1, 1009,    2, 0x0a /* Public */,
     115,    1, 1012,    2, 0x0a /* Public */,
     116,    1, 1015,    2, 0x0a /* Public */,
     117,    1, 1018,    2, 0x0a /* Public */,
     118,    1, 1021,    2, 0x0a /* Public */,
     119,    1, 1024,    2, 0x0a /* Public */,
     120,    1, 1027,    2, 0x0a /* Public */,
     121,    4, 1030,    2, 0x0a /* Public */,
     126,    1, 1039,    2, 0x0a /* Public */,
     127,    1, 1042,    2, 0x0a /* Public */,
      36,    1, 1045,    2, 0x0a /* Public */,
     128,    0, 1048,    2, 0x0a /* Public */,
     129,    1, 1049,    2, 0x0a /* Public */,
     130,    1, 1052,    2, 0x0a /* Public */,
     131,    0, 1055,    2, 0x0a /* Public */,
     132,    1, 1056,    2, 0x0a /* Public */,
     133,    1, 1059,    2, 0x0a /* Public */,
     134,    1, 1062,    2, 0x0a /* Public */,
     136,    0, 1065,    2, 0x0a /* Public */,
     137,    1, 1066,    2, 0x0a /* Public */,
     138,    1, 1069,    2, 0x0a /* Public */,
     139,    0, 1072,    2, 0x0a /* Public */,
     140,    1, 1073,    2, 0x0a /* Public */,
     141,    1, 1076,    2, 0x0a /* Public */,
     142,    0, 1079,    2, 0x0a /* Public */,
     143,    1, 1080,    2, 0x0a /* Public */,
     144,    1, 1083,    2, 0x0a /* Public */,
     145,    0, 1086,    2, 0x0a /* Public */,
     146,    1, 1087,    2, 0x0a /* Public */,
     147,    0, 1090,    2, 0x0a /* Public */,
     148,    1, 1091,    2, 0x0a /* Public */,
     149,    1, 1094,    2, 0x0a /* Public */,
     150,    1, 1097,    2, 0x0a /* Public */,
     151,    0, 1100,    2, 0x0a /* Public */,
     152,    1, 1101,    2, 0x0a /* Public */,
     153,    0, 1104,    2, 0x0a /* Public */,
     154,    1, 1105,    2, 0x0a /* Public */,
     155,    0, 1108,    2, 0x0a /* Public */,
     156,    1, 1109,    2, 0x0a /* Public */,
     157,    0, 1112,    2, 0x0a /* Public */,
     158,    1, 1113,    2, 0x0a /* Public */,
     159,    3, 1116,    2, 0x0a /* Public */,
     163,    2, 1123,    2, 0x0a /* Public */,
     166,    0, 1128,    2, 0x0a /* Public */,
     167,    1, 1129,    2, 0x0a /* Public */,
     168,    1, 1132,    2, 0x0a /* Public */,
     169,    1, 1135,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   30,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Float,   44,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   30,
    QMetaType::Void, QMetaType::QVariantMap,   30,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   44,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    0x80000000 | 29,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    0x80000000 | 29,
    QMetaType::Void, 0x80000000 | 29,    5,
    0x80000000 | 29,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  122,  123,  124,  125,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  135,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   44,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  160,  161,  162,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  164,  165,
    0x80000000 | 52,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::Int,   90,

 // properties: name, type, flags
     170, QMetaType::Int, 0x00495103,
     171, QMetaType::Bool, 0x00495103,
     172, QMetaType::Int, 0x00495103,
     173, QMetaType::QString, 0x00495103,
      94, QMetaType::Bool, 0x00495003,
      95, QMetaType::Bool, 0x00495003,
      97, QMetaType::Bool, 0x00495003,
      98, QMetaType::Bool, 0x00495003,
     174, QMetaType::Int, 0x00495003,
     175, QMetaType::Bool, 0x00495103,
     176, QMetaType::Bool, 0x00495103,
     177, 0x80000000 | 29, 0x0049510b,
     178, QMetaType::Bool, 0x00495103,
     179, QMetaType::Bool, 0x00495103,
     180, QMetaType::Bool, 0x00495103,
     181, 0x80000000 | 29, 0x0049510b,
     182, 0x80000000 | 29, 0x0049510b,
     183, QMetaType::QVariantMap, 0x00495103,
     184, QMetaType::Float, 0x00495103,
     185, QMetaType::Int, 0x00495103,
     186, QMetaType::Int, 0x00495003,
     187, QMetaType::Int, 0x00495003,
      96, QMetaType::Int, 0x00495003,
     188, QMetaType::Float, 0x00495103,
     189, QMetaType::Float, 0x00495103,
     190, QMetaType::Int, 0x00495003,
     191, QMetaType::QString, 0x00495103,
     192, QMetaType::QString, 0x00495103,
     193, QMetaType::QVariantMap, 0x00495103,
     164, QMetaType::QVariantMap, 0x00495103,
     194, 0x80000000 | 52, 0x0049510b,

 // properties: notify_signal_id
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      21,
      20,
      24,
      25,
      26,
      27,
      28,
      29,
      31,
      35,
      32,
      33,
      34,
      19,
      36,
      37,
      18,
      41,
      40,
      38,
      39,
      42,

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
        case 17: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->voltageValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->trigArmStatusValueChanged(); break;
        case 24: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 25: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 29: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 30: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 32: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 39: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 40: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 43: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->initRosThread(); break;
        case 45: _t->on_pushButton_pressed(); break;
        case 46: _t->on_pushButton_2_pressed(); break;
        case 47: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 70: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 76: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->trig_armStatus(); break;
        case 78: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 80: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 92: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 95: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 97: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 99: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 100: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 101: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 103: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 105: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 107: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 108: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 109: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 113: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 114: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 115: { int _r = _t->getvoltageValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 116: _t->setvoltageValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: _t->voltageCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 118: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 120: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 121: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 126: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 132: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 133: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 134: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 135: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 136: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 137: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 138: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 139: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 140: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 141: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 142: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 143: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 144: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 146: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 147: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 79:
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
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 106:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 107:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 145:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 146:
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
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::voltageValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 43;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 16:
        case 15:
        case 11:
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
        case 8: *reinterpret_cast< int*>(_v) = _t->getlacValue(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 11: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 15: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 16: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 17: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getvoltageValue(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 28: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 29: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 30: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 8: _t->setlacValue(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 12: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 16: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 17: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 18: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setvoltageValue(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 27: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 28: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 29: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 30: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 31;
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
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::voltageValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
