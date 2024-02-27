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
    QByteArrayData data[185];
    char stringdata0[2596];
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
QT_MOC_LITERAL(54, 808, 6), // "capImg"
QT_MOC_LITERAL(55, 815, 13), // "initRosThread"
QT_MOC_LITERAL(56, 829, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(57, 851, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(58, 875, 12), // "getComStatus"
QT_MOC_LITERAL(59, 888, 12), // "setComStatus"
QT_MOC_LITERAL(60, 901, 12), // "commCallback"
QT_MOC_LITERAL(61, 914, 20), // "getangularspeedValue"
QT_MOC_LITERAL(62, 935, 20), // "setangularspeedValue"
QT_MOC_LITERAL(63, 956, 20), // "angularspeedCallback"
QT_MOC_LITERAL(64, 977, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(65, 998, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(66, 1019, 17), // "velstatusCallback"
QT_MOC_LITERAL(67, 1037, 14), // "getToggleValue"
QT_MOC_LITERAL(68, 1052, 14), // "setToggleValue"
QT_MOC_LITERAL(69, 1067, 4), // "flag"
QT_MOC_LITERAL(70, 1072, 14), // "toggleCallback"
QT_MOC_LITERAL(71, 1087, 18), // "getcameraInitValue"
QT_MOC_LITERAL(72, 1106, 18), // "setcameraInitValue"
QT_MOC_LITERAL(73, 1125, 1), // "k"
QT_MOC_LITERAL(74, 1127, 13), // "getToolToggle"
QT_MOC_LITERAL(75, 1141, 13), // "setToolToggle"
QT_MOC_LITERAL(76, 1155, 16), // "getArmToolStatus"
QT_MOC_LITERAL(77, 1172, 16), // "setArmToolStatus"
QT_MOC_LITERAL(78, 1189, 15), // "armToolCallback"
QT_MOC_LITERAL(79, 1205, 3), // "arg"
QT_MOC_LITERAL(80, 1209, 15), // "getslideCWValue"
QT_MOC_LITERAL(81, 1225, 15), // "setslideCWValue"
QT_MOC_LITERAL(82, 1241, 16), // "getslideCCWValue"
QT_MOC_LITERAL(83, 1258, 16), // "setslideCCWValue"
QT_MOC_LITERAL(84, 1275, 13), // "getlacCWValue"
QT_MOC_LITERAL(85, 1289, 13), // "setlacCWValue"
QT_MOC_LITERAL(86, 1303, 14), // "getlacCCWValue"
QT_MOC_LITERAL(87, 1318, 14), // "setlacCCWValue"
QT_MOC_LITERAL(88, 1333, 17), // "getresetTripValue"
QT_MOC_LITERAL(89, 1351, 17), // "setresetTripValue"
QT_MOC_LITERAL(90, 1369, 13), // "getWaterLevel"
QT_MOC_LITERAL(91, 1383, 13), // "setWaterLevel"
QT_MOC_LITERAL(92, 1397, 15), // "getStopArmValue"
QT_MOC_LITERAL(93, 1413, 15), // "setStopArmValue"
QT_MOC_LITERAL(94, 1429, 14), // "setRstArmValue"
QT_MOC_LITERAL(95, 1444, 14), // "getRstArmValue"
QT_MOC_LITERAL(96, 1459, 12), // "getArmStatus"
QT_MOC_LITERAL(97, 1472, 12), // "setArmStatus"
QT_MOC_LITERAL(98, 1485, 12), // "call_arminit"
QT_MOC_LITERAL(99, 1498, 3), // "val"
QT_MOC_LITERAL(100, 1502, 14), // "trig_armStatus"
QT_MOC_LITERAL(101, 1517, 7), // "rst_arm"
QT_MOC_LITERAL(102, 1525, 11), // "armCallback"
QT_MOC_LITERAL(103, 1537, 7), // "slideCW"
QT_MOC_LITERAL(104, 1545, 8), // "slideCCW"
QT_MOC_LITERAL(105, 1554, 9), // "resetTrip"
QT_MOC_LITERAL(106, 1564, 10), // "cameraInit"
QT_MOC_LITERAL(107, 1575, 5), // "lacCW"
QT_MOC_LITERAL(108, 1581, 6), // "lacCCW"
QT_MOC_LITERAL(109, 1588, 7), // "stopArm"
QT_MOC_LITERAL(110, 1596, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(111, 1616, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(112, 1636, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(113, 1656, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(114, 1676, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(115, 1695, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(116, 1714, 12), // "getTempValue"
QT_MOC_LITERAL(117, 1727, 12), // "setTempValue"
QT_MOC_LITERAL(118, 1740, 11), // "getErrValue"
QT_MOC_LITERAL(119, 1752, 11), // "setErrValue"
QT_MOC_LITERAL(120, 1764, 14), // "getCrawlStatus"
QT_MOC_LITERAL(121, 1779, 14), // "setCrawlStatus"
QT_MOC_LITERAL(122, 1794, 11), // "rst_crawler"
QT_MOC_LITERAL(123, 1806, 16), // "call_crawlerinit"
QT_MOC_LITERAL(124, 1823, 12), // "call_slidecw"
QT_MOC_LITERAL(125, 1836, 13), // "call_slideccw"
QT_MOC_LITERAL(126, 1850, 10), // "call_laccw"
QT_MOC_LITERAL(127, 1861, 11), // "call_lacccw"
QT_MOC_LITERAL(128, 1873, 14), // "call_resetTrip"
QT_MOC_LITERAL(129, 1888, 15), // "call_cameraInit"
QT_MOC_LITERAL(130, 1904, 13), // "errorCallback"
QT_MOC_LITERAL(131, 1918, 12), // "tempCallback"
QT_MOC_LITERAL(132, 1931, 15), // "crawlerCallback"
QT_MOC_LITERAL(133, 1947, 9), // "frontLeft"
QT_MOC_LITERAL(134, 1957, 10), // "frontRight"
QT_MOC_LITERAL(135, 1968, 10), // "backrRight"
QT_MOC_LITERAL(136, 1979, 8), // "backLeft"
QT_MOC_LITERAL(137, 1988, 11), // "initCrawler"
QT_MOC_LITERAL(138, 2000, 11), // "stopCrawler"
QT_MOC_LITERAL(139, 2012, 15), // "getBatteryValue"
QT_MOC_LITERAL(140, 2028, 15), // "setBatteryValue"
QT_MOC_LITERAL(141, 2044, 12), // "battCallback"
QT_MOC_LITERAL(142, 2057, 11), // "velCallback"
QT_MOC_LITERAL(143, 2069, 18), // "current_vel_linear"
QT_MOC_LITERAL(144, 2088, 16), // "getVelocityValue"
QT_MOC_LITERAL(145, 2105, 16), // "setVelocityValue"
QT_MOC_LITERAL(146, 2122, 11), // "lacCallback"
QT_MOC_LITERAL(147, 2134, 11), // "getlacValue"
QT_MOC_LITERAL(148, 2146, 11), // "setlacValue"
QT_MOC_LITERAL(149, 2158, 12), // "odomCallback"
QT_MOC_LITERAL(150, 2171, 12), // "getodomValue"
QT_MOC_LITERAL(151, 2184, 12), // "setodomValue"
QT_MOC_LITERAL(152, 2197, 12), // "tripCallback"
QT_MOC_LITERAL(153, 2210, 12), // "gettripValue"
QT_MOC_LITERAL(154, 2223, 12), // "settripValue"
QT_MOC_LITERAL(155, 2236, 15), // "getCurrentValue"
QT_MOC_LITERAL(156, 2252, 15), // "setCurrentValue"
QT_MOC_LITERAL(157, 2268, 15), // "currentCallback"
QT_MOC_LITERAL(158, 2284, 13), // "waterCallback"
QT_MOC_LITERAL(159, 2298, 6), // "getUid"
QT_MOC_LITERAL(160, 2305, 6), // "setUid"
QT_MOC_LITERAL(161, 2312, 11), // "uidCallback"
QT_MOC_LITERAL(162, 2324, 11), // "call_capImg"
QT_MOC_LITERAL(163, 2336, 9), // "comStatus"
QT_MOC_LITERAL(164, 2346, 11), // "toggleValue"
QT_MOC_LITERAL(165, 2358, 13), // "armToolStatus"
QT_MOC_LITERAL(166, 2372, 10), // "toolToggle"
QT_MOC_LITERAL(167, 2383, 8), // "lacValue"
QT_MOC_LITERAL(168, 2392, 12), // "stopArmValue"
QT_MOC_LITERAL(169, 2405, 11), // "rstArmValue"
QT_MOC_LITERAL(170, 2417, 9), // "armStatus"
QT_MOC_LITERAL(171, 2427, 16), // "initCrawlerValue"
QT_MOC_LITERAL(172, 2444, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(173, 2461, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(174, 2477, 8), // "errValue"
QT_MOC_LITERAL(175, 2486, 9), // "tempValue"
QT_MOC_LITERAL(176, 2496, 11), // "crawlStatus"
QT_MOC_LITERAL(177, 2508, 10), // "waterLevel"
QT_MOC_LITERAL(178, 2519, 13), // "velocityValue"
QT_MOC_LITERAL(179, 2533, 9), // "odomValue"
QT_MOC_LITERAL(180, 2543, 9), // "tripValue"
QT_MOC_LITERAL(181, 2553, 12), // "batteryValue"
QT_MOC_LITERAL(182, 2566, 12), // "anglesetting"
QT_MOC_LITERAL(183, 2579, 12), // "currentValue"
QT_MOC_LITERAL(184, 2592, 3) // "uid"

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
    "uidChanged\0QVector<QString>\0capImg\0"
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
    "setUid\0uidCallback\0call_capImg\0comStatus\0"
    "toggleValue\0armToolStatus\0toolToggle\0"
    "lacValue\0stopArmValue\0rstArmValue\0"
    "armStatus\0initCrawlerValue\0stopCrawlerValue\0"
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
     144,   14, // methods
      29, 1104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      43,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  734,    2, 0x06 /* Public */,
       4,    1,  737,    2, 0x06 /* Public */,
       5,    1,  740,    2, 0x06 /* Public */,
       6,    1,  743,    2, 0x06 /* Public */,
       7,    1,  746,    2, 0x06 /* Public */,
       8,    1,  749,    2, 0x06 /* Public */,
       9,    1,  752,    2, 0x06 /* Public */,
      10,    1,  755,    2, 0x06 /* Public */,
      11,    1,  758,    2, 0x06 /* Public */,
      12,    1,  761,    2, 0x06 /* Public */,
      13,    1,  764,    2, 0x06 /* Public */,
      15,    1,  767,    2, 0x06 /* Public */,
      17,    1,  770,    2, 0x06 /* Public */,
      18,    1,  773,    2, 0x06 /* Public */,
      19,    1,  776,    2, 0x06 /* Public */,
      20,    1,  779,    2, 0x06 /* Public */,
      21,    1,  782,    2, 0x06 /* Public */,
      22,    1,  785,    2, 0x06 /* Public */,
      23,    1,  788,    2, 0x06 /* Public */,
      24,    1,  791,    2, 0x06 /* Public */,
      25,    1,  794,    2, 0x06 /* Public */,
      26,    1,  797,    2, 0x06 /* Public */,
      28,    1,  800,    2, 0x06 /* Public */,
      29,    1,  803,    2, 0x06 /* Public */,
      30,    1,  806,    2, 0x06 /* Public */,
      31,    1,  809,    2, 0x06 /* Public */,
      32,    0,  812,    2, 0x06 /* Public */,
      33,    1,  813,    2, 0x06 /* Public */,
      36,    1,  816,    2, 0x06 /* Public */,
      37,    1,  819,    2, 0x06 /* Public */,
      38,    1,  822,    2, 0x06 /* Public */,
      39,    1,  825,    2, 0x06 /* Public */,
      40,    1,  828,    2, 0x06 /* Public */,
      41,    1,  831,    2, 0x06 /* Public */,
      42,    1,  834,    2, 0x06 /* Public */,
      43,    1,  837,    2, 0x06 /* Public */,
      44,    1,  840,    2, 0x06 /* Public */,
      46,    1,  843,    2, 0x06 /* Public */,
      48,    1,  846,    2, 0x06 /* Public */,
      50,    1,  849,    2, 0x06 /* Public */,
      51,    1,  852,    2, 0x06 /* Public */,
      52,    1,  855,    2, 0x06 /* Public */,
      54,    1,  858,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    0,  861,    2, 0x0a /* Public */,
      56,    0,  862,    2, 0x0a /* Public */,
      57,    0,  863,    2, 0x0a /* Public */,
      58,    0,  864,    2, 0x0a /* Public */,
      59,    1,  865,    2, 0x0a /* Public */,
      60,    1,  868,    2, 0x0a /* Public */,
      61,    0,  871,    2, 0x0a /* Public */,
      62,    1,  872,    2, 0x0a /* Public */,
      63,    1,  875,    2, 0x0a /* Public */,
      64,    0,  878,    2, 0x0a /* Public */,
      65,    1,  879,    2, 0x0a /* Public */,
      66,    1,  882,    2, 0x0a /* Public */,
      67,    0,  885,    2, 0x0a /* Public */,
      68,    1,  886,    2, 0x0a /* Public */,
      70,    1,  889,    2, 0x0a /* Public */,
      71,    0,  892,    2, 0x0a /* Public */,
      72,    1,  893,    2, 0x0a /* Public */,
      74,    0,  896,    2, 0x0a /* Public */,
      75,    1,  897,    2, 0x0a /* Public */,
      76,    0,  900,    2, 0x0a /* Public */,
      77,    1,  901,    2, 0x0a /* Public */,
      78,    1,  904,    2, 0x0a /* Public */,
      80,    0,  907,    2, 0x0a /* Public */,
      81,    1,  908,    2, 0x0a /* Public */,
      82,    0,  911,    2, 0x0a /* Public */,
      83,    1,  912,    2, 0x0a /* Public */,
      84,    0,  915,    2, 0x0a /* Public */,
      85,    1,  916,    2, 0x0a /* Public */,
      86,    0,  919,    2, 0x0a /* Public */,
      87,    1,  920,    2, 0x0a /* Public */,
      88,    0,  923,    2, 0x0a /* Public */,
      89,    1,  924,    2, 0x0a /* Public */,
      90,    0,  927,    2, 0x0a /* Public */,
      91,    1,  928,    2, 0x0a /* Public */,
      92,    0,  931,    2, 0x0a /* Public */,
      93,    1,  932,    2, 0x0a /* Public */,
      94,    1,  935,    2, 0x0a /* Public */,
      95,    0,  938,    2, 0x0a /* Public */,
      96,    0,  939,    2, 0x0a /* Public */,
      97,    1,  940,    2, 0x0a /* Public */,
      98,    1,  943,    2, 0x0a /* Public */,
     100,    0,  946,    2, 0x0a /* Public */,
     101,    1,  947,    2, 0x0a /* Public */,
     102,    1,  950,    2, 0x0a /* Public */,
     103,    1,  953,    2, 0x0a /* Public */,
     104,    1,  956,    2, 0x0a /* Public */,
     105,    1,  959,    2, 0x0a /* Public */,
     106,    1,  962,    2, 0x0a /* Public */,
     107,    1,  965,    2, 0x0a /* Public */,
     108,    1,  968,    2, 0x0a /* Public */,
     109,    1,  971,    2, 0x0a /* Public */,
      31,    1,  974,    2, 0x0a /* Public */,
     110,    0,  977,    2, 0x0a /* Public */,
     111,    1,  978,    2, 0x0a /* Public */,
     112,    0,  981,    2, 0x0a /* Public */,
     113,    1,  982,    2, 0x0a /* Public */,
     114,    0,  985,    2, 0x0a /* Public */,
     115,    1,  986,    2, 0x0a /* Public */,
     116,    0,  989,    2, 0x0a /* Public */,
     117,    1,  990,    2, 0x0a /* Public */,
     118,    0,  993,    2, 0x0a /* Public */,
     119,    1,  994,    2, 0x0a /* Public */,
     120,    0,  997,    2, 0x0a /* Public */,
     121,    1,  998,    2, 0x0a /* Public */,
     122,    1, 1001,    2, 0x0a /* Public */,
     123,    1, 1004,    2, 0x0a /* Public */,
     124,    1, 1007,    2, 0x0a /* Public */,
     125,    1, 1010,    2, 0x0a /* Public */,
     126,    1, 1013,    2, 0x0a /* Public */,
     127,    1, 1016,    2, 0x0a /* Public */,
     128,    1, 1019,    2, 0x0a /* Public */,
     129,    1, 1022,    2, 0x0a /* Public */,
     130,    1, 1025,    2, 0x0a /* Public */,
     131,    1, 1028,    2, 0x0a /* Public */,
     132,    4, 1031,    2, 0x0a /* Public */,
     137,    1, 1040,    2, 0x0a /* Public */,
     138,    1, 1043,    2, 0x0a /* Public */,
      41,    1, 1046,    2, 0x0a /* Public */,
     139,    0, 1049,    2, 0x0a /* Public */,
     140,    1, 1050,    2, 0x0a /* Public */,
     141,    1, 1053,    2, 0x0a /* Public */,
     142,    1, 1056,    2, 0x0a /* Public */,
     144,    0, 1059,    2, 0x0a /* Public */,
     145,    1, 1060,    2, 0x0a /* Public */,
     146,    1, 1063,    2, 0x0a /* Public */,
     147,    0, 1066,    2, 0x0a /* Public */,
     148,    1, 1067,    2, 0x0a /* Public */,
     149,    1, 1070,    2, 0x0a /* Public */,
     150,    0, 1073,    2, 0x0a /* Public */,
     151,    1, 1074,    2, 0x0a /* Public */,
     152,    1, 1077,    2, 0x0a /* Public */,
     153,    0, 1080,    2, 0x0a /* Public */,
     154,    1, 1081,    2, 0x0a /* Public */,
     155,    0, 1084,    2, 0x0a /* Public */,
     156,    1, 1085,    2, 0x0a /* Public */,
     157,    1, 1088,    2, 0x0a /* Public */,
     158,    1, 1091,    2, 0x0a /* Public */,
     159,    0, 1094,    2, 0x0a /* Public */,
     160,    1, 1095,    2, 0x0a /* Public */,
     161,    1, 1098,    2, 0x0a /* Public */,
     162,    1, 1101,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    5,

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
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   49,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   73,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, 0x80000000 | 34,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  133,  134,  135,  136,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  143,
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
    QMetaType::Void, QMetaType::Int,   99,

 // properties: name, type, flags
     163, QMetaType::Int, 0x00495103,
     164, QMetaType::Bool, 0x00495103,
     165, QMetaType::Int, 0x00495103,
     166, QMetaType::QString, 0x00495103,
     106, QMetaType::Bool, 0x00495003,
     103, QMetaType::Bool, 0x00495003,
     104, QMetaType::Bool, 0x00495003,
     107, QMetaType::Bool, 0x00495003,
     108, QMetaType::Bool, 0x00495003,
     167, QMetaType::Int, 0x00495003,
     168, QMetaType::Bool, 0x00495103,
     169, QMetaType::Bool, 0x00495103,
     170, 0x80000000 | 34, 0x0049510b,
     171, QMetaType::Bool, 0x00495103,
     172, QMetaType::Bool, 0x00495103,
     173, QMetaType::Bool, 0x00495103,
     174, 0x80000000 | 34, 0x0049510b,
     175, 0x80000000 | 34, 0x0049510b,
     176, QMetaType::QVariantMap, 0x00495103,
     177, QMetaType::Float, 0x00495103,
     178, QMetaType::Int, 0x00495103,
     179, QMetaType::Int, 0x00495003,
     180, QMetaType::Int, 0x00495003,
     105, QMetaType::Int, 0x00495003,
     181, QMetaType::Float, 0x00495103,
      14, QMetaType::Int, 0x00495003,
     182, QMetaType::Int, 0x00495003,
     183, QMetaType::Float, 0x00495103,
     184, 0x80000000 | 53, 0x0049510b,

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
        case 42: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->initRosThread(); break;
        case 44: _t->on_pushButton_pressed(); break;
        case 45: _t->on_pushButton_2_pressed(); break;
        case 46: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 77: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 83: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->trig_armStatus(); break;
        case 85: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 87: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 100: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 102: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 103: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 104: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 105: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 106: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 107: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 110: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 112: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 115: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 116: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 117: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 118: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 119: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 123: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 124: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 126: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 132: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 133: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 135: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 136: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 137: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 138: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 139: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 140: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 141: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 142: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 143: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 102:
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
        case 115:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 141:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 142:
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
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 42;
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
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
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

// SIGNAL 42
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
