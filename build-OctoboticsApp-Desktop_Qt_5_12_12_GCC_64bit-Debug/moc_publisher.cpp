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
    QByteArrayData data[174];
    char stringdata0[2384];
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
QT_MOC_LITERAL(13, 87, 16), // "comStatusChanged"
QT_MOC_LITERAL(14, 104, 18), // "toggleValueChanged"
QT_MOC_LITERAL(15, 123, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(16, 144, 17), // "toolToggleChanged"
QT_MOC_LITERAL(17, 162, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(18, 182, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(19, 203, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(20, 226, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(21, 244, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(22, 263, 15), // "lacValueChanged"
QT_MOC_LITERAL(23, 279, 9), // "lac_value"
QT_MOC_LITERAL(24, 289, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(25, 311, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(26, 330, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(27, 350, 6), // "rstArm"
QT_MOC_LITERAL(28, 357, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(29, 383, 16), // "armStatusChanged"
QT_MOC_LITERAL(30, 400, 12), // "QVector<int>"
QT_MOC_LITERAL(31, 413, 6), // "status"
QT_MOC_LITERAL(32, 420, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(33, 444, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(34, 468, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(35, 491, 15), // "errValueChanged"
QT_MOC_LITERAL(36, 507, 16), // "tempValueChanged"
QT_MOC_LITERAL(37, 524, 10), // "rstCrawler"
QT_MOC_LITERAL(38, 535, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(39, 554, 20), // "velocityValueChanged"
QT_MOC_LITERAL(40, 575, 16), // "odomValueChanged"
QT_MOC_LITERAL(41, 592, 12), // "current_odom"
QT_MOC_LITERAL(42, 605, 16), // "tripValueChanged"
QT_MOC_LITERAL(43, 622, 12), // "current_trip"
QT_MOC_LITERAL(44, 635, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(45, 658, 5), // "level"
QT_MOC_LITERAL(46, 664, 19), // "batteryValueChanged"
QT_MOC_LITERAL(47, 684, 19), // "currentValueChanged"
QT_MOC_LITERAL(48, 704, 10), // "uidChanged"
QT_MOC_LITERAL(49, 715, 16), // "QVector<QString>"
QT_MOC_LITERAL(50, 732, 6), // "capImg"
QT_MOC_LITERAL(51, 739, 13), // "initRosThread"
QT_MOC_LITERAL(52, 753, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(53, 775, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(54, 799, 12), // "getComStatus"
QT_MOC_LITERAL(55, 812, 12), // "setComStatus"
QT_MOC_LITERAL(56, 825, 12), // "commCallback"
QT_MOC_LITERAL(57, 838, 14), // "getToggleValue"
QT_MOC_LITERAL(58, 853, 14), // "setToggleValue"
QT_MOC_LITERAL(59, 868, 4), // "flag"
QT_MOC_LITERAL(60, 873, 14), // "toggleCallback"
QT_MOC_LITERAL(61, 888, 18), // "getcameraInitValue"
QT_MOC_LITERAL(62, 907, 18), // "setcameraInitValue"
QT_MOC_LITERAL(63, 926, 1), // "k"
QT_MOC_LITERAL(64, 928, 13), // "getToolToggle"
QT_MOC_LITERAL(65, 942, 13), // "setToolToggle"
QT_MOC_LITERAL(66, 956, 16), // "getArmToolStatus"
QT_MOC_LITERAL(67, 973, 16), // "setArmToolStatus"
QT_MOC_LITERAL(68, 990, 15), // "armToolCallback"
QT_MOC_LITERAL(69, 1006, 3), // "arg"
QT_MOC_LITERAL(70, 1010, 15), // "getslideCWValue"
QT_MOC_LITERAL(71, 1026, 15), // "setslideCWValue"
QT_MOC_LITERAL(72, 1042, 16), // "getslideCCWValue"
QT_MOC_LITERAL(73, 1059, 16), // "setslideCCWValue"
QT_MOC_LITERAL(74, 1076, 13), // "getlacCWValue"
QT_MOC_LITERAL(75, 1090, 13), // "setlacCWValue"
QT_MOC_LITERAL(76, 1104, 14), // "getlacCCWValue"
QT_MOC_LITERAL(77, 1119, 14), // "setlacCCWValue"
QT_MOC_LITERAL(78, 1134, 17), // "getresetTripValue"
QT_MOC_LITERAL(79, 1152, 17), // "setresetTripValue"
QT_MOC_LITERAL(80, 1170, 13), // "getWaterLevel"
QT_MOC_LITERAL(81, 1184, 13), // "setWaterLevel"
QT_MOC_LITERAL(82, 1198, 15), // "getStopArmValue"
QT_MOC_LITERAL(83, 1214, 15), // "setStopArmValue"
QT_MOC_LITERAL(84, 1230, 14), // "setRstArmValue"
QT_MOC_LITERAL(85, 1245, 14), // "getRstArmValue"
QT_MOC_LITERAL(86, 1260, 12), // "getArmStatus"
QT_MOC_LITERAL(87, 1273, 12), // "setArmStatus"
QT_MOC_LITERAL(88, 1286, 12), // "call_arminit"
QT_MOC_LITERAL(89, 1299, 3), // "val"
QT_MOC_LITERAL(90, 1303, 14), // "trig_armStatus"
QT_MOC_LITERAL(91, 1318, 7), // "rst_arm"
QT_MOC_LITERAL(92, 1326, 11), // "armCallback"
QT_MOC_LITERAL(93, 1338, 7), // "slideCW"
QT_MOC_LITERAL(94, 1346, 8), // "slideCCW"
QT_MOC_LITERAL(95, 1355, 9), // "resetTrip"
QT_MOC_LITERAL(96, 1365, 10), // "cameraInit"
QT_MOC_LITERAL(97, 1376, 5), // "lacCW"
QT_MOC_LITERAL(98, 1382, 6), // "lacCCW"
QT_MOC_LITERAL(99, 1389, 7), // "stopArm"
QT_MOC_LITERAL(100, 1397, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(101, 1417, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(102, 1437, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(103, 1457, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(104, 1477, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(105, 1496, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(106, 1515, 12), // "getTempValue"
QT_MOC_LITERAL(107, 1528, 12), // "setTempValue"
QT_MOC_LITERAL(108, 1541, 11), // "getErrValue"
QT_MOC_LITERAL(109, 1553, 11), // "setErrValue"
QT_MOC_LITERAL(110, 1565, 14), // "getCrawlStatus"
QT_MOC_LITERAL(111, 1580, 14), // "setCrawlStatus"
QT_MOC_LITERAL(112, 1595, 11), // "rst_crawler"
QT_MOC_LITERAL(113, 1607, 16), // "call_crawlerinit"
QT_MOC_LITERAL(114, 1624, 12), // "call_slidecw"
QT_MOC_LITERAL(115, 1637, 13), // "call_slideccw"
QT_MOC_LITERAL(116, 1651, 10), // "call_laccw"
QT_MOC_LITERAL(117, 1662, 11), // "call_lacccw"
QT_MOC_LITERAL(118, 1674, 14), // "call_resetTrip"
QT_MOC_LITERAL(119, 1689, 15), // "call_cameraInit"
QT_MOC_LITERAL(120, 1705, 13), // "errorCallback"
QT_MOC_LITERAL(121, 1719, 12), // "tempCallback"
QT_MOC_LITERAL(122, 1732, 15), // "crawlerCallback"
QT_MOC_LITERAL(123, 1748, 9), // "frontLeft"
QT_MOC_LITERAL(124, 1758, 10), // "frontRight"
QT_MOC_LITERAL(125, 1769, 10), // "backrRight"
QT_MOC_LITERAL(126, 1780, 8), // "backLeft"
QT_MOC_LITERAL(127, 1789, 11), // "initCrawler"
QT_MOC_LITERAL(128, 1801, 11), // "stopCrawler"
QT_MOC_LITERAL(129, 1813, 15), // "getBatteryValue"
QT_MOC_LITERAL(130, 1829, 15), // "setBatteryValue"
QT_MOC_LITERAL(131, 1845, 12), // "battCallback"
QT_MOC_LITERAL(132, 1858, 11), // "velCallback"
QT_MOC_LITERAL(133, 1870, 18), // "current_vel_linear"
QT_MOC_LITERAL(134, 1889, 16), // "getVelocityValue"
QT_MOC_LITERAL(135, 1906, 16), // "setVelocityValue"
QT_MOC_LITERAL(136, 1923, 11), // "lacCallback"
QT_MOC_LITERAL(137, 1935, 11), // "getlacValue"
QT_MOC_LITERAL(138, 1947, 11), // "setlacValue"
QT_MOC_LITERAL(139, 1959, 12), // "odomCallback"
QT_MOC_LITERAL(140, 1972, 12), // "getodomValue"
QT_MOC_LITERAL(141, 1985, 12), // "setodomValue"
QT_MOC_LITERAL(142, 1998, 12), // "tripCallback"
QT_MOC_LITERAL(143, 2011, 12), // "gettripValue"
QT_MOC_LITERAL(144, 2024, 12), // "settripValue"
QT_MOC_LITERAL(145, 2037, 15), // "getCurrentValue"
QT_MOC_LITERAL(146, 2053, 15), // "setCurrentValue"
QT_MOC_LITERAL(147, 2069, 15), // "currentCallback"
QT_MOC_LITERAL(148, 2085, 13), // "waterCallback"
QT_MOC_LITERAL(149, 2099, 6), // "getUid"
QT_MOC_LITERAL(150, 2106, 6), // "setUid"
QT_MOC_LITERAL(151, 2113, 11), // "uidCallback"
QT_MOC_LITERAL(152, 2125, 11), // "call_capImg"
QT_MOC_LITERAL(153, 2137, 9), // "comStatus"
QT_MOC_LITERAL(154, 2147, 11), // "toggleValue"
QT_MOC_LITERAL(155, 2159, 13), // "armToolStatus"
QT_MOC_LITERAL(156, 2173, 10), // "toolToggle"
QT_MOC_LITERAL(157, 2184, 8), // "lacValue"
QT_MOC_LITERAL(158, 2193, 12), // "stopArmValue"
QT_MOC_LITERAL(159, 2206, 11), // "rstArmValue"
QT_MOC_LITERAL(160, 2218, 9), // "armStatus"
QT_MOC_LITERAL(161, 2228, 16), // "initCrawlerValue"
QT_MOC_LITERAL(162, 2245, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(163, 2262, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(164, 2278, 8), // "errValue"
QT_MOC_LITERAL(165, 2287, 9), // "tempValue"
QT_MOC_LITERAL(166, 2297, 11), // "crawlStatus"
QT_MOC_LITERAL(167, 2309, 10), // "waterLevel"
QT_MOC_LITERAL(168, 2320, 13), // "velocityValue"
QT_MOC_LITERAL(169, 2334, 9), // "odomValue"
QT_MOC_LITERAL(170, 2344, 9), // "tripValue"
QT_MOC_LITERAL(171, 2354, 12), // "batteryValue"
QT_MOC_LITERAL(172, 2367, 12), // "currentValue"
QT_MOC_LITERAL(173, 2380, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0comStatusChanged\0"
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
    "setComStatus\0commCallback\0getToggleValue\0"
    "setToggleValue\0flag\0toggleCallback\0"
    "getcameraInitValue\0setcameraInitValue\0"
    "k\0getToolToggle\0setToolToggle\0"
    "getArmToolStatus\0setArmToolStatus\0"
    "armToolCallback\0arg\0getslideCWValue\0"
    "setslideCWValue\0getslideCCWValue\0"
    "setslideCCWValue\0getlacCWValue\0"
    "setlacCWValue\0getlacCCWValue\0"
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
    "currentValue\0uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     136,   14, // methods
      27, 1044, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  694,    2, 0x06 /* Public */,
       4,    1,  697,    2, 0x06 /* Public */,
       5,    1,  700,    2, 0x06 /* Public */,
       6,    1,  703,    2, 0x06 /* Public */,
       7,    1,  706,    2, 0x06 /* Public */,
       8,    1,  709,    2, 0x06 /* Public */,
       9,    1,  712,    2, 0x06 /* Public */,
      10,    1,  715,    2, 0x06 /* Public */,
      11,    1,  718,    2, 0x06 /* Public */,
      12,    1,  721,    2, 0x06 /* Public */,
      13,    1,  724,    2, 0x06 /* Public */,
      14,    1,  727,    2, 0x06 /* Public */,
      15,    1,  730,    2, 0x06 /* Public */,
      16,    1,  733,    2, 0x06 /* Public */,
      17,    1,  736,    2, 0x06 /* Public */,
      18,    1,  739,    2, 0x06 /* Public */,
      19,    1,  742,    2, 0x06 /* Public */,
      20,    1,  745,    2, 0x06 /* Public */,
      21,    1,  748,    2, 0x06 /* Public */,
      22,    1,  751,    2, 0x06 /* Public */,
      24,    1,  754,    2, 0x06 /* Public */,
      25,    1,  757,    2, 0x06 /* Public */,
      26,    1,  760,    2, 0x06 /* Public */,
      27,    1,  763,    2, 0x06 /* Public */,
      28,    0,  766,    2, 0x06 /* Public */,
      29,    1,  767,    2, 0x06 /* Public */,
      32,    1,  770,    2, 0x06 /* Public */,
      33,    1,  773,    2, 0x06 /* Public */,
      34,    1,  776,    2, 0x06 /* Public */,
      35,    1,  779,    2, 0x06 /* Public */,
      36,    1,  782,    2, 0x06 /* Public */,
      37,    1,  785,    2, 0x06 /* Public */,
      38,    1,  788,    2, 0x06 /* Public */,
      39,    1,  791,    2, 0x06 /* Public */,
      40,    1,  794,    2, 0x06 /* Public */,
      42,    1,  797,    2, 0x06 /* Public */,
      44,    1,  800,    2, 0x06 /* Public */,
      46,    1,  803,    2, 0x06 /* Public */,
      47,    1,  806,    2, 0x06 /* Public */,
      48,    1,  809,    2, 0x06 /* Public */,
      50,    1,  812,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  815,    2, 0x0a /* Public */,
      52,    0,  816,    2, 0x0a /* Public */,
      53,    0,  817,    2, 0x0a /* Public */,
      54,    0,  818,    2, 0x0a /* Public */,
      55,    1,  819,    2, 0x0a /* Public */,
      56,    1,  822,    2, 0x0a /* Public */,
      57,    0,  825,    2, 0x0a /* Public */,
      58,    1,  826,    2, 0x0a /* Public */,
      60,    1,  829,    2, 0x0a /* Public */,
      61,    0,  832,    2, 0x0a /* Public */,
      62,    1,  833,    2, 0x0a /* Public */,
      64,    0,  836,    2, 0x0a /* Public */,
      65,    1,  837,    2, 0x0a /* Public */,
      66,    0,  840,    2, 0x0a /* Public */,
      67,    1,  841,    2, 0x0a /* Public */,
      68,    1,  844,    2, 0x0a /* Public */,
      70,    0,  847,    2, 0x0a /* Public */,
      71,    1,  848,    2, 0x0a /* Public */,
      72,    0,  851,    2, 0x0a /* Public */,
      73,    1,  852,    2, 0x0a /* Public */,
      74,    0,  855,    2, 0x0a /* Public */,
      75,    1,  856,    2, 0x0a /* Public */,
      76,    0,  859,    2, 0x0a /* Public */,
      77,    1,  860,    2, 0x0a /* Public */,
      78,    0,  863,    2, 0x0a /* Public */,
      79,    1,  864,    2, 0x0a /* Public */,
      80,    0,  867,    2, 0x0a /* Public */,
      81,    1,  868,    2, 0x0a /* Public */,
      82,    0,  871,    2, 0x0a /* Public */,
      83,    1,  872,    2, 0x0a /* Public */,
      84,    1,  875,    2, 0x0a /* Public */,
      85,    0,  878,    2, 0x0a /* Public */,
      86,    0,  879,    2, 0x0a /* Public */,
      87,    1,  880,    2, 0x0a /* Public */,
      88,    1,  883,    2, 0x0a /* Public */,
      90,    0,  886,    2, 0x0a /* Public */,
      91,    1,  887,    2, 0x0a /* Public */,
      92,    1,  890,    2, 0x0a /* Public */,
      93,    1,  893,    2, 0x0a /* Public */,
      94,    1,  896,    2, 0x0a /* Public */,
      95,    1,  899,    2, 0x0a /* Public */,
      96,    1,  902,    2, 0x0a /* Public */,
      97,    1,  905,    2, 0x0a /* Public */,
      98,    1,  908,    2, 0x0a /* Public */,
      99,    1,  911,    2, 0x0a /* Public */,
      27,    1,  914,    2, 0x0a /* Public */,
     100,    0,  917,    2, 0x0a /* Public */,
     101,    1,  918,    2, 0x0a /* Public */,
     102,    0,  921,    2, 0x0a /* Public */,
     103,    1,  922,    2, 0x0a /* Public */,
     104,    0,  925,    2, 0x0a /* Public */,
     105,    1,  926,    2, 0x0a /* Public */,
     106,    0,  929,    2, 0x0a /* Public */,
     107,    1,  930,    2, 0x0a /* Public */,
     108,    0,  933,    2, 0x0a /* Public */,
     109,    1,  934,    2, 0x0a /* Public */,
     110,    0,  937,    2, 0x0a /* Public */,
     111,    1,  938,    2, 0x0a /* Public */,
     112,    1,  941,    2, 0x0a /* Public */,
     113,    1,  944,    2, 0x0a /* Public */,
     114,    1,  947,    2, 0x0a /* Public */,
     115,    1,  950,    2, 0x0a /* Public */,
     116,    1,  953,    2, 0x0a /* Public */,
     117,    1,  956,    2, 0x0a /* Public */,
     118,    1,  959,    2, 0x0a /* Public */,
     119,    1,  962,    2, 0x0a /* Public */,
     120,    1,  965,    2, 0x0a /* Public */,
     121,    1,  968,    2, 0x0a /* Public */,
     122,    4,  971,    2, 0x0a /* Public */,
     127,    1,  980,    2, 0x0a /* Public */,
     128,    1,  983,    2, 0x0a /* Public */,
      37,    1,  986,    2, 0x0a /* Public */,
     129,    0,  989,    2, 0x0a /* Public */,
     130,    1,  990,    2, 0x0a /* Public */,
     131,    1,  993,    2, 0x0a /* Public */,
     132,    1,  996,    2, 0x0a /* Public */,
     134,    0,  999,    2, 0x0a /* Public */,
     135,    1, 1000,    2, 0x0a /* Public */,
     136,    1, 1003,    2, 0x0a /* Public */,
     137,    0, 1006,    2, 0x0a /* Public */,
     138,    1, 1007,    2, 0x0a /* Public */,
     139,    1, 1010,    2, 0x0a /* Public */,
     140,    0, 1013,    2, 0x0a /* Public */,
     141,    1, 1014,    2, 0x0a /* Public */,
     142,    1, 1017,    2, 0x0a /* Public */,
     143,    0, 1020,    2, 0x0a /* Public */,
     144,    1, 1021,    2, 0x0a /* Public */,
     145,    0, 1024,    2, 0x0a /* Public */,
     146,    1, 1025,    2, 0x0a /* Public */,
     147,    1, 1028,    2, 0x0a /* Public */,
     148,    1, 1031,    2, 0x0a /* Public */,
     149,    0, 1034,    2, 0x0a /* Public */,
     150,    1, 1035,    2, 0x0a /* Public */,
     151,    1, 1038,    2, 0x0a /* Public */,
     152,    1, 1041,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   31,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Float,   45,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
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
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   45,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    0x80000000 | 30,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    0x80000000 | 30,
    QMetaType::Void, 0x80000000 | 30,    5,
    0x80000000 | 30,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::Void, 0x80000000 | 30,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  123,  124,  125,  126,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  133,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   45,
    0x80000000 | 49,
    QMetaType::Void, 0x80000000 | 49,    5,
    QMetaType::Void, 0x80000000 | 49,    5,
    QMetaType::Void, QMetaType::Int,   89,

 // properties: name, type, flags
     153, QMetaType::Int, 0x00495103,
     154, QMetaType::Bool, 0x00495103,
     155, QMetaType::Int, 0x00495103,
     156, QMetaType::QString, 0x00495103,
      96, QMetaType::Bool, 0x00495003,
      93, QMetaType::Bool, 0x00495003,
      94, QMetaType::Bool, 0x00495003,
      97, QMetaType::Bool, 0x00495003,
      98, QMetaType::Bool, 0x00495003,
     157, QMetaType::Int, 0x00495003,
     158, QMetaType::Bool, 0x00495103,
     159, QMetaType::Bool, 0x00495103,
     160, 0x80000000 | 30, 0x0049510b,
     161, QMetaType::Bool, 0x00495103,
     162, QMetaType::Bool, 0x00495103,
     163, QMetaType::Bool, 0x00495103,
     164, 0x80000000 | 30, 0x0049510b,
     165, 0x80000000 | 30, 0x0049510b,
     166, QMetaType::QVariantMap, 0x00495103,
     167, QMetaType::Float, 0x00495103,
     168, QMetaType::Int, 0x00495103,
     169, QMetaType::Int, 0x00495003,
     170, QMetaType::Int, 0x00495003,
      95, QMetaType::Int, 0x00495003,
     171, QMetaType::Float, 0x00495103,
     172, QMetaType::Float, 0x00495103,
     173, 0x80000000 | 49, 0x0049510b,

 // properties: notify_signal_id
      10,
      11,
      12,
      13,
      16,
      14,
      15,
      17,
      18,
      19,
      22,
      21,
      25,
      26,
      27,
      28,
      29,
      30,
      32,
      36,
      33,
      34,
      35,
      20,
      37,
      38,
      39,

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
        case 10: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->trigArmStatusValueChanged(); break;
        case 25: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 26: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 30: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 31: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 33: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 40: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->initRosThread(); break;
        case 42: _t->on_pushButton_pressed(); break;
        case 43: _t->on_pushButton_2_pressed(); break;
        case 44: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 69: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 75: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->trig_armStatus(); break;
        case 77: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 79: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        case 106: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 108: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 109: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 110: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 114: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 115: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 116: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 120: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 124: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 130: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 132: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 133: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 134: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 135: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
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
        case 30:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 78:
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
        case 107:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 133:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 134:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 40;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
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
        case 25: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 26: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 25: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 136)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 136;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 136)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 136;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
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
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
