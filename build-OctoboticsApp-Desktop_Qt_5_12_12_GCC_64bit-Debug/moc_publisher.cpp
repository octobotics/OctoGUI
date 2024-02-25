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
    QByteArrayData data[201];
    char stringdata0[2697];
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
QT_MOC_LITERAL(24, 289, 19), // "voltageValueChanged"
QT_MOC_LITERAL(25, 309, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(26, 331, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(27, 350, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(28, 370, 6), // "rstArm"
QT_MOC_LITERAL(29, 377, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(30, 403, 16), // "armStatusChanged"
QT_MOC_LITERAL(31, 420, 12), // "QVector<int>"
QT_MOC_LITERAL(32, 433, 6), // "status"
QT_MOC_LITERAL(33, 440, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(34, 464, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(35, 488, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(36, 511, 15), // "errValueChanged"
QT_MOC_LITERAL(37, 527, 16), // "tempValueChanged"
QT_MOC_LITERAL(38, 544, 10), // "rstCrawler"
QT_MOC_LITERAL(39, 555, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(40, 574, 20), // "velocityValueChanged"
QT_MOC_LITERAL(41, 595, 16), // "odomValueChanged"
QT_MOC_LITERAL(42, 612, 12), // "current_odom"
QT_MOC_LITERAL(43, 625, 16), // "tripValueChanged"
QT_MOC_LITERAL(44, 642, 12), // "current_trip"
QT_MOC_LITERAL(45, 655, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(46, 678, 5), // "level"
QT_MOC_LITERAL(47, 684, 19), // "batteryValueChanged"
QT_MOC_LITERAL(48, 704, 19), // "currentValueChanged"
QT_MOC_LITERAL(49, 724, 15), // "utstatusChanged"
QT_MOC_LITERAL(50, 740, 16), // "thicknessChanged"
QT_MOC_LITERAL(51, 757, 12), // "utVelChanged"
QT_MOC_LITERAL(52, 770, 13), // "utDataChanged"
QT_MOC_LITERAL(53, 784, 10), // "uidChanged"
QT_MOC_LITERAL(54, 795, 16), // "QVector<QString>"
QT_MOC_LITERAL(55, 812, 6), // "capImg"
QT_MOC_LITERAL(56, 819, 13), // "initRosThread"
QT_MOC_LITERAL(57, 833, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(58, 855, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(59, 879, 12), // "getComStatus"
QT_MOC_LITERAL(60, 892, 12), // "setComStatus"
QT_MOC_LITERAL(61, 905, 12), // "commCallback"
QT_MOC_LITERAL(62, 918, 14), // "getToggleValue"
QT_MOC_LITERAL(63, 933, 14), // "setToggleValue"
QT_MOC_LITERAL(64, 948, 4), // "flag"
QT_MOC_LITERAL(65, 953, 14), // "toggleCallback"
QT_MOC_LITERAL(66, 968, 18), // "getcameraInitValue"
QT_MOC_LITERAL(67, 987, 18), // "setcameraInitValue"
QT_MOC_LITERAL(68, 1006, 1), // "k"
QT_MOC_LITERAL(69, 1008, 13), // "getToolToggle"
QT_MOC_LITERAL(70, 1022, 13), // "setToolToggle"
QT_MOC_LITERAL(71, 1036, 16), // "getArmToolStatus"
QT_MOC_LITERAL(72, 1053, 16), // "setArmToolStatus"
QT_MOC_LITERAL(73, 1070, 15), // "armToolCallback"
QT_MOC_LITERAL(74, 1086, 3), // "arg"
QT_MOC_LITERAL(75, 1090, 15), // "getslideCWValue"
QT_MOC_LITERAL(76, 1106, 15), // "setslideCWValue"
QT_MOC_LITERAL(77, 1122, 16), // "getslideCCWValue"
QT_MOC_LITERAL(78, 1139, 16), // "setslideCCWValue"
QT_MOC_LITERAL(79, 1156, 13), // "getlacCWValue"
QT_MOC_LITERAL(80, 1170, 13), // "setlacCWValue"
QT_MOC_LITERAL(81, 1184, 14), // "getlacCCWValue"
QT_MOC_LITERAL(82, 1199, 14), // "setlacCCWValue"
QT_MOC_LITERAL(83, 1214, 17), // "getresetTripValue"
QT_MOC_LITERAL(84, 1232, 17), // "setresetTripValue"
QT_MOC_LITERAL(85, 1250, 13), // "getWaterLevel"
QT_MOC_LITERAL(86, 1264, 13), // "setWaterLevel"
QT_MOC_LITERAL(87, 1278, 15), // "getStopArmValue"
QT_MOC_LITERAL(88, 1294, 15), // "setStopArmValue"
QT_MOC_LITERAL(89, 1310, 14), // "setRstArmValue"
QT_MOC_LITERAL(90, 1325, 14), // "getRstArmValue"
QT_MOC_LITERAL(91, 1340, 12), // "getArmStatus"
QT_MOC_LITERAL(92, 1353, 12), // "setArmStatus"
QT_MOC_LITERAL(93, 1366, 12), // "call_arminit"
QT_MOC_LITERAL(94, 1379, 3), // "val"
QT_MOC_LITERAL(95, 1383, 14), // "trig_armStatus"
QT_MOC_LITERAL(96, 1398, 7), // "rst_arm"
QT_MOC_LITERAL(97, 1406, 11), // "armCallback"
QT_MOC_LITERAL(98, 1418, 7), // "slideCW"
QT_MOC_LITERAL(99, 1426, 8), // "slideCCW"
QT_MOC_LITERAL(100, 1435, 9), // "resetTrip"
QT_MOC_LITERAL(101, 1445, 10), // "cameraInit"
QT_MOC_LITERAL(102, 1456, 5), // "lacCW"
QT_MOC_LITERAL(103, 1462, 6), // "lacCCW"
QT_MOC_LITERAL(104, 1469, 7), // "stopArm"
QT_MOC_LITERAL(105, 1477, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(106, 1497, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(107, 1517, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(108, 1537, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(109, 1557, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(110, 1576, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(111, 1595, 12), // "getTempValue"
QT_MOC_LITERAL(112, 1608, 12), // "setTempValue"
QT_MOC_LITERAL(113, 1621, 11), // "getErrValue"
QT_MOC_LITERAL(114, 1633, 11), // "setErrValue"
QT_MOC_LITERAL(115, 1645, 14), // "getCrawlStatus"
QT_MOC_LITERAL(116, 1660, 14), // "setCrawlStatus"
QT_MOC_LITERAL(117, 1675, 11), // "rst_crawler"
QT_MOC_LITERAL(118, 1687, 16), // "call_crawlerinit"
QT_MOC_LITERAL(119, 1704, 12), // "call_slidecw"
QT_MOC_LITERAL(120, 1717, 13), // "call_slideccw"
QT_MOC_LITERAL(121, 1731, 10), // "call_laccw"
QT_MOC_LITERAL(122, 1742, 11), // "call_lacccw"
QT_MOC_LITERAL(123, 1754, 14), // "call_resetTrip"
QT_MOC_LITERAL(124, 1769, 15), // "call_cameraInit"
QT_MOC_LITERAL(125, 1785, 13), // "errorCallback"
QT_MOC_LITERAL(126, 1799, 12), // "tempCallback"
QT_MOC_LITERAL(127, 1812, 15), // "crawlerCallback"
QT_MOC_LITERAL(128, 1828, 9), // "frontLeft"
QT_MOC_LITERAL(129, 1838, 10), // "frontRight"
QT_MOC_LITERAL(130, 1849, 10), // "backrRight"
QT_MOC_LITERAL(131, 1860, 8), // "backLeft"
QT_MOC_LITERAL(132, 1869, 11), // "initCrawler"
QT_MOC_LITERAL(133, 1881, 11), // "stopCrawler"
QT_MOC_LITERAL(134, 1893, 15), // "getBatteryValue"
QT_MOC_LITERAL(135, 1909, 15), // "setBatteryValue"
QT_MOC_LITERAL(136, 1925, 12), // "battCallback"
QT_MOC_LITERAL(137, 1938, 15), // "getvoltageValue"
QT_MOC_LITERAL(138, 1954, 15), // "setvoltageValue"
QT_MOC_LITERAL(139, 1970, 15), // "voltageCallback"
QT_MOC_LITERAL(140, 1986, 11), // "velCallback"
QT_MOC_LITERAL(141, 1998, 18), // "current_vel_linear"
QT_MOC_LITERAL(142, 2017, 16), // "getVelocityValue"
QT_MOC_LITERAL(143, 2034, 16), // "setVelocityValue"
QT_MOC_LITERAL(144, 2051, 11), // "lacCallback"
QT_MOC_LITERAL(145, 2063, 11), // "getlacValue"
QT_MOC_LITERAL(146, 2075, 11), // "setlacValue"
QT_MOC_LITERAL(147, 2087, 12), // "odomCallback"
QT_MOC_LITERAL(148, 2100, 12), // "getodomValue"
QT_MOC_LITERAL(149, 2113, 12), // "setodomValue"
QT_MOC_LITERAL(150, 2126, 12), // "tripCallback"
QT_MOC_LITERAL(151, 2139, 12), // "gettripValue"
QT_MOC_LITERAL(152, 2152, 12), // "settripValue"
QT_MOC_LITERAL(153, 2165, 15), // "getCurrentValue"
QT_MOC_LITERAL(154, 2181, 15), // "setCurrentValue"
QT_MOC_LITERAL(155, 2197, 15), // "currentCallback"
QT_MOC_LITERAL(156, 2213, 13), // "waterCallback"
QT_MOC_LITERAL(157, 2227, 9), // "getUtData"
QT_MOC_LITERAL(158, 2237, 9), // "setUtData"
QT_MOC_LITERAL(159, 2247, 8), // "getUtVel"
QT_MOC_LITERAL(160, 2256, 8), // "setUtVel"
QT_MOC_LITERAL(161, 2265, 11), // "getUtstatus"
QT_MOC_LITERAL(162, 2277, 11), // "setUtstatus"
QT_MOC_LITERAL(163, 2289, 12), // "getThickness"
QT_MOC_LITERAL(164, 2302, 12), // "setThickness"
QT_MOC_LITERAL(165, 2315, 10), // "utCallback"
QT_MOC_LITERAL(166, 2326, 3), // "vel"
QT_MOC_LITERAL(167, 2330, 8), // "deepcoat"
QT_MOC_LITERAL(168, 2339, 4), // "echo"
QT_MOC_LITERAL(169, 2344, 17), // "thicknessCallback"
QT_MOC_LITERAL(170, 2362, 9), // "thickness"
QT_MOC_LITERAL(171, 2372, 4), // "unit"
QT_MOC_LITERAL(172, 2377, 6), // "getUid"
QT_MOC_LITERAL(173, 2384, 6), // "setUid"
QT_MOC_LITERAL(174, 2391, 11), // "uidCallback"
QT_MOC_LITERAL(175, 2403, 11), // "call_capImg"
QT_MOC_LITERAL(176, 2415, 9), // "comStatus"
QT_MOC_LITERAL(177, 2425, 11), // "toggleValue"
QT_MOC_LITERAL(178, 2437, 13), // "armToolStatus"
QT_MOC_LITERAL(179, 2451, 10), // "toolToggle"
QT_MOC_LITERAL(180, 2462, 8), // "lacValue"
QT_MOC_LITERAL(181, 2471, 12), // "stopArmValue"
QT_MOC_LITERAL(182, 2484, 11), // "rstArmValue"
QT_MOC_LITERAL(183, 2496, 9), // "armStatus"
QT_MOC_LITERAL(184, 2506, 16), // "initCrawlerValue"
QT_MOC_LITERAL(185, 2523, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(186, 2540, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(187, 2556, 8), // "errValue"
QT_MOC_LITERAL(188, 2565, 9), // "tempValue"
QT_MOC_LITERAL(189, 2575, 11), // "crawlStatus"
QT_MOC_LITERAL(190, 2587, 10), // "waterLevel"
QT_MOC_LITERAL(191, 2598, 13), // "velocityValue"
QT_MOC_LITERAL(192, 2612, 9), // "odomValue"
QT_MOC_LITERAL(193, 2622, 9), // "tripValue"
QT_MOC_LITERAL(194, 2632, 12), // "batteryValue"
QT_MOC_LITERAL(195, 2645, 12), // "currentValue"
QT_MOC_LITERAL(196, 2658, 12), // "voltageValue"
QT_MOC_LITERAL(197, 2671, 6), // "utData"
QT_MOC_LITERAL(198, 2678, 5), // "utVel"
QT_MOC_LITERAL(199, 2684, 8), // "utstatus"
QT_MOC_LITERAL(200, 2693, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0comStatusChanged\0"
    "toggleValueChanged\0armToolStatusChanged\0"
    "toolToggleChanged\0slideCWValueChanged\0"
    "slideCCWValueChanged\0cameraInitValueChanged\0"
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
     154,   14, // methods
      32, 1184, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      46,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  784,    2, 0x06 /* Public */,
       4,    1,  787,    2, 0x06 /* Public */,
       5,    1,  790,    2, 0x06 /* Public */,
       6,    1,  793,    2, 0x06 /* Public */,
       7,    1,  796,    2, 0x06 /* Public */,
       8,    1,  799,    2, 0x06 /* Public */,
       9,    1,  802,    2, 0x06 /* Public */,
      10,    1,  805,    2, 0x06 /* Public */,
      11,    1,  808,    2, 0x06 /* Public */,
      12,    1,  811,    2, 0x06 /* Public */,
      13,    1,  814,    2, 0x06 /* Public */,
      14,    1,  817,    2, 0x06 /* Public */,
      15,    1,  820,    2, 0x06 /* Public */,
      16,    1,  823,    2, 0x06 /* Public */,
      17,    1,  826,    2, 0x06 /* Public */,
      18,    1,  829,    2, 0x06 /* Public */,
      19,    1,  832,    2, 0x06 /* Public */,
      20,    1,  835,    2, 0x06 /* Public */,
      21,    1,  838,    2, 0x06 /* Public */,
      22,    1,  841,    2, 0x06 /* Public */,
      24,    1,  844,    2, 0x06 /* Public */,
      25,    1,  847,    2, 0x06 /* Public */,
      26,    1,  850,    2, 0x06 /* Public */,
      27,    1,  853,    2, 0x06 /* Public */,
      28,    1,  856,    2, 0x06 /* Public */,
      29,    0,  859,    2, 0x06 /* Public */,
      30,    1,  860,    2, 0x06 /* Public */,
      33,    1,  863,    2, 0x06 /* Public */,
      34,    1,  866,    2, 0x06 /* Public */,
      35,    1,  869,    2, 0x06 /* Public */,
      36,    1,  872,    2, 0x06 /* Public */,
      37,    1,  875,    2, 0x06 /* Public */,
      38,    1,  878,    2, 0x06 /* Public */,
      39,    1,  881,    2, 0x06 /* Public */,
      40,    1,  884,    2, 0x06 /* Public */,
      41,    1,  887,    2, 0x06 /* Public */,
      43,    1,  890,    2, 0x06 /* Public */,
      45,    1,  893,    2, 0x06 /* Public */,
      47,    1,  896,    2, 0x06 /* Public */,
      48,    1,  899,    2, 0x06 /* Public */,
      49,    1,  902,    2, 0x06 /* Public */,
      50,    1,  905,    2, 0x06 /* Public */,
      51,    1,  908,    2, 0x06 /* Public */,
      52,    1,  911,    2, 0x06 /* Public */,
      53,    1,  914,    2, 0x06 /* Public */,
      55,    1,  917,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      56,    0,  920,    2, 0x0a /* Public */,
      57,    0,  921,    2, 0x0a /* Public */,
      58,    0,  922,    2, 0x0a /* Public */,
      59,    0,  923,    2, 0x0a /* Public */,
      60,    1,  924,    2, 0x0a /* Public */,
      61,    1,  927,    2, 0x0a /* Public */,
      62,    0,  930,    2, 0x0a /* Public */,
      63,    1,  931,    2, 0x0a /* Public */,
      65,    1,  934,    2, 0x0a /* Public */,
      66,    0,  937,    2, 0x0a /* Public */,
      67,    1,  938,    2, 0x0a /* Public */,
      69,    0,  941,    2, 0x0a /* Public */,
      70,    1,  942,    2, 0x0a /* Public */,
      71,    0,  945,    2, 0x0a /* Public */,
      72,    1,  946,    2, 0x0a /* Public */,
      73,    1,  949,    2, 0x0a /* Public */,
      75,    0,  952,    2, 0x0a /* Public */,
      76,    1,  953,    2, 0x0a /* Public */,
      77,    0,  956,    2, 0x0a /* Public */,
      78,    1,  957,    2, 0x0a /* Public */,
      79,    0,  960,    2, 0x0a /* Public */,
      80,    1,  961,    2, 0x0a /* Public */,
      81,    0,  964,    2, 0x0a /* Public */,
      82,    1,  965,    2, 0x0a /* Public */,
      83,    0,  968,    2, 0x0a /* Public */,
      84,    1,  969,    2, 0x0a /* Public */,
      85,    0,  972,    2, 0x0a /* Public */,
      86,    1,  973,    2, 0x0a /* Public */,
      87,    0,  976,    2, 0x0a /* Public */,
      88,    1,  977,    2, 0x0a /* Public */,
      89,    1,  980,    2, 0x0a /* Public */,
      90,    0,  983,    2, 0x0a /* Public */,
      91,    0,  984,    2, 0x0a /* Public */,
      92,    1,  985,    2, 0x0a /* Public */,
      93,    1,  988,    2, 0x0a /* Public */,
      95,    0,  991,    2, 0x0a /* Public */,
      96,    1,  992,    2, 0x0a /* Public */,
      97,    1,  995,    2, 0x0a /* Public */,
      98,    1,  998,    2, 0x0a /* Public */,
      99,    1, 1001,    2, 0x0a /* Public */,
     100,    1, 1004,    2, 0x0a /* Public */,
     101,    1, 1007,    2, 0x0a /* Public */,
     102,    1, 1010,    2, 0x0a /* Public */,
     103,    1, 1013,    2, 0x0a /* Public */,
     104,    1, 1016,    2, 0x0a /* Public */,
      28,    1, 1019,    2, 0x0a /* Public */,
     105,    0, 1022,    2, 0x0a /* Public */,
     106,    1, 1023,    2, 0x0a /* Public */,
     107,    0, 1026,    2, 0x0a /* Public */,
     108,    1, 1027,    2, 0x0a /* Public */,
     109,    0, 1030,    2, 0x0a /* Public */,
     110,    1, 1031,    2, 0x0a /* Public */,
     111,    0, 1034,    2, 0x0a /* Public */,
     112,    1, 1035,    2, 0x0a /* Public */,
     113,    0, 1038,    2, 0x0a /* Public */,
     114,    1, 1039,    2, 0x0a /* Public */,
     115,    0, 1042,    2, 0x0a /* Public */,
     116,    1, 1043,    2, 0x0a /* Public */,
     117,    1, 1046,    2, 0x0a /* Public */,
     118,    1, 1049,    2, 0x0a /* Public */,
     119,    1, 1052,    2, 0x0a /* Public */,
     120,    1, 1055,    2, 0x0a /* Public */,
     121,    1, 1058,    2, 0x0a /* Public */,
     122,    1, 1061,    2, 0x0a /* Public */,
     123,    1, 1064,    2, 0x0a /* Public */,
     124,    1, 1067,    2, 0x0a /* Public */,
     125,    1, 1070,    2, 0x0a /* Public */,
     126,    1, 1073,    2, 0x0a /* Public */,
     127,    4, 1076,    2, 0x0a /* Public */,
     132,    1, 1085,    2, 0x0a /* Public */,
     133,    1, 1088,    2, 0x0a /* Public */,
      38,    1, 1091,    2, 0x0a /* Public */,
     134,    0, 1094,    2, 0x0a /* Public */,
     135,    1, 1095,    2, 0x0a /* Public */,
     136,    1, 1098,    2, 0x0a /* Public */,
     137,    0, 1101,    2, 0x0a /* Public */,
     138,    1, 1102,    2, 0x0a /* Public */,
     139,    1, 1105,    2, 0x0a /* Public */,
     140,    1, 1108,    2, 0x0a /* Public */,
     142,    0, 1111,    2, 0x0a /* Public */,
     143,    1, 1112,    2, 0x0a /* Public */,
     144,    1, 1115,    2, 0x0a /* Public */,
     145,    0, 1118,    2, 0x0a /* Public */,
     146,    1, 1119,    2, 0x0a /* Public */,
     147,    1, 1122,    2, 0x0a /* Public */,
     148,    0, 1125,    2, 0x0a /* Public */,
     149,    1, 1126,    2, 0x0a /* Public */,
     150,    1, 1129,    2, 0x0a /* Public */,
     151,    0, 1132,    2, 0x0a /* Public */,
     152,    1, 1133,    2, 0x0a /* Public */,
     153,    0, 1136,    2, 0x0a /* Public */,
     154,    1, 1137,    2, 0x0a /* Public */,
     155,    1, 1140,    2, 0x0a /* Public */,
     156,    1, 1143,    2, 0x0a /* Public */,
     157,    0, 1146,    2, 0x0a /* Public */,
     158,    1, 1147,    2, 0x0a /* Public */,
     159,    0, 1150,    2, 0x0a /* Public */,
     160,    1, 1151,    2, 0x0a /* Public */,
     161,    0, 1154,    2, 0x0a /* Public */,
     162,    1, 1155,    2, 0x0a /* Public */,
     163,    0, 1158,    2, 0x0a /* Public */,
     164,    1, 1159,    2, 0x0a /* Public */,
     165,    3, 1162,    2, 0x0a /* Public */,
     169,    2, 1169,    2, 0x0a /* Public */,
     172,    0, 1174,    2, 0x0a /* Public */,
     173,    1, 1175,    2, 0x0a /* Public */,
     174,    1, 1178,    2, 0x0a /* Public */,
     175,    1, 1181,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   32,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Float,   46,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   32,
    QMetaType::Void, QMetaType::QVariantMap,   32,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 54,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   46,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    0x80000000 | 31,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    0x80000000 | 31,
    QMetaType::Void, 0x80000000 | 31,    5,
    0x80000000 | 31,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::Void, 0x80000000 | 31,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  128,  129,  130,  131,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   46,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  166,  167,  168,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  170,  171,
    0x80000000 | 54,
    QMetaType::Void, 0x80000000 | 54,    5,
    QMetaType::Void, 0x80000000 | 54,    5,
    QMetaType::Void, QMetaType::Int,   94,

 // properties: name, type, flags
     176, QMetaType::Int, 0x00495103,
     177, QMetaType::Bool, 0x00495103,
     178, QMetaType::Int, 0x00495103,
     179, QMetaType::QString, 0x00495103,
     101, QMetaType::Bool, 0x00495003,
      98, QMetaType::Bool, 0x00495003,
      99, QMetaType::Bool, 0x00495003,
     102, QMetaType::Bool, 0x00495003,
     103, QMetaType::Bool, 0x00495003,
     180, QMetaType::Int, 0x00495003,
     181, QMetaType::Bool, 0x00495103,
     182, QMetaType::Bool, 0x00495103,
     183, 0x80000000 | 31, 0x0049510b,
     184, QMetaType::Bool, 0x00495103,
     185, QMetaType::Bool, 0x00495103,
     186, QMetaType::Bool, 0x00495103,
     187, 0x80000000 | 31, 0x0049510b,
     188, 0x80000000 | 31, 0x0049510b,
     189, QMetaType::QVariantMap, 0x00495103,
     190, QMetaType::Float, 0x00495103,
     191, QMetaType::Int, 0x00495103,
     192, QMetaType::Int, 0x00495003,
     193, QMetaType::Int, 0x00495003,
     100, QMetaType::Int, 0x00495003,
     194, QMetaType::Float, 0x00495103,
     195, QMetaType::Float, 0x00495103,
     196, QMetaType::Int, 0x00495003,
     197, QMetaType::QString, 0x00495103,
     198, QMetaType::QString, 0x00495103,
     199, QMetaType::QVariantMap, 0x00495103,
     170, QMetaType::QVariantMap, 0x00495103,
     200, 0x80000000 | 54, 0x0049510b,

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
      23,
      22,
      26,
      27,
      28,
      29,
      30,
      31,
      33,
      37,
      34,
      35,
      36,
      21,
      38,
      39,
      20,
      43,
      42,
      40,
      41,
      44,

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
        case 20: _t->voltageValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->trigArmStatusValueChanged(); break;
        case 26: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 27: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 31: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 32: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 34: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 41: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 42: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 45: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->initRosThread(); break;
        case 47: _t->on_pushButton_pressed(); break;
        case 48: _t->on_pushButton_2_pressed(); break;
        case 49: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 74: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 80: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->trig_armStatus(); break;
        case 82: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 84: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 100: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 101: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 102: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 104: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 105: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 110: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 112: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 113: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 114: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 115: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 119: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 120: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 121: { int _r = _t->getvoltageValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->setvoltageValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->voltageCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        case 140: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 141: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 142: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 143: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 144: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 146: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 147: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 148: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 149: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 150: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 151: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 152: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 153: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
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
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 83:
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
        case 101:
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
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 151:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 152:
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
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::voltageValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 45;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
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
        case 26: *reinterpret_cast< int*>(_v) = _t->getvoltageValue(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 29: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 30: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 31: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 26: _t->setvoltageValue(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 28: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 29: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 30: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 31: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 154)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 154)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 32;
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
void Publisher::voltageValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
