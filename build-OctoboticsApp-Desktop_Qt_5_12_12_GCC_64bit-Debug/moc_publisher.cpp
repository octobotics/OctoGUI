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
    QByteArrayData data[197];
    char stringdata0[2801];
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
QT_MOC_LITERAL(15, 102, 24), // "speedsettingValueChanged"
QT_MOC_LITERAL(16, 127, 12), // "speedsetting"
QT_MOC_LITERAL(17, 140, 24), // "angularspeedValueChanged"
QT_MOC_LITERAL(18, 165, 12), // "angularspeed"
QT_MOC_LITERAL(19, 178, 16), // "comStatusChanged"
QT_MOC_LITERAL(20, 195, 18), // "toggleValueChanged"
QT_MOC_LITERAL(21, 214, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(22, 235, 17), // "toolToggleChanged"
QT_MOC_LITERAL(23, 253, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(24, 273, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(25, 294, 25), // "speedIncreaseValueChanged"
QT_MOC_LITERAL(26, 320, 25), // "speedDecreaseValueChanged"
QT_MOC_LITERAL(27, 346, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(28, 369, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(29, 387, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(30, 406, 15), // "lacValueChanged"
QT_MOC_LITERAL(31, 422, 9), // "lac_value"
QT_MOC_LITERAL(32, 432, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(33, 454, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(34, 473, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(35, 493, 6), // "rstArm"
QT_MOC_LITERAL(36, 500, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(37, 526, 16), // "armStatusChanged"
QT_MOC_LITERAL(38, 543, 12), // "QVector<int>"
QT_MOC_LITERAL(39, 556, 6), // "status"
QT_MOC_LITERAL(40, 563, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(41, 587, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(42, 611, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(43, 634, 15), // "errValueChanged"
QT_MOC_LITERAL(44, 650, 16), // "tempValueChanged"
QT_MOC_LITERAL(45, 667, 10), // "rstCrawler"
QT_MOC_LITERAL(46, 678, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(47, 697, 20), // "velocityValueChanged"
QT_MOC_LITERAL(48, 718, 16), // "odomValueChanged"
QT_MOC_LITERAL(49, 735, 12), // "current_odom"
QT_MOC_LITERAL(50, 748, 16), // "tripValueChanged"
QT_MOC_LITERAL(51, 765, 12), // "current_trip"
QT_MOC_LITERAL(52, 778, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(53, 801, 5), // "level"
QT_MOC_LITERAL(54, 807, 19), // "batteryValueChanged"
QT_MOC_LITERAL(55, 827, 19), // "currentValueChanged"
QT_MOC_LITERAL(56, 847, 10), // "uidChanged"
QT_MOC_LITERAL(57, 858, 16), // "QVector<QString>"
QT_MOC_LITERAL(58, 875, 8), // "automode"
QT_MOC_LITERAL(59, 884, 13), // "initRosThread"
QT_MOC_LITERAL(60, 898, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(61, 920, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(62, 944, 12), // "getComStatus"
QT_MOC_LITERAL(63, 957, 12), // "setComStatus"
QT_MOC_LITERAL(64, 970, 12), // "commCallback"
QT_MOC_LITERAL(65, 983, 20), // "getangularspeedValue"
QT_MOC_LITERAL(66, 1004, 20), // "setangularspeedValue"
QT_MOC_LITERAL(67, 1025, 20), // "angularspeedCallback"
QT_MOC_LITERAL(68, 1046, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(69, 1067, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(70, 1088, 17), // "velstatusCallback"
QT_MOC_LITERAL(71, 1106, 14), // "getToggleValue"
QT_MOC_LITERAL(72, 1121, 14), // "setToggleValue"
QT_MOC_LITERAL(73, 1136, 4), // "flag"
QT_MOC_LITERAL(74, 1141, 14), // "toggleCallback"
QT_MOC_LITERAL(75, 1156, 18), // "getcameraInitValue"
QT_MOC_LITERAL(76, 1175, 18), // "setcameraInitValue"
QT_MOC_LITERAL(77, 1194, 1), // "k"
QT_MOC_LITERAL(78, 1196, 13), // "getToolToggle"
QT_MOC_LITERAL(79, 1210, 13), // "setToolToggle"
QT_MOC_LITERAL(80, 1224, 16), // "getArmToolStatus"
QT_MOC_LITERAL(81, 1241, 16), // "setArmToolStatus"
QT_MOC_LITERAL(82, 1258, 15), // "armToolCallback"
QT_MOC_LITERAL(83, 1274, 3), // "arg"
QT_MOC_LITERAL(84, 1278, 15), // "getslideCWValue"
QT_MOC_LITERAL(85, 1294, 15), // "setslideCWValue"
QT_MOC_LITERAL(86, 1310, 16), // "getslideCCWValue"
QT_MOC_LITERAL(87, 1327, 16), // "setslideCCWValue"
QT_MOC_LITERAL(88, 1344, 16), // "getspeedIncrease"
QT_MOC_LITERAL(89, 1361, 16), // "setspeedIncrease"
QT_MOC_LITERAL(90, 1378, 16), // "getspeedDecrease"
QT_MOC_LITERAL(91, 1395, 16), // "setspeedDecrease"
QT_MOC_LITERAL(92, 1412, 13), // "getlacCWValue"
QT_MOC_LITERAL(93, 1426, 13), // "setlacCWValue"
QT_MOC_LITERAL(94, 1440, 14), // "getlacCCWValue"
QT_MOC_LITERAL(95, 1455, 14), // "setlacCCWValue"
QT_MOC_LITERAL(96, 1470, 17), // "getresetTripValue"
QT_MOC_LITERAL(97, 1488, 17), // "setresetTripValue"
QT_MOC_LITERAL(98, 1506, 13), // "getWaterLevel"
QT_MOC_LITERAL(99, 1520, 13), // "setWaterLevel"
QT_MOC_LITERAL(100, 1534, 15), // "getStopArmValue"
QT_MOC_LITERAL(101, 1550, 15), // "setStopArmValue"
QT_MOC_LITERAL(102, 1566, 14), // "setRstArmValue"
QT_MOC_LITERAL(103, 1581, 14), // "getRstArmValue"
QT_MOC_LITERAL(104, 1596, 12), // "getArmStatus"
QT_MOC_LITERAL(105, 1609, 12), // "setArmStatus"
QT_MOC_LITERAL(106, 1622, 12), // "call_arminit"
QT_MOC_LITERAL(107, 1635, 3), // "val"
QT_MOC_LITERAL(108, 1639, 14), // "trig_armStatus"
QT_MOC_LITERAL(109, 1654, 7), // "rst_arm"
QT_MOC_LITERAL(110, 1662, 11), // "armCallback"
QT_MOC_LITERAL(111, 1674, 7), // "slideCW"
QT_MOC_LITERAL(112, 1682, 8), // "slideCCW"
QT_MOC_LITERAL(113, 1691, 13), // "speedIncrease"
QT_MOC_LITERAL(114, 1705, 13), // "speedDecrease"
QT_MOC_LITERAL(115, 1719, 9), // "resetTrip"
QT_MOC_LITERAL(116, 1729, 10), // "cameraInit"
QT_MOC_LITERAL(117, 1740, 5), // "lacCW"
QT_MOC_LITERAL(118, 1746, 6), // "lacCCW"
QT_MOC_LITERAL(119, 1753, 7), // "stopArm"
QT_MOC_LITERAL(120, 1761, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(121, 1781, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(122, 1801, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(123, 1821, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(124, 1841, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(125, 1860, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(126, 1879, 12), // "getTempValue"
QT_MOC_LITERAL(127, 1892, 12), // "setTempValue"
QT_MOC_LITERAL(128, 1905, 11), // "getErrValue"
QT_MOC_LITERAL(129, 1917, 11), // "setErrValue"
QT_MOC_LITERAL(130, 1929, 14), // "getCrawlStatus"
QT_MOC_LITERAL(131, 1944, 14), // "setCrawlStatus"
QT_MOC_LITERAL(132, 1959, 11), // "rst_crawler"
QT_MOC_LITERAL(133, 1971, 16), // "call_crawlerinit"
QT_MOC_LITERAL(134, 1988, 12), // "call_slidecw"
QT_MOC_LITERAL(135, 2001, 13), // "call_slideccw"
QT_MOC_LITERAL(136, 2015, 10), // "call_laccw"
QT_MOC_LITERAL(137, 2026, 11), // "call_lacccw"
QT_MOC_LITERAL(138, 2038, 18), // "call_speedIncrease"
QT_MOC_LITERAL(139, 2057, 18), // "call_speedDecrease"
QT_MOC_LITERAL(140, 2076, 14), // "call_resetTrip"
QT_MOC_LITERAL(141, 2091, 15), // "call_cameraInit"
QT_MOC_LITERAL(142, 2107, 13), // "errorCallback"
QT_MOC_LITERAL(143, 2121, 12), // "tempCallback"
QT_MOC_LITERAL(144, 2134, 15), // "crawlerCallback"
QT_MOC_LITERAL(145, 2150, 9), // "frontLeft"
QT_MOC_LITERAL(146, 2160, 10), // "frontRight"
QT_MOC_LITERAL(147, 2171, 10), // "backrRight"
QT_MOC_LITERAL(148, 2182, 8), // "backLeft"
QT_MOC_LITERAL(149, 2191, 11), // "initCrawler"
QT_MOC_LITERAL(150, 2203, 11), // "stopCrawler"
QT_MOC_LITERAL(151, 2215, 15), // "getBatteryValue"
QT_MOC_LITERAL(152, 2231, 15), // "setBatteryValue"
QT_MOC_LITERAL(153, 2247, 12), // "battCallback"
QT_MOC_LITERAL(154, 2260, 11), // "velCallback"
QT_MOC_LITERAL(155, 2272, 18), // "current_vel_linear"
QT_MOC_LITERAL(156, 2291, 16), // "getVelocityValue"
QT_MOC_LITERAL(157, 2308, 16), // "setVelocityValue"
QT_MOC_LITERAL(158, 2325, 11), // "lacCallback"
QT_MOC_LITERAL(159, 2337, 11), // "getlacValue"
QT_MOC_LITERAL(160, 2349, 11), // "setlacValue"
QT_MOC_LITERAL(161, 2361, 12), // "odomCallback"
QT_MOC_LITERAL(162, 2374, 12), // "getodomValue"
QT_MOC_LITERAL(163, 2387, 12), // "setodomValue"
QT_MOC_LITERAL(164, 2400, 12), // "tripCallback"
QT_MOC_LITERAL(165, 2413, 12), // "gettripValue"
QT_MOC_LITERAL(166, 2426, 12), // "settripValue"
QT_MOC_LITERAL(167, 2439, 15), // "getCurrentValue"
QT_MOC_LITERAL(168, 2455, 15), // "setCurrentValue"
QT_MOC_LITERAL(169, 2471, 15), // "currentCallback"
QT_MOC_LITERAL(170, 2487, 13), // "waterCallback"
QT_MOC_LITERAL(171, 2501, 6), // "getUid"
QT_MOC_LITERAL(172, 2508, 6), // "setUid"
QT_MOC_LITERAL(173, 2515, 11), // "uidCallback"
QT_MOC_LITERAL(174, 2527, 13), // "call_automode"
QT_MOC_LITERAL(175, 2541, 9), // "comStatus"
QT_MOC_LITERAL(176, 2551, 11), // "toggleValue"
QT_MOC_LITERAL(177, 2563, 13), // "armToolStatus"
QT_MOC_LITERAL(178, 2577, 10), // "toolToggle"
QT_MOC_LITERAL(179, 2588, 8), // "lacValue"
QT_MOC_LITERAL(180, 2597, 12), // "stopArmValue"
QT_MOC_LITERAL(181, 2610, 11), // "rstArmValue"
QT_MOC_LITERAL(182, 2622, 9), // "armStatus"
QT_MOC_LITERAL(183, 2632, 16), // "initCrawlerValue"
QT_MOC_LITERAL(184, 2649, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(185, 2666, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(186, 2682, 8), // "errValue"
QT_MOC_LITERAL(187, 2691, 9), // "tempValue"
QT_MOC_LITERAL(188, 2701, 11), // "crawlStatus"
QT_MOC_LITERAL(189, 2713, 10), // "waterLevel"
QT_MOC_LITERAL(190, 2724, 13), // "velocityValue"
QT_MOC_LITERAL(191, 2738, 9), // "odomValue"
QT_MOC_LITERAL(192, 2748, 9), // "tripValue"
QT_MOC_LITERAL(193, 2758, 12), // "batteryValue"
QT_MOC_LITERAL(194, 2771, 12), // "anglesetting"
QT_MOC_LITERAL(195, 2784, 12), // "currentValue"
QT_MOC_LITERAL(196, 2797, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0value9\0value10\0"
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
    "rstArmValueChanged\0stopArmValueChanged\0"
    "rstArm\0trigArmStatusValueChanged\0"
    "armStatusChanged\0QVector<int>\0status\0"
    "initCrawlerValueChanged\0stopCrawlerValueChanged\0"
    "rstCrawlerValueChanged\0errValueChanged\0"
    "tempValueChanged\0rstCrawler\0"
    "crawlStatusChanged\0velocityValueChanged\0"
    "odomValueChanged\0current_odom\0"
    "tripValueChanged\0current_trip\0"
    "waterlevelValueChanged\0level\0"
    "batteryValueChanged\0currentValueChanged\0"
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
    "setRstCrawlerValue\0getTempValue\0"
    "setTempValue\0getErrValue\0setErrValue\0"
    "getCrawlStatus\0setCrawlStatus\0rst_crawler\0"
    "call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
    "call_speedIncrease\0call_speedDecrease\0"
    "call_resetTrip\0call_cameraInit\0"
    "errorCallback\0tempCallback\0crawlerCallback\0"
    "frontLeft\0frontRight\0backrRight\0"
    "backLeft\0initCrawler\0stopCrawler\0"
    "getBatteryValue\0setBatteryValue\0"
    "battCallback\0velCallback\0current_vel_linear\0"
    "getVelocityValue\0setVelocityValue\0"
    "lacCallback\0getlacValue\0setlacValue\0"
    "odomCallback\0getodomValue\0setodomValue\0"
    "tripCallback\0gettripValue\0settripValue\0"
    "getCurrentValue\0setCurrentValue\0"
    "currentCallback\0waterCallback\0getUid\0"
    "setUid\0uidCallback\0call_automode\0"
    "comStatus\0toggleValue\0armToolStatus\0"
    "toolToggle\0lacValue\0stopArmValue\0"
    "rstArmValue\0armStatus\0initCrawlerValue\0"
    "stopCrawlerValue\0rstCrawlerValue\0"
    "errValue\0tempValue\0crawlStatus\0"
    "waterLevel\0velocityValue\0odomValue\0"
    "tripValue\0batteryValue\0anglesetting\0"
    "currentValue\0uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     156,   14, // methods
      31, 1196, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      47,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  794,    2, 0x06 /* Public */,
       4,    1,  797,    2, 0x06 /* Public */,
       5,    1,  800,    2, 0x06 /* Public */,
       6,    1,  803,    2, 0x06 /* Public */,
       7,    1,  806,    2, 0x06 /* Public */,
       8,    1,  809,    2, 0x06 /* Public */,
       9,    1,  812,    2, 0x06 /* Public */,
      10,    1,  815,    2, 0x06 /* Public */,
      11,    1,  818,    2, 0x06 /* Public */,
      12,    1,  821,    2, 0x06 /* Public */,
      13,    1,  824,    2, 0x06 /* Public */,
      14,    1,  827,    2, 0x06 /* Public */,
      15,    1,  830,    2, 0x06 /* Public */,
      17,    1,  833,    2, 0x06 /* Public */,
      19,    1,  836,    2, 0x06 /* Public */,
      20,    1,  839,    2, 0x06 /* Public */,
      21,    1,  842,    2, 0x06 /* Public */,
      22,    1,  845,    2, 0x06 /* Public */,
      23,    1,  848,    2, 0x06 /* Public */,
      24,    1,  851,    2, 0x06 /* Public */,
      25,    1,  854,    2, 0x06 /* Public */,
      26,    1,  857,    2, 0x06 /* Public */,
      27,    1,  860,    2, 0x06 /* Public */,
      28,    1,  863,    2, 0x06 /* Public */,
      29,    1,  866,    2, 0x06 /* Public */,
      30,    1,  869,    2, 0x06 /* Public */,
      32,    1,  872,    2, 0x06 /* Public */,
      33,    1,  875,    2, 0x06 /* Public */,
      34,    1,  878,    2, 0x06 /* Public */,
      35,    1,  881,    2, 0x06 /* Public */,
      36,    0,  884,    2, 0x06 /* Public */,
      37,    1,  885,    2, 0x06 /* Public */,
      40,    1,  888,    2, 0x06 /* Public */,
      41,    1,  891,    2, 0x06 /* Public */,
      42,    1,  894,    2, 0x06 /* Public */,
      43,    1,  897,    2, 0x06 /* Public */,
      44,    1,  900,    2, 0x06 /* Public */,
      45,    1,  903,    2, 0x06 /* Public */,
      46,    1,  906,    2, 0x06 /* Public */,
      47,    1,  909,    2, 0x06 /* Public */,
      48,    1,  912,    2, 0x06 /* Public */,
      50,    1,  915,    2, 0x06 /* Public */,
      52,    1,  918,    2, 0x06 /* Public */,
      54,    1,  921,    2, 0x06 /* Public */,
      55,    1,  924,    2, 0x06 /* Public */,
      56,    1,  927,    2, 0x06 /* Public */,
      58,    1,  930,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      59,    0,  933,    2, 0x0a /* Public */,
      60,    0,  934,    2, 0x0a /* Public */,
      61,    0,  935,    2, 0x0a /* Public */,
      62,    0,  936,    2, 0x0a /* Public */,
      63,    1,  937,    2, 0x0a /* Public */,
      64,    1,  940,    2, 0x0a /* Public */,
      65,    0,  943,    2, 0x0a /* Public */,
      66,    1,  944,    2, 0x0a /* Public */,
      67,    1,  947,    2, 0x0a /* Public */,
      68,    0,  950,    2, 0x0a /* Public */,
      69,    1,  951,    2, 0x0a /* Public */,
      70,    1,  954,    2, 0x0a /* Public */,
      71,    0,  957,    2, 0x0a /* Public */,
      72,    1,  958,    2, 0x0a /* Public */,
      74,    1,  961,    2, 0x0a /* Public */,
      75,    0,  964,    2, 0x0a /* Public */,
      76,    1,  965,    2, 0x0a /* Public */,
      78,    0,  968,    2, 0x0a /* Public */,
      79,    1,  969,    2, 0x0a /* Public */,
      80,    0,  972,    2, 0x0a /* Public */,
      81,    1,  973,    2, 0x0a /* Public */,
      82,    1,  976,    2, 0x0a /* Public */,
      84,    0,  979,    2, 0x0a /* Public */,
      85,    1,  980,    2, 0x0a /* Public */,
      86,    0,  983,    2, 0x0a /* Public */,
      87,    1,  984,    2, 0x0a /* Public */,
      88,    0,  987,    2, 0x0a /* Public */,
      89,    1,  988,    2, 0x0a /* Public */,
      90,    0,  991,    2, 0x0a /* Public */,
      91,    1,  992,    2, 0x0a /* Public */,
      92,    0,  995,    2, 0x0a /* Public */,
      93,    1,  996,    2, 0x0a /* Public */,
      94,    0,  999,    2, 0x0a /* Public */,
      95,    1, 1000,    2, 0x0a /* Public */,
      96,    0, 1003,    2, 0x0a /* Public */,
      97,    1, 1004,    2, 0x0a /* Public */,
      98,    0, 1007,    2, 0x0a /* Public */,
      99,    1, 1008,    2, 0x0a /* Public */,
     100,    0, 1011,    2, 0x0a /* Public */,
     101,    1, 1012,    2, 0x0a /* Public */,
     102,    1, 1015,    2, 0x0a /* Public */,
     103,    0, 1018,    2, 0x0a /* Public */,
     104,    0, 1019,    2, 0x0a /* Public */,
     105,    1, 1020,    2, 0x0a /* Public */,
     106,    1, 1023,    2, 0x0a /* Public */,
     108,    0, 1026,    2, 0x0a /* Public */,
     109,    1, 1027,    2, 0x0a /* Public */,
     110,    1, 1030,    2, 0x0a /* Public */,
     111,    1, 1033,    2, 0x0a /* Public */,
     112,    1, 1036,    2, 0x0a /* Public */,
     113,    1, 1039,    2, 0x0a /* Public */,
     114,    1, 1042,    2, 0x0a /* Public */,
     115,    1, 1045,    2, 0x0a /* Public */,
     116,    1, 1048,    2, 0x0a /* Public */,
     117,    1, 1051,    2, 0x0a /* Public */,
     118,    1, 1054,    2, 0x0a /* Public */,
     119,    1, 1057,    2, 0x0a /* Public */,
      35,    1, 1060,    2, 0x0a /* Public */,
     120,    0, 1063,    2, 0x0a /* Public */,
     121,    1, 1064,    2, 0x0a /* Public */,
     122,    0, 1067,    2, 0x0a /* Public */,
     123,    1, 1068,    2, 0x0a /* Public */,
     124,    0, 1071,    2, 0x0a /* Public */,
     125,    1, 1072,    2, 0x0a /* Public */,
     126,    0, 1075,    2, 0x0a /* Public */,
     127,    1, 1076,    2, 0x0a /* Public */,
     128,    0, 1079,    2, 0x0a /* Public */,
     129,    1, 1080,    2, 0x0a /* Public */,
     130,    0, 1083,    2, 0x0a /* Public */,
     131,    1, 1084,    2, 0x0a /* Public */,
     132,    1, 1087,    2, 0x0a /* Public */,
     133,    1, 1090,    2, 0x0a /* Public */,
     134,    1, 1093,    2, 0x0a /* Public */,
     135,    1, 1096,    2, 0x0a /* Public */,
     136,    1, 1099,    2, 0x0a /* Public */,
     137,    1, 1102,    2, 0x0a /* Public */,
     138,    1, 1105,    2, 0x0a /* Public */,
     139,    1, 1108,    2, 0x0a /* Public */,
     140,    1, 1111,    2, 0x0a /* Public */,
     141,    1, 1114,    2, 0x0a /* Public */,
     142,    1, 1117,    2, 0x0a /* Public */,
     143,    1, 1120,    2, 0x0a /* Public */,
     144,    4, 1123,    2, 0x0a /* Public */,
     149,    1, 1132,    2, 0x0a /* Public */,
     150,    1, 1135,    2, 0x0a /* Public */,
      45,    1, 1138,    2, 0x0a /* Public */,
     151,    0, 1141,    2, 0x0a /* Public */,
     152,    1, 1142,    2, 0x0a /* Public */,
     153,    1, 1145,    2, 0x0a /* Public */,
     154,    1, 1148,    2, 0x0a /* Public */,
     156,    0, 1151,    2, 0x0a /* Public */,
     157,    1, 1152,    2, 0x0a /* Public */,
     158,    1, 1155,    2, 0x0a /* Public */,
     159,    0, 1158,    2, 0x0a /* Public */,
     160,    1, 1159,    2, 0x0a /* Public */,
     161,    1, 1162,    2, 0x0a /* Public */,
     162,    0, 1165,    2, 0x0a /* Public */,
     163,    1, 1166,    2, 0x0a /* Public */,
     164,    1, 1169,    2, 0x0a /* Public */,
     165,    0, 1172,    2, 0x0a /* Public */,
     166,    1, 1173,    2, 0x0a /* Public */,
     167,    0, 1176,    2, 0x0a /* Public */,
     168,    1, 1177,    2, 0x0a /* Public */,
     169,    1, 1180,    2, 0x0a /* Public */,
     170,    1, 1183,    2, 0x0a /* Public */,
     171,    0, 1186,    2, 0x0a /* Public */,
     172,    1, 1187,    2, 0x0a /* Public */,
     173,    1, 1190,    2, 0x0a /* Public */,
     174,    1, 1193,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
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
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   39,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Float,   53,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 57,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   53,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    0x80000000 | 38,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   77,
    0x80000000 | 38,
    QMetaType::Void, 0x80000000 | 38,    5,
    0x80000000 | 38,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::Void, 0x80000000 | 38,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  145,  146,  147,  148,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  155,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   53,
    0x80000000 | 57,
    QMetaType::Void, 0x80000000 | 57,    5,
    QMetaType::Void, 0x80000000 | 57,    5,
    QMetaType::Void, QMetaType::Int,  107,

 // properties: name, type, flags
     175, QMetaType::Int, 0x00495103,
     176, QMetaType::Bool, 0x00495103,
     177, QMetaType::Int, 0x00495103,
     178, QMetaType::QString, 0x00495103,
     116, QMetaType::Bool, 0x00495003,
     111, QMetaType::Bool, 0x00495003,
     112, QMetaType::Bool, 0x00495003,
     113, QMetaType::Bool, 0x00495003,
     114, QMetaType::Bool, 0x00495003,
     117, QMetaType::Bool, 0x00495003,
     118, QMetaType::Bool, 0x00495003,
     179, QMetaType::Int, 0x00495003,
     180, QMetaType::Bool, 0x00495103,
     181, QMetaType::Bool, 0x00495103,
     182, 0x80000000 | 38, 0x0049510b,
     183, QMetaType::Bool, 0x00495103,
     184, QMetaType::Bool, 0x00495103,
     185, QMetaType::Bool, 0x00495103,
     186, 0x80000000 | 38, 0x0049510b,
     187, 0x80000000 | 38, 0x0049510b,
     188, QMetaType::QVariantMap, 0x00495103,
     189, QMetaType::Float, 0x00495103,
     190, QMetaType::Int, 0x00495103,
     191, QMetaType::Int, 0x00495003,
     192, QMetaType::Int, 0x00495003,
     115, QMetaType::Int, 0x00495003,
     193, QMetaType::Float, 0x00495103,
      16, QMetaType::Int, 0x00495003,
     194, QMetaType::Int, 0x00495003,
     195, QMetaType::Float, 0x00495103,
     196, 0x80000000 | 57, 0x0049510b,

 // properties: notify_signal_id
      14,
      15,
      16,
      17,
      22,
      18,
      19,
      20,
      21,
      23,
      24,
      25,
      28,
      27,
      31,
      32,
      33,
      34,
      35,
      36,
      38,
      42,
      39,
      40,
      41,
      26,
      43,
      12,
      13,
      44,
      45,

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
        case 12: _t->speedsettingValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->angularspeedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->speedIncreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->speedDecreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->trigArmStatusValueChanged(); break;
        case 31: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 32: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 36: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 37: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 39: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 45: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 46: _t->automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->initRosThread(); break;
        case 48: _t->on_pushButton_pressed(); break;
        case 49: _t->on_pushButton_2_pressed(); break;
        case 50: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { bool _r = _t->getspeedIncrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->setspeedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: { bool _r = _t->getspeedDecrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setspeedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 84: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 85: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 89: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 91: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->trig_armStatus(); break;
        case 93: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 95: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: _t->speedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->speedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 103: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 106: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 108: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 110: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 112: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 113: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 114: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 115: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 116: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 117: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 118: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 120: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 121: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->call_speedIncrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: _t->call_speedDecrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 128: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 129: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 130: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 131: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 132: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 134: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 135: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 136: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 137: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 138: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 141: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 144: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 146: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 147: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 148: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 149: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 150: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 151: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 152: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 153: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 154: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 155: _t->call_automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 90:
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
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 128:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 153:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 154:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedsettingValueChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angularspeedValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedIncreaseValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedDecreaseValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::automode)) {
                *result = 46;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 19:
        case 18:
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
        case 18: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 19: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 20: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
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
        case 18: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 19: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 20: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 21: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
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
        if (_id < 156)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 156;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 156)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 156;
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
void Publisher::speedsettingValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::angularspeedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::speedIncreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::speedDecreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Publisher::automode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
