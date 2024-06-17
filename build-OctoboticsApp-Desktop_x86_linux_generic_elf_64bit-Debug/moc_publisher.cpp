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
    QByteArrayData data[212];
    char stringdata0[3059];
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
QT_MOC_LITERAL(12, 80, 6), // "value8"
QT_MOC_LITERAL(13, 87, 6), // "value9"
QT_MOC_LITERAL(14, 94, 7), // "value10"
QT_MOC_LITERAL(15, 102, 7), // "value11"
QT_MOC_LITERAL(16, 110, 24), // "speedsettingValueChanged"
QT_MOC_LITERAL(17, 135, 12), // "speedsetting"
QT_MOC_LITERAL(18, 148, 24), // "angularspeedValueChanged"
QT_MOC_LITERAL(19, 173, 12), // "angularspeed"
QT_MOC_LITERAL(20, 186, 16), // "comStatusChanged"
QT_MOC_LITERAL(21, 203, 18), // "toggleValueChanged"
QT_MOC_LITERAL(22, 222, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(23, 243, 17), // "toolToggleChanged"
QT_MOC_LITERAL(24, 261, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(25, 281, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(26, 302, 25), // "speedIncreaseValueChanged"
QT_MOC_LITERAL(27, 328, 25), // "speedDecreaseValueChanged"
QT_MOC_LITERAL(28, 354, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(29, 377, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(30, 395, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(31, 414, 15), // "lacValueChanged"
QT_MOC_LITERAL(32, 430, 9), // "lac_value"
QT_MOC_LITERAL(33, 440, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(34, 462, 25), // "rstwaterlevelValueChanged"
QT_MOC_LITERAL(35, 488, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(36, 507, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(37, 527, 6), // "rstArm"
QT_MOC_LITERAL(38, 534, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(39, 560, 16), // "armStatusChanged"
QT_MOC_LITERAL(40, 577, 12), // "QVector<int>"
QT_MOC_LITERAL(41, 590, 6), // "status"
QT_MOC_LITERAL(42, 597, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(43, 621, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(44, 645, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(45, 668, 22), // "shdCrawlerValueChanged"
QT_MOC_LITERAL(46, 691, 15), // "errValueChanged"
QT_MOC_LITERAL(47, 707, 16), // "tempValueChanged"
QT_MOC_LITERAL(48, 724, 10), // "rstCrawler"
QT_MOC_LITERAL(49, 735, 10), // "shdCrawler"
QT_MOC_LITERAL(50, 746, 13), // "rstWaterLevel"
QT_MOC_LITERAL(51, 760, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(52, 779, 20), // "velocityValueChanged"
QT_MOC_LITERAL(53, 800, 16), // "odomValueChanged"
QT_MOC_LITERAL(54, 817, 12), // "current_odom"
QT_MOC_LITERAL(55, 830, 16), // "tripValueChanged"
QT_MOC_LITERAL(56, 847, 12), // "current_trip"
QT_MOC_LITERAL(57, 860, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(58, 883, 5), // "level"
QT_MOC_LITERAL(59, 889, 19), // "batteryValueChanged"
QT_MOC_LITERAL(60, 909, 19), // "currentValueChanged"
QT_MOC_LITERAL(61, 929, 10), // "uidChanged"
QT_MOC_LITERAL(62, 940, 16), // "QVector<QString>"
QT_MOC_LITERAL(63, 957, 8), // "automode"
QT_MOC_LITERAL(64, 966, 13), // "initRosThread"
QT_MOC_LITERAL(65, 980, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(66, 1002, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(67, 1026, 12), // "getComStatus"
QT_MOC_LITERAL(68, 1039, 12), // "setComStatus"
QT_MOC_LITERAL(69, 1052, 12), // "commCallback"
QT_MOC_LITERAL(70, 1065, 20), // "getangularspeedValue"
QT_MOC_LITERAL(71, 1086, 20), // "setangularspeedValue"
QT_MOC_LITERAL(72, 1107, 20), // "angularspeedCallback"
QT_MOC_LITERAL(73, 1128, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(74, 1149, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(75, 1170, 17), // "velstatusCallback"
QT_MOC_LITERAL(76, 1188, 14), // "getToggleValue"
QT_MOC_LITERAL(77, 1203, 14), // "setToggleValue"
QT_MOC_LITERAL(78, 1218, 4), // "flag"
QT_MOC_LITERAL(79, 1223, 14), // "toggleCallback"
QT_MOC_LITERAL(80, 1238, 18), // "getcameraInitValue"
QT_MOC_LITERAL(81, 1257, 18), // "setcameraInitValue"
QT_MOC_LITERAL(82, 1276, 1), // "k"
QT_MOC_LITERAL(83, 1278, 13), // "getToolToggle"
QT_MOC_LITERAL(84, 1292, 13), // "setToolToggle"
QT_MOC_LITERAL(85, 1306, 16), // "getArmToolStatus"
QT_MOC_LITERAL(86, 1323, 16), // "setArmToolStatus"
QT_MOC_LITERAL(87, 1340, 15), // "armToolCallback"
QT_MOC_LITERAL(88, 1356, 3), // "arg"
QT_MOC_LITERAL(89, 1360, 15), // "getslideCWValue"
QT_MOC_LITERAL(90, 1376, 15), // "setslideCWValue"
QT_MOC_LITERAL(91, 1392, 16), // "getslideCCWValue"
QT_MOC_LITERAL(92, 1409, 16), // "setslideCCWValue"
QT_MOC_LITERAL(93, 1426, 16), // "getspeedIncrease"
QT_MOC_LITERAL(94, 1443, 16), // "setspeedIncrease"
QT_MOC_LITERAL(95, 1460, 16), // "getspeedDecrease"
QT_MOC_LITERAL(96, 1477, 16), // "setspeedDecrease"
QT_MOC_LITERAL(97, 1494, 13), // "getlacCWValue"
QT_MOC_LITERAL(98, 1508, 13), // "setlacCWValue"
QT_MOC_LITERAL(99, 1522, 14), // "getlacCCWValue"
QT_MOC_LITERAL(100, 1537, 14), // "setlacCCWValue"
QT_MOC_LITERAL(101, 1552, 17), // "getresetTripValue"
QT_MOC_LITERAL(102, 1570, 17), // "setresetTripValue"
QT_MOC_LITERAL(103, 1588, 13), // "getWaterLevel"
QT_MOC_LITERAL(104, 1602, 13), // "setWaterLevel"
QT_MOC_LITERAL(105, 1616, 15), // "getStopArmValue"
QT_MOC_LITERAL(106, 1632, 15), // "setStopArmValue"
QT_MOC_LITERAL(107, 1648, 14), // "setRstArmValue"
QT_MOC_LITERAL(108, 1663, 14), // "getRstArmValue"
QT_MOC_LITERAL(109, 1678, 12), // "getArmStatus"
QT_MOC_LITERAL(110, 1691, 12), // "setArmStatus"
QT_MOC_LITERAL(111, 1704, 12), // "call_arminit"
QT_MOC_LITERAL(112, 1717, 3), // "val"
QT_MOC_LITERAL(113, 1721, 14), // "trig_armStatus"
QT_MOC_LITERAL(114, 1736, 7), // "rst_arm"
QT_MOC_LITERAL(115, 1744, 11), // "armCallback"
QT_MOC_LITERAL(116, 1756, 7), // "slideCW"
QT_MOC_LITERAL(117, 1764, 8), // "slideCCW"
QT_MOC_LITERAL(118, 1773, 13), // "speedIncrease"
QT_MOC_LITERAL(119, 1787, 13), // "speedDecrease"
QT_MOC_LITERAL(120, 1801, 9), // "resetTrip"
QT_MOC_LITERAL(121, 1811, 10), // "cameraInit"
QT_MOC_LITERAL(122, 1822, 5), // "lacCW"
QT_MOC_LITERAL(123, 1828, 6), // "lacCCW"
QT_MOC_LITERAL(124, 1835, 7), // "stopArm"
QT_MOC_LITERAL(125, 1843, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(126, 1863, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(127, 1883, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(128, 1903, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(129, 1923, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(130, 1942, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(131, 1961, 18), // "getshdCrawlerValue"
QT_MOC_LITERAL(132, 1980, 18), // "setshdCrawlerValue"
QT_MOC_LITERAL(133, 1999, 21), // "getrstwaterlevelValue"
QT_MOC_LITERAL(134, 2021, 21), // "setrstwaterlevelValue"
QT_MOC_LITERAL(135, 2043, 12), // "getTempValue"
QT_MOC_LITERAL(136, 2056, 12), // "setTempValue"
QT_MOC_LITERAL(137, 2069, 11), // "getErrValue"
QT_MOC_LITERAL(138, 2081, 11), // "setErrValue"
QT_MOC_LITERAL(139, 2093, 14), // "getCrawlStatus"
QT_MOC_LITERAL(140, 2108, 14), // "setCrawlStatus"
QT_MOC_LITERAL(141, 2123, 11), // "rst_crawler"
QT_MOC_LITERAL(142, 2135, 11), // "shd_crawler"
QT_MOC_LITERAL(143, 2147, 11), // "reset_water"
QT_MOC_LITERAL(144, 2159, 16), // "call_crawlerinit"
QT_MOC_LITERAL(145, 2176, 12), // "call_slidecw"
QT_MOC_LITERAL(146, 2189, 13), // "call_slideccw"
QT_MOC_LITERAL(147, 2203, 10), // "call_laccw"
QT_MOC_LITERAL(148, 2214, 11), // "call_lacccw"
QT_MOC_LITERAL(149, 2226, 18), // "call_speedIncrease"
QT_MOC_LITERAL(150, 2245, 18), // "call_speedDecrease"
QT_MOC_LITERAL(151, 2264, 14), // "call_resetTrip"
QT_MOC_LITERAL(152, 2279, 20), // "call_resetWaterLevel"
QT_MOC_LITERAL(153, 2300, 15), // "call_cameraInit"
QT_MOC_LITERAL(154, 2316, 13), // "errorCallback"
QT_MOC_LITERAL(155, 2330, 12), // "tempCallback"
QT_MOC_LITERAL(156, 2343, 15), // "crawlerCallback"
QT_MOC_LITERAL(157, 2359, 9), // "frontLeft"
QT_MOC_LITERAL(158, 2369, 10), // "frontRight"
QT_MOC_LITERAL(159, 2380, 10), // "backrRight"
QT_MOC_LITERAL(160, 2391, 8), // "backLeft"
QT_MOC_LITERAL(161, 2400, 11), // "initCrawler"
QT_MOC_LITERAL(162, 2412, 11), // "stopCrawler"
QT_MOC_LITERAL(163, 2424, 13), // "rstwaterlevel"
QT_MOC_LITERAL(164, 2438, 15), // "getBatteryValue"
QT_MOC_LITERAL(165, 2454, 15), // "setBatteryValue"
QT_MOC_LITERAL(166, 2470, 12), // "battCallback"
QT_MOC_LITERAL(167, 2483, 11), // "velCallback"
QT_MOC_LITERAL(168, 2495, 18), // "current_vel_linear"
QT_MOC_LITERAL(169, 2514, 16), // "getVelocityValue"
QT_MOC_LITERAL(170, 2531, 16), // "setVelocityValue"
QT_MOC_LITERAL(171, 2548, 11), // "lacCallback"
QT_MOC_LITERAL(172, 2560, 11), // "getlacValue"
QT_MOC_LITERAL(173, 2572, 11), // "setlacValue"
QT_MOC_LITERAL(174, 2584, 12), // "odomCallback"
QT_MOC_LITERAL(175, 2597, 12), // "getodomValue"
QT_MOC_LITERAL(176, 2610, 12), // "setodomValue"
QT_MOC_LITERAL(177, 2623, 12), // "tripCallback"
QT_MOC_LITERAL(178, 2636, 12), // "gettripValue"
QT_MOC_LITERAL(179, 2649, 12), // "settripValue"
QT_MOC_LITERAL(180, 2662, 15), // "getCurrentValue"
QT_MOC_LITERAL(181, 2678, 15), // "setCurrentValue"
QT_MOC_LITERAL(182, 2694, 15), // "currentCallback"
QT_MOC_LITERAL(183, 2710, 13), // "waterCallback"
QT_MOC_LITERAL(184, 2724, 6), // "getUid"
QT_MOC_LITERAL(185, 2731, 6), // "setUid"
QT_MOC_LITERAL(186, 2738, 11), // "uidCallback"
QT_MOC_LITERAL(187, 2750, 13), // "call_automode"
QT_MOC_LITERAL(188, 2764, 9), // "comStatus"
QT_MOC_LITERAL(189, 2774, 11), // "toggleValue"
QT_MOC_LITERAL(190, 2786, 13), // "armToolStatus"
QT_MOC_LITERAL(191, 2800, 10), // "toolToggle"
QT_MOC_LITERAL(192, 2811, 8), // "lacValue"
QT_MOC_LITERAL(193, 2820, 12), // "stopArmValue"
QT_MOC_LITERAL(194, 2833, 11), // "rstArmValue"
QT_MOC_LITERAL(195, 2845, 9), // "armStatus"
QT_MOC_LITERAL(196, 2855, 16), // "initCrawlerValue"
QT_MOC_LITERAL(197, 2872, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(198, 2889, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(199, 2905, 15), // "shdCrawlerValue"
QT_MOC_LITERAL(200, 2921, 18), // "rstwaterlevelValue"
QT_MOC_LITERAL(201, 2940, 8), // "errValue"
QT_MOC_LITERAL(202, 2949, 9), // "tempValue"
QT_MOC_LITERAL(203, 2959, 11), // "crawlStatus"
QT_MOC_LITERAL(204, 2971, 10), // "waterLevel"
QT_MOC_LITERAL(205, 2982, 13), // "velocityValue"
QT_MOC_LITERAL(206, 2996, 9), // "odomValue"
QT_MOC_LITERAL(207, 3006, 9), // "tripValue"
QT_MOC_LITERAL(208, 3016, 12), // "batteryValue"
QT_MOC_LITERAL(209, 3029, 12), // "anglesetting"
QT_MOC_LITERAL(210, 3042, 12), // "currentValue"
QT_MOC_LITERAL(211, 3055, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0value9\0value10\0value11\0"
    "speedsettingValueChanged\0speedsetting\0"
    "angularspeedValueChanged\0angularspeed\0"
    "comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "slideCWValueChanged\0slideCCWValueChanged\0"
    "speedIncreaseValueChanged\0"
    "speedDecreaseValueChanged\0"
    "cameraInitValueChanged\0lacCWValueChanged\0"
    "lacCCWValueChanged\0lacValueChanged\0"
    "lac_value\0resetTripValueChanged\0"
    "rstwaterlevelValueChanged\0rstArmValueChanged\0"
    "stopArmValueChanged\0rstArm\0"
    "trigArmStatusValueChanged\0armStatusChanged\0"
    "QVector<int>\0status\0initCrawlerValueChanged\0"
    "stopCrawlerValueChanged\0rstCrawlerValueChanged\0"
    "shdCrawlerValueChanged\0errValueChanged\0"
    "tempValueChanged\0rstCrawler\0shdCrawler\0"
    "rstWaterLevel\0crawlStatusChanged\0"
    "velocityValueChanged\0odomValueChanged\0"
    "current_odom\0tripValueChanged\0"
    "current_trip\0waterlevelValueChanged\0"
    "level\0batteryValueChanged\0currentValueChanged\0"
    "uidChanged\0QVector<QString>\0automode\0"
    "initRosThread\0on_pushButton_pressed\0"
    "on_pushButton_2_pressed\0getComStatus\0"
    "setComStatus\0commCallback\0"
    "getangularspeedValue\0setangularspeedValue\0"
    "angularspeedCallback\0getspeedsettingValue\0"
    "setspeedsettingValue\0velstatusCallback\0"
    "getToggleValue\0setToggleValue\0flag\0"
    "toggleCallback\0getcameraInitValue\0"
    "setcameraInitValue\0k\0getToolToggle\0"
    "setToolToggle\0getArmToolStatus\0"
    "setArmToolStatus\0armToolCallback\0arg\0"
    "getslideCWValue\0setslideCWValue\0"
    "getslideCCWValue\0setslideCCWValue\0"
    "getspeedIncrease\0setspeedIncrease\0"
    "getspeedDecrease\0setspeedDecrease\0"
    "getlacCWValue\0setlacCWValue\0getlacCCWValue\0"
    "setlacCCWValue\0getresetTripValue\0"
    "setresetTripValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0speedIncrease\0"
    "speedDecrease\0resetTrip\0cameraInit\0"
    "lacCW\0lacCCW\0stopArm\0getInitCrawlerValue\0"
    "setInitCrawlerValue\0getStopCrawlerValue\0"
    "setStopCrawlerValue\0getRstCrawlerValue\0"
    "setRstCrawlerValue\0getshdCrawlerValue\0"
    "setshdCrawlerValue\0getrstwaterlevelValue\0"
    "setrstwaterlevelValue\0getTempValue\0"
    "setTempValue\0getErrValue\0setErrValue\0"
    "getCrawlStatus\0setCrawlStatus\0rst_crawler\0"
    "shd_crawler\0reset_water\0call_crawlerinit\0"
    "call_slidecw\0call_slideccw\0call_laccw\0"
    "call_lacccw\0call_speedIncrease\0"
    "call_speedDecrease\0call_resetTrip\0"
    "call_resetWaterLevel\0call_cameraInit\0"
    "errorCallback\0tempCallback\0crawlerCallback\0"
    "frontLeft\0frontRight\0backrRight\0"
    "backLeft\0initCrawler\0stopCrawler\0"
    "rstwaterlevel\0getBatteryValue\0"
    "setBatteryValue\0battCallback\0velCallback\0"
    "current_vel_linear\0getVelocityValue\0"
    "setVelocityValue\0lacCallback\0getlacValue\0"
    "setlacValue\0odomCallback\0getodomValue\0"
    "setodomValue\0tripCallback\0gettripValue\0"
    "settripValue\0getCurrentValue\0"
    "setCurrentValue\0currentCallback\0"
    "waterCallback\0getUid\0setUid\0uidCallback\0"
    "call_automode\0comStatus\0toggleValue\0"
    "armToolStatus\0toolToggle\0lacValue\0"
    "stopArmValue\0rstArmValue\0armStatus\0"
    "initCrawlerValue\0stopCrawlerValue\0"
    "rstCrawlerValue\0shdCrawlerValue\0"
    "rstwaterlevelValue\0errValue\0tempValue\0"
    "crawlStatus\0waterLevel\0velocityValue\0"
    "odomValue\0tripValue\0batteryValue\0"
    "anglesetting\0currentValue\0uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     170,   14, // methods
      33, 1304, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      52,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  864,    2, 0x06 /* Public */,
       4,    1,  867,    2, 0x06 /* Public */,
       5,    1,  870,    2, 0x06 /* Public */,
       6,    1,  873,    2, 0x06 /* Public */,
       7,    1,  876,    2, 0x06 /* Public */,
       8,    1,  879,    2, 0x06 /* Public */,
       9,    1,  882,    2, 0x06 /* Public */,
      10,    1,  885,    2, 0x06 /* Public */,
      11,    1,  888,    2, 0x06 /* Public */,
      12,    1,  891,    2, 0x06 /* Public */,
      13,    1,  894,    2, 0x06 /* Public */,
      14,    1,  897,    2, 0x06 /* Public */,
      15,    1,  900,    2, 0x06 /* Public */,
      16,    1,  903,    2, 0x06 /* Public */,
      18,    1,  906,    2, 0x06 /* Public */,
      20,    1,  909,    2, 0x06 /* Public */,
      21,    1,  912,    2, 0x06 /* Public */,
      22,    1,  915,    2, 0x06 /* Public */,
      23,    1,  918,    2, 0x06 /* Public */,
      24,    1,  921,    2, 0x06 /* Public */,
      25,    1,  924,    2, 0x06 /* Public */,
      26,    1,  927,    2, 0x06 /* Public */,
      27,    1,  930,    2, 0x06 /* Public */,
      28,    1,  933,    2, 0x06 /* Public */,
      29,    1,  936,    2, 0x06 /* Public */,
      30,    1,  939,    2, 0x06 /* Public */,
      31,    1,  942,    2, 0x06 /* Public */,
      33,    1,  945,    2, 0x06 /* Public */,
      34,    1,  948,    2, 0x06 /* Public */,
      35,    1,  951,    2, 0x06 /* Public */,
      36,    1,  954,    2, 0x06 /* Public */,
      37,    1,  957,    2, 0x06 /* Public */,
      38,    0,  960,    2, 0x06 /* Public */,
      39,    1,  961,    2, 0x06 /* Public */,
      42,    1,  964,    2, 0x06 /* Public */,
      43,    1,  967,    2, 0x06 /* Public */,
      44,    1,  970,    2, 0x06 /* Public */,
      45,    1,  973,    2, 0x06 /* Public */,
      46,    1,  976,    2, 0x06 /* Public */,
      47,    1,  979,    2, 0x06 /* Public */,
      48,    1,  982,    2, 0x06 /* Public */,
      49,    1,  985,    2, 0x06 /* Public */,
      50,    1,  988,    2, 0x06 /* Public */,
      51,    1,  991,    2, 0x06 /* Public */,
      52,    1,  994,    2, 0x06 /* Public */,
      53,    1,  997,    2, 0x06 /* Public */,
      55,    1, 1000,    2, 0x06 /* Public */,
      57,    1, 1003,    2, 0x06 /* Public */,
      59,    1, 1006,    2, 0x06 /* Public */,
      60,    1, 1009,    2, 0x06 /* Public */,
      61,    1, 1012,    2, 0x06 /* Public */,
      63,    1, 1015,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    0, 1018,    2, 0x0a /* Public */,
      65,    0, 1019,    2, 0x0a /* Public */,
      66,    0, 1020,    2, 0x0a /* Public */,
      67,    0, 1021,    2, 0x0a /* Public */,
      68,    1, 1022,    2, 0x0a /* Public */,
      69,    1, 1025,    2, 0x0a /* Public */,
      70,    0, 1028,    2, 0x0a /* Public */,
      71,    1, 1029,    2, 0x0a /* Public */,
      72,    1, 1032,    2, 0x0a /* Public */,
      73,    0, 1035,    2, 0x0a /* Public */,
      74,    1, 1036,    2, 0x0a /* Public */,
      75,    1, 1039,    2, 0x0a /* Public */,
      76,    0, 1042,    2, 0x0a /* Public */,
      77,    1, 1043,    2, 0x0a /* Public */,
      79,    1, 1046,    2, 0x0a /* Public */,
      80,    0, 1049,    2, 0x0a /* Public */,
      81,    1, 1050,    2, 0x0a /* Public */,
      83,    0, 1053,    2, 0x0a /* Public */,
      84,    1, 1054,    2, 0x0a /* Public */,
      85,    0, 1057,    2, 0x0a /* Public */,
      86,    1, 1058,    2, 0x0a /* Public */,
      87,    1, 1061,    2, 0x0a /* Public */,
      89,    0, 1064,    2, 0x0a /* Public */,
      90,    1, 1065,    2, 0x0a /* Public */,
      91,    0, 1068,    2, 0x0a /* Public */,
      92,    1, 1069,    2, 0x0a /* Public */,
      93,    0, 1072,    2, 0x0a /* Public */,
      94,    1, 1073,    2, 0x0a /* Public */,
      95,    0, 1076,    2, 0x0a /* Public */,
      96,    1, 1077,    2, 0x0a /* Public */,
      97,    0, 1080,    2, 0x0a /* Public */,
      98,    1, 1081,    2, 0x0a /* Public */,
      99,    0, 1084,    2, 0x0a /* Public */,
     100,    1, 1085,    2, 0x0a /* Public */,
     101,    0, 1088,    2, 0x0a /* Public */,
     102,    1, 1089,    2, 0x0a /* Public */,
     103,    0, 1092,    2, 0x0a /* Public */,
     104,    1, 1093,    2, 0x0a /* Public */,
     105,    0, 1096,    2, 0x0a /* Public */,
     106,    1, 1097,    2, 0x0a /* Public */,
     107,    1, 1100,    2, 0x0a /* Public */,
     108,    0, 1103,    2, 0x0a /* Public */,
     109,    0, 1104,    2, 0x0a /* Public */,
     110,    1, 1105,    2, 0x0a /* Public */,
     111,    1, 1108,    2, 0x0a /* Public */,
     113,    0, 1111,    2, 0x0a /* Public */,
     114,    1, 1112,    2, 0x0a /* Public */,
     115,    1, 1115,    2, 0x0a /* Public */,
     116,    1, 1118,    2, 0x0a /* Public */,
     117,    1, 1121,    2, 0x0a /* Public */,
     118,    1, 1124,    2, 0x0a /* Public */,
     119,    1, 1127,    2, 0x0a /* Public */,
     120,    1, 1130,    2, 0x0a /* Public */,
     121,    1, 1133,    2, 0x0a /* Public */,
     122,    1, 1136,    2, 0x0a /* Public */,
     123,    1, 1139,    2, 0x0a /* Public */,
     124,    1, 1142,    2, 0x0a /* Public */,
      37,    1, 1145,    2, 0x0a /* Public */,
     125,    0, 1148,    2, 0x0a /* Public */,
     126,    1, 1149,    2, 0x0a /* Public */,
     127,    0, 1152,    2, 0x0a /* Public */,
     128,    1, 1153,    2, 0x0a /* Public */,
     129,    0, 1156,    2, 0x0a /* Public */,
     130,    1, 1157,    2, 0x0a /* Public */,
     131,    0, 1160,    2, 0x0a /* Public */,
     132,    1, 1161,    2, 0x0a /* Public */,
     133,    0, 1164,    2, 0x0a /* Public */,
     134,    1, 1165,    2, 0x0a /* Public */,
     135,    0, 1168,    2, 0x0a /* Public */,
     136,    1, 1169,    2, 0x0a /* Public */,
     137,    0, 1172,    2, 0x0a /* Public */,
     138,    1, 1173,    2, 0x0a /* Public */,
     139,    0, 1176,    2, 0x0a /* Public */,
     140,    1, 1177,    2, 0x0a /* Public */,
     141,    1, 1180,    2, 0x0a /* Public */,
     142,    1, 1183,    2, 0x0a /* Public */,
     143,    1, 1186,    2, 0x0a /* Public */,
     144,    1, 1189,    2, 0x0a /* Public */,
     145,    1, 1192,    2, 0x0a /* Public */,
     146,    1, 1195,    2, 0x0a /* Public */,
     147,    1, 1198,    2, 0x0a /* Public */,
     148,    1, 1201,    2, 0x0a /* Public */,
     149,    1, 1204,    2, 0x0a /* Public */,
     150,    1, 1207,    2, 0x0a /* Public */,
     151,    1, 1210,    2, 0x0a /* Public */,
     152,    1, 1213,    2, 0x0a /* Public */,
     153,    1, 1216,    2, 0x0a /* Public */,
     154,    1, 1219,    2, 0x0a /* Public */,
     155,    1, 1222,    2, 0x0a /* Public */,
     156,    4, 1225,    2, 0x0a /* Public */,
     161,    1, 1234,    2, 0x0a /* Public */,
     162,    1, 1237,    2, 0x0a /* Public */,
      48,    1, 1240,    2, 0x0a /* Public */,
      49,    1, 1243,    2, 0x0a /* Public */,
     163,    1, 1246,    2, 0x0a /* Public */,
     164,    0, 1249,    2, 0x0a /* Public */,
     165,    1, 1250,    2, 0x0a /* Public */,
     166,    1, 1253,    2, 0x0a /* Public */,
     167,    1, 1256,    2, 0x0a /* Public */,
     169,    0, 1259,    2, 0x0a /* Public */,
     170,    1, 1260,    2, 0x0a /* Public */,
     171,    1, 1263,    2, 0x0a /* Public */,
     172,    0, 1266,    2, 0x0a /* Public */,
     173,    1, 1267,    2, 0x0a /* Public */,
     174,    1, 1270,    2, 0x0a /* Public */,
     175,    0, 1273,    2, 0x0a /* Public */,
     176,    1, 1274,    2, 0x0a /* Public */,
     177,    1, 1277,    2, 0x0a /* Public */,
     178,    0, 1280,    2, 0x0a /* Public */,
     179,    1, 1281,    2, 0x0a /* Public */,
     180,    0, 1284,    2, 0x0a /* Public */,
     181,    1, 1285,    2, 0x0a /* Public */,
     182,    1, 1288,    2, 0x0a /* Public */,
     183,    1, 1291,    2, 0x0a /* Public */,
     184,    0, 1294,    2, 0x0a /* Public */,
     185,    1, 1295,    2, 0x0a /* Public */,
     186,    1, 1298,    2, 0x0a /* Public */,
     187,    1, 1301,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
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
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   41,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void, QMetaType::Float,   58,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 62,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   78,
    QMetaType::Void, QMetaType::Bool,   78,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   88,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   58,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    0x80000000 | 40,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    0x80000000 | 40,
    QMetaType::Void, 0x80000000 | 40,    5,
    0x80000000 | 40,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::Void, 0x80000000 | 40,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  157,  158,  159,  160,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  168,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   58,
    0x80000000 | 62,
    QMetaType::Void, 0x80000000 | 62,    5,
    QMetaType::Void, 0x80000000 | 62,    5,
    QMetaType::Void, QMetaType::Int,  112,

 // properties: name, type, flags
     188, QMetaType::Int, 0x00495103,
     189, QMetaType::Bool, 0x00495103,
     190, QMetaType::Int, 0x00495103,
     191, QMetaType::QString, 0x00495103,
     121, QMetaType::Bool, 0x00495003,
     116, QMetaType::Bool, 0x00495003,
     117, QMetaType::Bool, 0x00495003,
     118, QMetaType::Bool, 0x00495003,
     119, QMetaType::Bool, 0x00495003,
     122, QMetaType::Bool, 0x00495003,
     123, QMetaType::Bool, 0x00495003,
     192, QMetaType::Int, 0x00495003,
     193, QMetaType::Bool, 0x00495103,
     194, QMetaType::Bool, 0x00495103,
     195, 0x80000000 | 40, 0x0049510b,
     196, QMetaType::Bool, 0x00495103,
     197, QMetaType::Bool, 0x00495103,
     198, QMetaType::Bool, 0x00495103,
     199, QMetaType::Bool, 0x00495003,
     200, QMetaType::Bool, 0x00495003,
     201, 0x80000000 | 40, 0x0049510b,
     202, 0x80000000 | 40, 0x0049510b,
     203, QMetaType::QVariantMap, 0x00495103,
     204, QMetaType::Float, 0x00495103,
     205, QMetaType::Int, 0x00495103,
     206, QMetaType::Int, 0x00495003,
     207, QMetaType::Int, 0x00495003,
     120, QMetaType::Int, 0x00495003,
     208, QMetaType::Float, 0x00495103,
      17, QMetaType::Int, 0x00495003,
     209, QMetaType::Int, 0x00495003,
     210, QMetaType::Float, 0x00495103,
     211, 0x80000000 | 62, 0x0049510b,

 // properties: notify_signal_id
      15,
      16,
      17,
      18,
      23,
      19,
      20,
      21,
      22,
      24,
      25,
      26,
      30,
      29,
      33,
      34,
      35,
      36,
      37,
      28,
      38,
      39,
      43,
      47,
      44,
      45,
      46,
      27,
      48,
      13,
      14,
      49,
      50,

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
        case 9: _t->value8((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->value9((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->value10((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->value11((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->speedsettingValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->angularspeedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->speedIncreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->speedDecreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->rstwaterlevelValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->trigArmStatusValueChanged(); break;
        case 33: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 34: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->shdCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 39: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 40: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->shdCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->rstWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 44: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 51: _t->automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->initRosThread(); break;
        case 53: _t->on_pushButton_pressed(); break;
        case 54: _t->on_pushButton_2_pressed(); break;
        case 55: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 71: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: { bool _r = _t->getspeedIncrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setspeedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: { bool _r = _t->getspeedDecrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setspeedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 87: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 90: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 94: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 96: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 97: _t->trig_armStatus(); break;
        case 98: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 99: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 100: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->speedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 103: _t->speedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 106: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 111: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 115: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: { bool _r = _t->getshdCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->setshdCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: { bool _r = _t->getrstwaterlevelValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 119: _t->setrstwaterlevelValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 122: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 124: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 126: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: _t->shd_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: _t->reset_water((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 132: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 133: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: _t->call_speedIncrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 135: _t->call_speedDecrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 136: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 137: _t->call_resetWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 138: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 140: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 141: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 142: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 143: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 144: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 145: _t->shdCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 146: _t->rstwaterlevel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 147: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 148: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 149: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 150: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 151: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 152: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 153: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 154: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 155: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 156: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 157: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 158: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 159: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 160: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 161: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 162: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 163: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 164: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 165: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 166: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 167: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 168: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 169: _t->call_automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 95:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 121:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 139:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 140:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 167:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 168:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value8)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value9)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value10)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value11)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedsettingValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angularspeedValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedIncreaseValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedDecreaseValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstwaterlevelValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawlerValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawler)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstWaterLevel)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::automode)) {
                *result = 51;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 32:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 21:
        case 20:
        case 14:
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
        case 4: *reinterpret_cast< bool*>(_v) = _t->getcameraInitValue(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getslideCWValue(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getslideCCWValue(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getspeedIncrease(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getspeedDecrease(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getlacCWValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getlacCCWValue(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getlacValue(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 14: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->getshdCrawlerValue(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->getrstwaterlevelValue(); break;
        case 20: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 21: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 22: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 30: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 32: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 4: _t->setcameraInitValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setslideCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setslideCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setspeedIncrease(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setspeedDecrease(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setlacCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setlacCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setlacValue(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 15: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setshdCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setrstwaterlevelValue(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 21: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 22: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 23: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 31: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 170)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 170;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 170)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 170;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 33;
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
void Publisher::value8(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::value9(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::value10(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::value11(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::speedsettingValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::angularspeedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::speedIncreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::speedDecreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::rstwaterlevelValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::shdCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::shdCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::rstWaterLevel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Publisher::automode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
