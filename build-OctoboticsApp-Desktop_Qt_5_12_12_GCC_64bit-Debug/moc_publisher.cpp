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
    QByteArrayData data[183];
    char stringdata0[2577];
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
QT_MOC_LITERAL(13, 87, 24), // "speedsettingValueChanged"
QT_MOC_LITERAL(14, 112, 12), // "speedsetting"
QT_MOC_LITERAL(15, 125, 24), // "angularspeedValueChanged"
QT_MOC_LITERAL(16, 150, 12), // "angularspeed"
QT_MOC_LITERAL(17, 163, 16), // "comStatusChanged"
QT_MOC_LITERAL(18, 180, 18), // "toggleValueChanged"
QT_MOC_LITERAL(19, 199, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(20, 220, 17), // "toolToggleChanged"
QT_MOC_LITERAL(21, 238, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(22, 258, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(23, 279, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(24, 302, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(25, 320, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(26, 339, 15), // "lacValueChanged"
QT_MOC_LITERAL(27, 355, 9), // "lac_value"
QT_MOC_LITERAL(28, 365, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(29, 387, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(30, 406, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(31, 426, 6), // "rstArm"
QT_MOC_LITERAL(32, 433, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(33, 459, 16), // "armStatusChanged"
QT_MOC_LITERAL(34, 476, 12), // "QVector<int>"
QT_MOC_LITERAL(35, 489, 6), // "status"
QT_MOC_LITERAL(36, 496, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(37, 520, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(38, 544, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(39, 567, 15), // "errValueChanged"
QT_MOC_LITERAL(40, 583, 16), // "tempValueChanged"
QT_MOC_LITERAL(41, 600, 10), // "rstCrawler"
QT_MOC_LITERAL(42, 611, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(43, 630, 20), // "velocityValueChanged"
QT_MOC_LITERAL(44, 651, 16), // "odomValueChanged"
QT_MOC_LITERAL(45, 668, 12), // "current_odom"
QT_MOC_LITERAL(46, 681, 16), // "tripValueChanged"
QT_MOC_LITERAL(47, 698, 12), // "current_trip"
QT_MOC_LITERAL(48, 711, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(49, 734, 5), // "level"
QT_MOC_LITERAL(50, 740, 19), // "batteryValueChanged"
QT_MOC_LITERAL(51, 760, 19), // "currentValueChanged"
QT_MOC_LITERAL(52, 780, 10), // "uidChanged"
QT_MOC_LITERAL(53, 791, 16), // "QVector<QString>"
QT_MOC_LITERAL(54, 808, 13), // "initRosThread"
QT_MOC_LITERAL(55, 822, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(56, 844, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(57, 868, 12), // "getComStatus"
QT_MOC_LITERAL(58, 881, 12), // "setComStatus"
QT_MOC_LITERAL(59, 894, 12), // "commCallback"
QT_MOC_LITERAL(60, 907, 20), // "getangularspeedValue"
QT_MOC_LITERAL(61, 928, 20), // "setangularspeedValue"
QT_MOC_LITERAL(62, 949, 20), // "angularspeedCallback"
QT_MOC_LITERAL(63, 970, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(64, 991, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(65, 1012, 17), // "velstatusCallback"
QT_MOC_LITERAL(66, 1030, 14), // "getToggleValue"
QT_MOC_LITERAL(67, 1045, 14), // "setToggleValue"
QT_MOC_LITERAL(68, 1060, 4), // "flag"
QT_MOC_LITERAL(69, 1065, 14), // "toggleCallback"
QT_MOC_LITERAL(70, 1080, 18), // "getcameraInitValue"
QT_MOC_LITERAL(71, 1099, 18), // "setcameraInitValue"
QT_MOC_LITERAL(72, 1118, 1), // "k"
QT_MOC_LITERAL(73, 1120, 13), // "getToolToggle"
QT_MOC_LITERAL(74, 1134, 13), // "setToolToggle"
QT_MOC_LITERAL(75, 1148, 16), // "getArmToolStatus"
QT_MOC_LITERAL(76, 1165, 16), // "setArmToolStatus"
QT_MOC_LITERAL(77, 1182, 15), // "armToolCallback"
QT_MOC_LITERAL(78, 1198, 3), // "arg"
QT_MOC_LITERAL(79, 1202, 15), // "getslideCWValue"
QT_MOC_LITERAL(80, 1218, 15), // "setslideCWValue"
QT_MOC_LITERAL(81, 1234, 16), // "getslideCCWValue"
QT_MOC_LITERAL(82, 1251, 16), // "setslideCCWValue"
QT_MOC_LITERAL(83, 1268, 13), // "getlacCWValue"
QT_MOC_LITERAL(84, 1282, 13), // "setlacCWValue"
QT_MOC_LITERAL(85, 1296, 14), // "getlacCCWValue"
QT_MOC_LITERAL(86, 1311, 14), // "setlacCCWValue"
QT_MOC_LITERAL(87, 1326, 17), // "getresetTripValue"
QT_MOC_LITERAL(88, 1344, 17), // "setresetTripValue"
QT_MOC_LITERAL(89, 1362, 13), // "getWaterLevel"
QT_MOC_LITERAL(90, 1376, 13), // "setWaterLevel"
QT_MOC_LITERAL(91, 1390, 15), // "getStopArmValue"
QT_MOC_LITERAL(92, 1406, 15), // "setStopArmValue"
QT_MOC_LITERAL(93, 1422, 14), // "setRstArmValue"
QT_MOC_LITERAL(94, 1437, 14), // "getRstArmValue"
QT_MOC_LITERAL(95, 1452, 12), // "getArmStatus"
QT_MOC_LITERAL(96, 1465, 12), // "setArmStatus"
QT_MOC_LITERAL(97, 1478, 12), // "call_arminit"
QT_MOC_LITERAL(98, 1491, 3), // "val"
QT_MOC_LITERAL(99, 1495, 14), // "trig_armStatus"
QT_MOC_LITERAL(100, 1510, 7), // "rst_arm"
QT_MOC_LITERAL(101, 1518, 11), // "armCallback"
QT_MOC_LITERAL(102, 1530, 7), // "slideCW"
QT_MOC_LITERAL(103, 1538, 8), // "slideCCW"
QT_MOC_LITERAL(104, 1547, 9), // "resetTrip"
QT_MOC_LITERAL(105, 1557, 10), // "cameraInit"
QT_MOC_LITERAL(106, 1568, 5), // "lacCW"
QT_MOC_LITERAL(107, 1574, 6), // "lacCCW"
QT_MOC_LITERAL(108, 1581, 7), // "stopArm"
QT_MOC_LITERAL(109, 1589, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(110, 1609, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(111, 1629, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(112, 1649, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(113, 1669, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(114, 1688, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(115, 1707, 12), // "getTempValue"
QT_MOC_LITERAL(116, 1720, 12), // "setTempValue"
QT_MOC_LITERAL(117, 1733, 11), // "getErrValue"
QT_MOC_LITERAL(118, 1745, 11), // "setErrValue"
QT_MOC_LITERAL(119, 1757, 14), // "getCrawlStatus"
QT_MOC_LITERAL(120, 1772, 14), // "setCrawlStatus"
QT_MOC_LITERAL(121, 1787, 11), // "rst_crawler"
QT_MOC_LITERAL(122, 1799, 16), // "call_crawlerinit"
QT_MOC_LITERAL(123, 1816, 12), // "call_slidecw"
QT_MOC_LITERAL(124, 1829, 13), // "call_slideccw"
QT_MOC_LITERAL(125, 1843, 10), // "call_laccw"
QT_MOC_LITERAL(126, 1854, 11), // "call_lacccw"
QT_MOC_LITERAL(127, 1866, 14), // "call_resetTrip"
QT_MOC_LITERAL(128, 1881, 15), // "call_cameraInit"
QT_MOC_LITERAL(129, 1897, 13), // "errorCallback"
QT_MOC_LITERAL(130, 1911, 12), // "tempCallback"
QT_MOC_LITERAL(131, 1924, 15), // "crawlerCallback"
QT_MOC_LITERAL(132, 1940, 9), // "frontLeft"
QT_MOC_LITERAL(133, 1950, 10), // "frontRight"
QT_MOC_LITERAL(134, 1961, 10), // "backrRight"
QT_MOC_LITERAL(135, 1972, 8), // "backLeft"
QT_MOC_LITERAL(136, 1981, 11), // "initCrawler"
QT_MOC_LITERAL(137, 1993, 11), // "stopCrawler"
QT_MOC_LITERAL(138, 2005, 15), // "getBatteryValue"
QT_MOC_LITERAL(139, 2021, 15), // "setBatteryValue"
QT_MOC_LITERAL(140, 2037, 12), // "battCallback"
QT_MOC_LITERAL(141, 2050, 11), // "velCallback"
QT_MOC_LITERAL(142, 2062, 18), // "current_vel_linear"
QT_MOC_LITERAL(143, 2081, 16), // "getVelocityValue"
QT_MOC_LITERAL(144, 2098, 16), // "setVelocityValue"
QT_MOC_LITERAL(145, 2115, 11), // "lacCallback"
QT_MOC_LITERAL(146, 2127, 11), // "getlacValue"
QT_MOC_LITERAL(147, 2139, 11), // "setlacValue"
QT_MOC_LITERAL(148, 2151, 12), // "odomCallback"
QT_MOC_LITERAL(149, 2164, 12), // "getodomValue"
QT_MOC_LITERAL(150, 2177, 12), // "setodomValue"
QT_MOC_LITERAL(151, 2190, 12), // "tripCallback"
QT_MOC_LITERAL(152, 2203, 12), // "gettripValue"
QT_MOC_LITERAL(153, 2216, 12), // "settripValue"
QT_MOC_LITERAL(154, 2229, 15), // "getCurrentValue"
QT_MOC_LITERAL(155, 2245, 15), // "setCurrentValue"
QT_MOC_LITERAL(156, 2261, 15), // "currentCallback"
QT_MOC_LITERAL(157, 2277, 13), // "waterCallback"
QT_MOC_LITERAL(158, 2291, 6), // "getUid"
QT_MOC_LITERAL(159, 2298, 6), // "setUid"
QT_MOC_LITERAL(160, 2305, 11), // "uidCallback"
QT_MOC_LITERAL(161, 2317, 9), // "comStatus"
QT_MOC_LITERAL(162, 2327, 11), // "toggleValue"
QT_MOC_LITERAL(163, 2339, 13), // "armToolStatus"
QT_MOC_LITERAL(164, 2353, 10), // "toolToggle"
QT_MOC_LITERAL(165, 2364, 8), // "lacValue"
QT_MOC_LITERAL(166, 2373, 12), // "stopArmValue"
QT_MOC_LITERAL(167, 2386, 11), // "rstArmValue"
QT_MOC_LITERAL(168, 2398, 9), // "armStatus"
QT_MOC_LITERAL(169, 2408, 16), // "initCrawlerValue"
QT_MOC_LITERAL(170, 2425, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(171, 2442, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(172, 2458, 8), // "errValue"
QT_MOC_LITERAL(173, 2467, 9), // "tempValue"
QT_MOC_LITERAL(174, 2477, 11), // "crawlStatus"
QT_MOC_LITERAL(175, 2489, 10), // "waterLevel"
QT_MOC_LITERAL(176, 2500, 13), // "velocityValue"
QT_MOC_LITERAL(177, 2514, 9), // "odomValue"
QT_MOC_LITERAL(178, 2524, 9), // "tripValue"
QT_MOC_LITERAL(179, 2534, 12), // "batteryValue"
QT_MOC_LITERAL(180, 2547, 12), // "anglesetting"
QT_MOC_LITERAL(181, 2560, 12), // "currentValue"
QT_MOC_LITERAL(182, 2573, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0speedsettingValueChanged\0"
    "speedsetting\0angularspeedValueChanged\0"
    "angularspeed\0comStatusChanged\0"
    "toggleValueChanged\0armToolStatusChanged\0"
    "toolToggleChanged\0slideCWValueChanged\0"
    "slideCCWValueChanged\0cameraInitValueChanged\0"
    "lacCWValueChanged\0lacCCWValueChanged\0"
    "lacValueChanged\0lac_value\0"
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
    "uidChanged\0QVector<QString>\0initRosThread\0"
    "on_pushButton_pressed\0on_pushButton_2_pressed\0"
    "getComStatus\0setComStatus\0commCallback\0"
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
    "getlacCWValue\0setlacCWValue\0getlacCCWValue\0"
    "setlacCCWValue\0getresetTripValue\0"
    "setresetTripValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0resetTrip\0"
    "cameraInit\0lacCW\0lacCCW\0stopArm\0"
    "getInitCrawlerValue\0setInitCrawlerValue\0"
    "getStopCrawlerValue\0setStopCrawlerValue\0"
    "getRstCrawlerValue\0setRstCrawlerValue\0"
    "getTempValue\0setTempValue\0getErrValue\0"
    "setErrValue\0getCrawlStatus\0setCrawlStatus\0"
    "rst_crawler\0call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
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
    "setUid\0uidCallback\0comStatus\0toggleValue\0"
    "armToolStatus\0toolToggle\0lacValue\0"
    "stopArmValue\0rstArmValue\0armStatus\0"
    "initCrawlerValue\0stopCrawlerValue\0"
    "rstCrawlerValue\0errValue\0tempValue\0"
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
     142,   14, // methods
      29, 1088, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  724,    2, 0x06 /* Public */,
       4,    1,  727,    2, 0x06 /* Public */,
       5,    1,  730,    2, 0x06 /* Public */,
       6,    1,  733,    2, 0x06 /* Public */,
       7,    1,  736,    2, 0x06 /* Public */,
       8,    1,  739,    2, 0x06 /* Public */,
       9,    1,  742,    2, 0x06 /* Public */,
      10,    1,  745,    2, 0x06 /* Public */,
      11,    1,  748,    2, 0x06 /* Public */,
      12,    1,  751,    2, 0x06 /* Public */,
      13,    1,  754,    2, 0x06 /* Public */,
      15,    1,  757,    2, 0x06 /* Public */,
      17,    1,  760,    2, 0x06 /* Public */,
      18,    1,  763,    2, 0x06 /* Public */,
      19,    1,  766,    2, 0x06 /* Public */,
      20,    1,  769,    2, 0x06 /* Public */,
      21,    1,  772,    2, 0x06 /* Public */,
      22,    1,  775,    2, 0x06 /* Public */,
      23,    1,  778,    2, 0x06 /* Public */,
      24,    1,  781,    2, 0x06 /* Public */,
      25,    1,  784,    2, 0x06 /* Public */,
      26,    1,  787,    2, 0x06 /* Public */,
      28,    1,  790,    2, 0x06 /* Public */,
      29,    1,  793,    2, 0x06 /* Public */,
      30,    1,  796,    2, 0x06 /* Public */,
      31,    1,  799,    2, 0x06 /* Public */,
      32,    0,  802,    2, 0x06 /* Public */,
      33,    1,  803,    2, 0x06 /* Public */,
      36,    1,  806,    2, 0x06 /* Public */,
      37,    1,  809,    2, 0x06 /* Public */,
      38,    1,  812,    2, 0x06 /* Public */,
      39,    1,  815,    2, 0x06 /* Public */,
      40,    1,  818,    2, 0x06 /* Public */,
      41,    1,  821,    2, 0x06 /* Public */,
      42,    1,  824,    2, 0x06 /* Public */,
      43,    1,  827,    2, 0x06 /* Public */,
      44,    1,  830,    2, 0x06 /* Public */,
      46,    1,  833,    2, 0x06 /* Public */,
      48,    1,  836,    2, 0x06 /* Public */,
      50,    1,  839,    2, 0x06 /* Public */,
      51,    1,  842,    2, 0x06 /* Public */,
      52,    1,  845,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    0,  848,    2, 0x0a /* Public */,
      55,    0,  849,    2, 0x0a /* Public */,
      56,    0,  850,    2, 0x0a /* Public */,
      57,    0,  851,    2, 0x0a /* Public */,
      58,    1,  852,    2, 0x0a /* Public */,
      59,    1,  855,    2, 0x0a /* Public */,
      60,    0,  858,    2, 0x0a /* Public */,
      61,    1,  859,    2, 0x0a /* Public */,
      62,    1,  862,    2, 0x0a /* Public */,
      63,    0,  865,    2, 0x0a /* Public */,
      64,    1,  866,    2, 0x0a /* Public */,
      65,    1,  869,    2, 0x0a /* Public */,
      66,    0,  872,    2, 0x0a /* Public */,
      67,    1,  873,    2, 0x0a /* Public */,
      69,    1,  876,    2, 0x0a /* Public */,
      70,    0,  879,    2, 0x0a /* Public */,
      71,    1,  880,    2, 0x0a /* Public */,
      73,    0,  883,    2, 0x0a /* Public */,
      74,    1,  884,    2, 0x0a /* Public */,
      75,    0,  887,    2, 0x0a /* Public */,
      76,    1,  888,    2, 0x0a /* Public */,
      77,    1,  891,    2, 0x0a /* Public */,
      79,    0,  894,    2, 0x0a /* Public */,
      80,    1,  895,    2, 0x0a /* Public */,
      81,    0,  898,    2, 0x0a /* Public */,
      82,    1,  899,    2, 0x0a /* Public */,
      83,    0,  902,    2, 0x0a /* Public */,
      84,    1,  903,    2, 0x0a /* Public */,
      85,    0,  906,    2, 0x0a /* Public */,
      86,    1,  907,    2, 0x0a /* Public */,
      87,    0,  910,    2, 0x0a /* Public */,
      88,    1,  911,    2, 0x0a /* Public */,
      89,    0,  914,    2, 0x0a /* Public */,
      90,    1,  915,    2, 0x0a /* Public */,
      91,    0,  918,    2, 0x0a /* Public */,
      92,    1,  919,    2, 0x0a /* Public */,
      93,    1,  922,    2, 0x0a /* Public */,
      94,    0,  925,    2, 0x0a /* Public */,
      95,    0,  926,    2, 0x0a /* Public */,
      96,    1,  927,    2, 0x0a /* Public */,
      97,    1,  930,    2, 0x0a /* Public */,
      99,    0,  933,    2, 0x0a /* Public */,
     100,    1,  934,    2, 0x0a /* Public */,
     101,    1,  937,    2, 0x0a /* Public */,
     102,    1,  940,    2, 0x0a /* Public */,
     103,    1,  943,    2, 0x0a /* Public */,
     104,    1,  946,    2, 0x0a /* Public */,
     105,    1,  949,    2, 0x0a /* Public */,
     106,    1,  952,    2, 0x0a /* Public */,
     107,    1,  955,    2, 0x0a /* Public */,
     108,    1,  958,    2, 0x0a /* Public */,
      31,    1,  961,    2, 0x0a /* Public */,
     109,    0,  964,    2, 0x0a /* Public */,
     110,    1,  965,    2, 0x0a /* Public */,
     111,    0,  968,    2, 0x0a /* Public */,
     112,    1,  969,    2, 0x0a /* Public */,
     113,    0,  972,    2, 0x0a /* Public */,
     114,    1,  973,    2, 0x0a /* Public */,
     115,    0,  976,    2, 0x0a /* Public */,
     116,    1,  977,    2, 0x0a /* Public */,
     117,    0,  980,    2, 0x0a /* Public */,
     118,    1,  981,    2, 0x0a /* Public */,
     119,    0,  984,    2, 0x0a /* Public */,
     120,    1,  985,    2, 0x0a /* Public */,
     121,    1,  988,    2, 0x0a /* Public */,
     122,    1,  991,    2, 0x0a /* Public */,
     123,    1,  994,    2, 0x0a /* Public */,
     124,    1,  997,    2, 0x0a /* Public */,
     125,    1, 1000,    2, 0x0a /* Public */,
     126,    1, 1003,    2, 0x0a /* Public */,
     127,    1, 1006,    2, 0x0a /* Public */,
     128,    1, 1009,    2, 0x0a /* Public */,
     129,    1, 1012,    2, 0x0a /* Public */,
     130,    1, 1015,    2, 0x0a /* Public */,
     131,    4, 1018,    2, 0x0a /* Public */,
     136,    1, 1027,    2, 0x0a /* Public */,
     137,    1, 1030,    2, 0x0a /* Public */,
      41,    1, 1033,    2, 0x0a /* Public */,
     138,    0, 1036,    2, 0x0a /* Public */,
     139,    1, 1037,    2, 0x0a /* Public */,
     140,    1, 1040,    2, 0x0a /* Public */,
     141,    1, 1043,    2, 0x0a /* Public */,
     143,    0, 1046,    2, 0x0a /* Public */,
     144,    1, 1047,    2, 0x0a /* Public */,
     145,    1, 1050,    2, 0x0a /* Public */,
     146,    0, 1053,    2, 0x0a /* Public */,
     147,    1, 1054,    2, 0x0a /* Public */,
     148,    1, 1057,    2, 0x0a /* Public */,
     149,    0, 1060,    2, 0x0a /* Public */,
     150,    1, 1061,    2, 0x0a /* Public */,
     151,    1, 1064,    2, 0x0a /* Public */,
     152,    0, 1067,    2, 0x0a /* Public */,
     153,    1, 1068,    2, 0x0a /* Public */,
     154,    0, 1071,    2, 0x0a /* Public */,
     155,    1, 1072,    2, 0x0a /* Public */,
     156,    1, 1075,    2, 0x0a /* Public */,
     157,    1, 1078,    2, 0x0a /* Public */,
     158,    0, 1081,    2, 0x0a /* Public */,
     159,    1, 1082,    2, 0x0a /* Public */,
     160,    1, 1085,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   35,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Float,   49,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 53,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   78,
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
    QMetaType::Void, QMetaType::Float,   49,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Bool,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Bool,   72,
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
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  132,  133,  134,  135,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  142,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   49,
    0x80000000 | 53,
    QMetaType::Void, 0x80000000 | 53,    5,
    QMetaType::Void, 0x80000000 | 53,    5,

 // properties: name, type, flags
     161, QMetaType::Int, 0x00495103,
     162, QMetaType::Bool, 0x00495103,
     163, QMetaType::Int, 0x00495103,
     164, QMetaType::QString, 0x00495103,
     105, QMetaType::Bool, 0x00495003,
     102, QMetaType::Bool, 0x00495003,
     103, QMetaType::Bool, 0x00495003,
     106, QMetaType::Bool, 0x00495003,
     107, QMetaType::Bool, 0x00495003,
     165, QMetaType::Int, 0x00495003,
     166, QMetaType::Bool, 0x00495103,
     167, QMetaType::Bool, 0x00495103,
     168, 0x80000000 | 34, 0x0049510b,
     169, QMetaType::Bool, 0x00495103,
     170, QMetaType::Bool, 0x00495103,
     171, QMetaType::Bool, 0x00495103,
     172, 0x80000000 | 34, 0x0049510b,
     173, 0x80000000 | 34, 0x0049510b,
     174, QMetaType::QVariantMap, 0x00495103,
     175, QMetaType::Float, 0x00495103,
     176, QMetaType::Int, 0x00495103,
     177, QMetaType::Int, 0x00495003,
     178, QMetaType::Int, 0x00495003,
     104, QMetaType::Int, 0x00495003,
     179, QMetaType::Float, 0x00495103,
      14, QMetaType::Int, 0x00495003,
     180, QMetaType::Int, 0x00495003,
     181, QMetaType::Float, 0x00495103,
     182, 0x80000000 | 53, 0x0049510b,

 // properties: notify_signal_id
      12,
      13,
      14,
      15,
      18,
      16,
      17,
      19,
      20,
      21,
      24,
      23,
      27,
      28,
      29,
      30,
      31,
      32,
      34,
      38,
      35,
      36,
      37,
      22,
      39,
      10,
      11,
      40,
      41,

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
        case 10: _t->speedsettingValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->angularspeedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->trigArmStatusValueChanged(); break;
        case 27: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 28: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 32: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 33: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 35: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 42: _t->initRosThread(); break;
        case 43: _t->on_pushButton_pressed(); break;
        case 44: _t->on_pushButton_2_pressed(); break;
        case 45: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 52: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 61: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 76: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 82: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->trig_armStatus(); break;
        case 84: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 85: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 86: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 101: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 102: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 104: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 106: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 110: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 112: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 115: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 116: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 117: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 119: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 122: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 123: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 128: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 132: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 133: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 134: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 135: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 136: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 137: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 138: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 139: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 140: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 141: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 103:
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
        case 115:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 141:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedsettingValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angularspeedValueChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 41;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 17:
        case 16:
        case 12:
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
        case 7: *reinterpret_cast< bool*>(_v) = _t->getlacCWValue(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getlacCCWValue(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getlacValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 12: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 16: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 17: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 18: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
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
        case 4: _t->setcameraInitValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setslideCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setslideCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setlacCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setlacCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setlacValue(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 13: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 17: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 18: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 19: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
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
        if (_id < 142)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 142;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 142)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 142;
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
void Publisher::value8(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::speedsettingValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::angularspeedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
