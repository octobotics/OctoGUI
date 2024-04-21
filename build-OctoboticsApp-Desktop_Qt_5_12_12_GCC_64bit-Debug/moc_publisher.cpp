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
    QByteArrayData data[206];
    char stringdata0[2959];
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
QT_MOC_LITERAL(34, 462, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(35, 485, 25), // "rstwaterlevelValueChanged"
QT_MOC_LITERAL(36, 511, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(37, 530, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(38, 550, 6), // "rstArm"
QT_MOC_LITERAL(39, 557, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(40, 583, 16), // "armStatusChanged"
QT_MOC_LITERAL(41, 600, 12), // "QVector<int>"
QT_MOC_LITERAL(42, 613, 6), // "status"
QT_MOC_LITERAL(43, 620, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(44, 644, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(45, 668, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(46, 691, 15), // "errValueChanged"
QT_MOC_LITERAL(47, 707, 16), // "tempValueChanged"
QT_MOC_LITERAL(48, 724, 10), // "rstCrawler"
QT_MOC_LITERAL(49, 735, 13), // "rstWaterLevel"
QT_MOC_LITERAL(50, 749, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(51, 768, 20), // "velocityValueChanged"
QT_MOC_LITERAL(52, 789, 16), // "odomValueChanged"
QT_MOC_LITERAL(53, 806, 12), // "current_odom"
QT_MOC_LITERAL(54, 819, 16), // "tripValueChanged"
QT_MOC_LITERAL(55, 836, 12), // "current_trip"
QT_MOC_LITERAL(56, 849, 5), // "level"
QT_MOC_LITERAL(57, 855, 19), // "batteryValueChanged"
QT_MOC_LITERAL(58, 875, 19), // "currentValueChanged"
QT_MOC_LITERAL(59, 895, 10), // "uidChanged"
QT_MOC_LITERAL(60, 906, 16), // "QVector<QString>"
QT_MOC_LITERAL(61, 923, 8), // "automode"
QT_MOC_LITERAL(62, 932, 13), // "initRosThread"
QT_MOC_LITERAL(63, 946, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(64, 968, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(65, 992, 12), // "getComStatus"
QT_MOC_LITERAL(66, 1005, 12), // "setComStatus"
QT_MOC_LITERAL(67, 1018, 12), // "commCallback"
QT_MOC_LITERAL(68, 1031, 20), // "getangularspeedValue"
QT_MOC_LITERAL(69, 1052, 20), // "setangularspeedValue"
QT_MOC_LITERAL(70, 1073, 20), // "angularspeedCallback"
QT_MOC_LITERAL(71, 1094, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(72, 1115, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(73, 1136, 17), // "velstatusCallback"
QT_MOC_LITERAL(74, 1154, 14), // "getToggleValue"
QT_MOC_LITERAL(75, 1169, 14), // "setToggleValue"
QT_MOC_LITERAL(76, 1184, 4), // "flag"
QT_MOC_LITERAL(77, 1189, 14), // "toggleCallback"
QT_MOC_LITERAL(78, 1204, 18), // "getcameraInitValue"
QT_MOC_LITERAL(79, 1223, 18), // "setcameraInitValue"
QT_MOC_LITERAL(80, 1242, 1), // "k"
QT_MOC_LITERAL(81, 1244, 13), // "getToolToggle"
QT_MOC_LITERAL(82, 1258, 13), // "setToolToggle"
QT_MOC_LITERAL(83, 1272, 16), // "getArmToolStatus"
QT_MOC_LITERAL(84, 1289, 16), // "setArmToolStatus"
QT_MOC_LITERAL(85, 1306, 15), // "armToolCallback"
QT_MOC_LITERAL(86, 1322, 3), // "arg"
QT_MOC_LITERAL(87, 1326, 15), // "getslideCWValue"
QT_MOC_LITERAL(88, 1342, 15), // "setslideCWValue"
QT_MOC_LITERAL(89, 1358, 16), // "getslideCCWValue"
QT_MOC_LITERAL(90, 1375, 16), // "setslideCCWValue"
QT_MOC_LITERAL(91, 1392, 16), // "getspeedIncrease"
QT_MOC_LITERAL(92, 1409, 16), // "setspeedIncrease"
QT_MOC_LITERAL(93, 1426, 16), // "getspeedDecrease"
QT_MOC_LITERAL(94, 1443, 16), // "setspeedDecrease"
QT_MOC_LITERAL(95, 1460, 13), // "getlacCWValue"
QT_MOC_LITERAL(96, 1474, 13), // "setlacCWValue"
QT_MOC_LITERAL(97, 1488, 14), // "getlacCCWValue"
QT_MOC_LITERAL(98, 1503, 14), // "setlacCCWValue"
QT_MOC_LITERAL(99, 1518, 17), // "getresetTripValue"
QT_MOC_LITERAL(100, 1536, 17), // "setresetTripValue"
QT_MOC_LITERAL(101, 1554, 13), // "getWaterLevel"
QT_MOC_LITERAL(102, 1568, 13), // "setWaterLevel"
QT_MOC_LITERAL(103, 1582, 15), // "getStopArmValue"
QT_MOC_LITERAL(104, 1598, 15), // "setStopArmValue"
QT_MOC_LITERAL(105, 1614, 14), // "setRstArmValue"
QT_MOC_LITERAL(106, 1629, 14), // "getRstArmValue"
QT_MOC_LITERAL(107, 1644, 12), // "getArmStatus"
QT_MOC_LITERAL(108, 1657, 12), // "setArmStatus"
QT_MOC_LITERAL(109, 1670, 12), // "call_arminit"
QT_MOC_LITERAL(110, 1683, 3), // "val"
QT_MOC_LITERAL(111, 1687, 14), // "trig_armStatus"
QT_MOC_LITERAL(112, 1702, 7), // "rst_arm"
QT_MOC_LITERAL(113, 1710, 11), // "armCallback"
QT_MOC_LITERAL(114, 1722, 7), // "slideCW"
QT_MOC_LITERAL(115, 1730, 8), // "slideCCW"
QT_MOC_LITERAL(116, 1739, 13), // "speedIncrease"
QT_MOC_LITERAL(117, 1753, 13), // "speedDecrease"
QT_MOC_LITERAL(118, 1767, 9), // "resetTrip"
QT_MOC_LITERAL(119, 1777, 10), // "cameraInit"
QT_MOC_LITERAL(120, 1788, 5), // "lacCW"
QT_MOC_LITERAL(121, 1794, 6), // "lacCCW"
QT_MOC_LITERAL(122, 1801, 7), // "stopArm"
QT_MOC_LITERAL(123, 1809, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(124, 1829, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(125, 1849, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(126, 1869, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(127, 1889, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(128, 1908, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(129, 1927, 21), // "getrstwaterlevelValue"
QT_MOC_LITERAL(130, 1949, 21), // "setrstwaterlevelValue"
QT_MOC_LITERAL(131, 1971, 12), // "getTempValue"
QT_MOC_LITERAL(132, 1984, 12), // "setTempValue"
QT_MOC_LITERAL(133, 1997, 11), // "getErrValue"
QT_MOC_LITERAL(134, 2009, 11), // "setErrValue"
QT_MOC_LITERAL(135, 2021, 14), // "getCrawlStatus"
QT_MOC_LITERAL(136, 2036, 14), // "setCrawlStatus"
QT_MOC_LITERAL(137, 2051, 11), // "rst_crawler"
QT_MOC_LITERAL(138, 2063, 11), // "reset_water"
QT_MOC_LITERAL(139, 2075, 16), // "call_crawlerinit"
QT_MOC_LITERAL(140, 2092, 12), // "call_slidecw"
QT_MOC_LITERAL(141, 2105, 13), // "call_slideccw"
QT_MOC_LITERAL(142, 2119, 10), // "call_laccw"
QT_MOC_LITERAL(143, 2130, 11), // "call_lacccw"
QT_MOC_LITERAL(144, 2142, 18), // "call_speedIncrease"
QT_MOC_LITERAL(145, 2161, 18), // "call_speedDecrease"
QT_MOC_LITERAL(146, 2180, 14), // "call_resetTrip"
QT_MOC_LITERAL(147, 2195, 20), // "call_resetWaterLevel"
QT_MOC_LITERAL(148, 2216, 15), // "call_cameraInit"
QT_MOC_LITERAL(149, 2232, 13), // "errorCallback"
QT_MOC_LITERAL(150, 2246, 12), // "tempCallback"
QT_MOC_LITERAL(151, 2259, 15), // "crawlerCallback"
QT_MOC_LITERAL(152, 2275, 9), // "frontLeft"
QT_MOC_LITERAL(153, 2285, 10), // "frontRight"
QT_MOC_LITERAL(154, 2296, 10), // "backrRight"
QT_MOC_LITERAL(155, 2307, 8), // "backLeft"
QT_MOC_LITERAL(156, 2316, 11), // "initCrawler"
QT_MOC_LITERAL(157, 2328, 11), // "stopCrawler"
QT_MOC_LITERAL(158, 2340, 13), // "rstwaterlevel"
QT_MOC_LITERAL(159, 2354, 15), // "getBatteryValue"
QT_MOC_LITERAL(160, 2370, 15), // "setBatteryValue"
QT_MOC_LITERAL(161, 2386, 12), // "battCallback"
QT_MOC_LITERAL(162, 2399, 11), // "velCallback"
QT_MOC_LITERAL(163, 2411, 18), // "current_vel_linear"
QT_MOC_LITERAL(164, 2430, 16), // "getVelocityValue"
QT_MOC_LITERAL(165, 2447, 16), // "setVelocityValue"
QT_MOC_LITERAL(166, 2464, 11), // "lacCallback"
QT_MOC_LITERAL(167, 2476, 11), // "getlacValue"
QT_MOC_LITERAL(168, 2488, 11), // "setlacValue"
QT_MOC_LITERAL(169, 2500, 12), // "odomCallback"
QT_MOC_LITERAL(170, 2513, 12), // "getodomValue"
QT_MOC_LITERAL(171, 2526, 12), // "setodomValue"
QT_MOC_LITERAL(172, 2539, 12), // "tripCallback"
QT_MOC_LITERAL(173, 2552, 12), // "gettripValue"
QT_MOC_LITERAL(174, 2565, 12), // "settripValue"
QT_MOC_LITERAL(175, 2578, 15), // "getCurrentValue"
QT_MOC_LITERAL(176, 2594, 15), // "setCurrentValue"
QT_MOC_LITERAL(177, 2610, 15), // "currentCallback"
QT_MOC_LITERAL(178, 2626, 13), // "waterCallback"
QT_MOC_LITERAL(179, 2640, 6), // "getUid"
QT_MOC_LITERAL(180, 2647, 6), // "setUid"
QT_MOC_LITERAL(181, 2654, 11), // "uidCallback"
QT_MOC_LITERAL(182, 2666, 13), // "call_automode"
QT_MOC_LITERAL(183, 2680, 9), // "comStatus"
QT_MOC_LITERAL(184, 2690, 11), // "toggleValue"
QT_MOC_LITERAL(185, 2702, 13), // "armToolStatus"
QT_MOC_LITERAL(186, 2716, 10), // "toolToggle"
QT_MOC_LITERAL(187, 2727, 8), // "lacValue"
QT_MOC_LITERAL(188, 2736, 12), // "stopArmValue"
QT_MOC_LITERAL(189, 2749, 11), // "rstArmValue"
QT_MOC_LITERAL(190, 2761, 9), // "armStatus"
QT_MOC_LITERAL(191, 2771, 16), // "initCrawlerValue"
QT_MOC_LITERAL(192, 2788, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(193, 2805, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(194, 2821, 18), // "rstwaterlevelValue"
QT_MOC_LITERAL(195, 2840, 8), // "errValue"
QT_MOC_LITERAL(196, 2849, 9), // "tempValue"
QT_MOC_LITERAL(197, 2859, 11), // "crawlStatus"
QT_MOC_LITERAL(198, 2871, 10), // "waterLevel"
QT_MOC_LITERAL(199, 2882, 13), // "velocityValue"
QT_MOC_LITERAL(200, 2896, 9), // "odomValue"
QT_MOC_LITERAL(201, 2906, 9), // "tripValue"
QT_MOC_LITERAL(202, 2916, 12), // "batteryValue"
QT_MOC_LITERAL(203, 2929, 12), // "anglesetting"
QT_MOC_LITERAL(204, 2942, 12), // "currentValue"
QT_MOC_LITERAL(205, 2955, 3) // "uid"

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
    "waterlevelValueChanged\0rstwaterlevelValueChanged\0"
    "rstArmValueChanged\0stopArmValueChanged\0"
    "rstArm\0trigArmStatusValueChanged\0"
    "armStatusChanged\0QVector<int>\0status\0"
    "initCrawlerValueChanged\0stopCrawlerValueChanged\0"
    "rstCrawlerValueChanged\0errValueChanged\0"
    "tempValueChanged\0rstCrawler\0rstWaterLevel\0"
    "crawlStatusChanged\0velocityValueChanged\0"
    "odomValueChanged\0current_odom\0"
    "tripValueChanged\0current_trip\0level\0"
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
    "setRstCrawlerValue\0getrstwaterlevelValue\0"
    "setrstwaterlevelValue\0getTempValue\0"
    "setTempValue\0getErrValue\0setErrValue\0"
    "getCrawlStatus\0setCrawlStatus\0rst_crawler\0"
    "reset_water\0call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
    "call_speedIncrease\0call_speedDecrease\0"
    "call_resetTrip\0call_resetWaterLevel\0"
    "call_cameraInit\0errorCallback\0"
    "tempCallback\0crawlerCallback\0frontLeft\0"
    "frontRight\0backrRight\0backLeft\0"
    "initCrawler\0stopCrawler\0rstwaterlevel\0"
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
     165,   14, // methods
      32, 1266, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      51,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  839,    2, 0x06 /* Public */,
       4,    1,  842,    2, 0x06 /* Public */,
       5,    1,  845,    2, 0x06 /* Public */,
       6,    1,  848,    2, 0x06 /* Public */,
       7,    1,  851,    2, 0x06 /* Public */,
       8,    1,  854,    2, 0x06 /* Public */,
       9,    1,  857,    2, 0x06 /* Public */,
      10,    1,  860,    2, 0x06 /* Public */,
      11,    1,  863,    2, 0x06 /* Public */,
      12,    1,  866,    2, 0x06 /* Public */,
      13,    1,  869,    2, 0x06 /* Public */,
      14,    1,  872,    2, 0x06 /* Public */,
      15,    1,  875,    2, 0x06 /* Public */,
      16,    1,  878,    2, 0x06 /* Public */,
      18,    1,  881,    2, 0x06 /* Public */,
      20,    1,  884,    2, 0x06 /* Public */,
      21,    1,  887,    2, 0x06 /* Public */,
      22,    1,  890,    2, 0x06 /* Public */,
      23,    1,  893,    2, 0x06 /* Public */,
      24,    1,  896,    2, 0x06 /* Public */,
      25,    1,  899,    2, 0x06 /* Public */,
      26,    1,  902,    2, 0x06 /* Public */,
      27,    1,  905,    2, 0x06 /* Public */,
      28,    1,  908,    2, 0x06 /* Public */,
      29,    1,  911,    2, 0x06 /* Public */,
      30,    1,  914,    2, 0x06 /* Public */,
      31,    1,  917,    2, 0x06 /* Public */,
      33,    1,  920,    2, 0x06 /* Public */,
      34,    1,  923,    2, 0x06 /* Public */,
      35,    1,  926,    2, 0x06 /* Public */,
      36,    1,  929,    2, 0x06 /* Public */,
      37,    1,  932,    2, 0x06 /* Public */,
      38,    1,  935,    2, 0x06 /* Public */,
      39,    0,  938,    2, 0x06 /* Public */,
      40,    1,  939,    2, 0x06 /* Public */,
      43,    1,  942,    2, 0x06 /* Public */,
      44,    1,  945,    2, 0x06 /* Public */,
      45,    1,  948,    2, 0x06 /* Public */,
      46,    1,  951,    2, 0x06 /* Public */,
      47,    1,  954,    2, 0x06 /* Public */,
      48,    1,  957,    2, 0x06 /* Public */,
      49,    1,  960,    2, 0x06 /* Public */,
      50,    1,  963,    2, 0x06 /* Public */,
      51,    1,  966,    2, 0x06 /* Public */,
      52,    1,  969,    2, 0x06 /* Public */,
      54,    1,  972,    2, 0x06 /* Public */,
      34,    1,  975,    2, 0x06 /* Public */,
      57,    1,  978,    2, 0x06 /* Public */,
      58,    1,  981,    2, 0x06 /* Public */,
      59,    1,  984,    2, 0x06 /* Public */,
      61,    1,  987,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      62,    0,  990,    2, 0x0a /* Public */,
      63,    0,  991,    2, 0x0a /* Public */,
      64,    0,  992,    2, 0x0a /* Public */,
      65,    0,  993,    2, 0x0a /* Public */,
      66,    1,  994,    2, 0x0a /* Public */,
      67,    1,  997,    2, 0x0a /* Public */,
      68,    0, 1000,    2, 0x0a /* Public */,
      69,    1, 1001,    2, 0x0a /* Public */,
      70,    1, 1004,    2, 0x0a /* Public */,
      71,    0, 1007,    2, 0x0a /* Public */,
      72,    1, 1008,    2, 0x0a /* Public */,
      73,    1, 1011,    2, 0x0a /* Public */,
      74,    0, 1014,    2, 0x0a /* Public */,
      75,    1, 1015,    2, 0x0a /* Public */,
      77,    1, 1018,    2, 0x0a /* Public */,
      78,    0, 1021,    2, 0x0a /* Public */,
      79,    1, 1022,    2, 0x0a /* Public */,
      81,    0, 1025,    2, 0x0a /* Public */,
      82,    1, 1026,    2, 0x0a /* Public */,
      83,    0, 1029,    2, 0x0a /* Public */,
      84,    1, 1030,    2, 0x0a /* Public */,
      85,    1, 1033,    2, 0x0a /* Public */,
      87,    0, 1036,    2, 0x0a /* Public */,
      88,    1, 1037,    2, 0x0a /* Public */,
      89,    0, 1040,    2, 0x0a /* Public */,
      90,    1, 1041,    2, 0x0a /* Public */,
      91,    0, 1044,    2, 0x0a /* Public */,
      92,    1, 1045,    2, 0x0a /* Public */,
      93,    0, 1048,    2, 0x0a /* Public */,
      94,    1, 1049,    2, 0x0a /* Public */,
      95,    0, 1052,    2, 0x0a /* Public */,
      96,    1, 1053,    2, 0x0a /* Public */,
      97,    0, 1056,    2, 0x0a /* Public */,
      98,    1, 1057,    2, 0x0a /* Public */,
      99,    0, 1060,    2, 0x0a /* Public */,
     100,    1, 1061,    2, 0x0a /* Public */,
     101,    0, 1064,    2, 0x0a /* Public */,
     102,    1, 1065,    2, 0x0a /* Public */,
     103,    0, 1068,    2, 0x0a /* Public */,
     104,    1, 1069,    2, 0x0a /* Public */,
     105,    1, 1072,    2, 0x0a /* Public */,
     106,    0, 1075,    2, 0x0a /* Public */,
     107,    0, 1076,    2, 0x0a /* Public */,
     108,    1, 1077,    2, 0x0a /* Public */,
     109,    1, 1080,    2, 0x0a /* Public */,
     111,    0, 1083,    2, 0x0a /* Public */,
     112,    1, 1084,    2, 0x0a /* Public */,
     113,    1, 1087,    2, 0x0a /* Public */,
     114,    1, 1090,    2, 0x0a /* Public */,
     115,    1, 1093,    2, 0x0a /* Public */,
     116,    1, 1096,    2, 0x0a /* Public */,
     117,    1, 1099,    2, 0x0a /* Public */,
     118,    1, 1102,    2, 0x0a /* Public */,
     119,    1, 1105,    2, 0x0a /* Public */,
     120,    1, 1108,    2, 0x0a /* Public */,
     121,    1, 1111,    2, 0x0a /* Public */,
     122,    1, 1114,    2, 0x0a /* Public */,
      38,    1, 1117,    2, 0x0a /* Public */,
     123,    0, 1120,    2, 0x0a /* Public */,
     124,    1, 1121,    2, 0x0a /* Public */,
     125,    0, 1124,    2, 0x0a /* Public */,
     126,    1, 1125,    2, 0x0a /* Public */,
     127,    0, 1128,    2, 0x0a /* Public */,
     128,    1, 1129,    2, 0x0a /* Public */,
     129,    0, 1132,    2, 0x0a /* Public */,
     130,    1, 1133,    2, 0x0a /* Public */,
     131,    0, 1136,    2, 0x0a /* Public */,
     132,    1, 1137,    2, 0x0a /* Public */,
     133,    0, 1140,    2, 0x0a /* Public */,
     134,    1, 1141,    2, 0x0a /* Public */,
     135,    0, 1144,    2, 0x0a /* Public */,
     136,    1, 1145,    2, 0x0a /* Public */,
     137,    1, 1148,    2, 0x0a /* Public */,
     138,    1, 1151,    2, 0x0a /* Public */,
     139,    1, 1154,    2, 0x0a /* Public */,
     140,    1, 1157,    2, 0x0a /* Public */,
     141,    1, 1160,    2, 0x0a /* Public */,
     142,    1, 1163,    2, 0x0a /* Public */,
     143,    1, 1166,    2, 0x0a /* Public */,
     144,    1, 1169,    2, 0x0a /* Public */,
     145,    1, 1172,    2, 0x0a /* Public */,
     146,    1, 1175,    2, 0x0a /* Public */,
     147,    1, 1178,    2, 0x0a /* Public */,
     148,    1, 1181,    2, 0x0a /* Public */,
     149,    1, 1184,    2, 0x0a /* Public */,
     150,    1, 1187,    2, 0x0a /* Public */,
     151,    4, 1190,    2, 0x0a /* Public */,
     156,    1, 1199,    2, 0x0a /* Public */,
     157,    1, 1202,    2, 0x0a /* Public */,
      48,    1, 1205,    2, 0x0a /* Public */,
     158,    1, 1208,    2, 0x0a /* Public */,
     159,    0, 1211,    2, 0x0a /* Public */,
     160,    1, 1212,    2, 0x0a /* Public */,
     161,    1, 1215,    2, 0x0a /* Public */,
     162,    1, 1218,    2, 0x0a /* Public */,
     164,    0, 1221,    2, 0x0a /* Public */,
     165,    1, 1222,    2, 0x0a /* Public */,
     166,    1, 1225,    2, 0x0a /* Public */,
     167,    0, 1228,    2, 0x0a /* Public */,
     168,    1, 1229,    2, 0x0a /* Public */,
     169,    1, 1232,    2, 0x0a /* Public */,
     170,    0, 1235,    2, 0x0a /* Public */,
     171,    1, 1236,    2, 0x0a /* Public */,
     172,    1, 1239,    2, 0x0a /* Public */,
     173,    0, 1242,    2, 0x0a /* Public */,
     174,    1, 1243,    2, 0x0a /* Public */,
     175,    0, 1246,    2, 0x0a /* Public */,
     176,    1, 1247,    2, 0x0a /* Public */,
     177,    1, 1250,    2, 0x0a /* Public */,
     178,    1, 1253,    2, 0x0a /* Public */,
     179,    0, 1256,    2, 0x0a /* Public */,
     180,    1, 1257,    2, 0x0a /* Public */,
     181,    1, 1260,    2, 0x0a /* Public */,
     182,    1, 1263,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   42,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, QMetaType::Float,   56,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 60,    5,
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
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   56,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    0x80000000 | 41,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    0x80000000 | 41,
    QMetaType::Void, 0x80000000 | 41,    5,
    0x80000000 | 41,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::Void, 0x80000000 | 41,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  152,  153,  154,  155,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  163,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   56,
    0x80000000 | 60,
    QMetaType::Void, 0x80000000 | 60,    5,
    QMetaType::Void, 0x80000000 | 60,    5,
    QMetaType::Void, QMetaType::Int,  110,

 // properties: name, type, flags
     183, QMetaType::Int, 0x00495103,
     184, QMetaType::Bool, 0x00495103,
     185, QMetaType::Int, 0x00495103,
     186, QMetaType::QString, 0x00495103,
     119, QMetaType::Bool, 0x00495003,
     114, QMetaType::Bool, 0x00495003,
     115, QMetaType::Bool, 0x00495003,
     116, QMetaType::Bool, 0x00495003,
     117, QMetaType::Bool, 0x00495003,
     120, QMetaType::Bool, 0x00495003,
     121, QMetaType::Bool, 0x00495003,
     187, QMetaType::Int, 0x00495003,
     188, QMetaType::Bool, 0x00495103,
     189, QMetaType::Bool, 0x00495103,
     190, 0x80000000 | 41, 0x0049510b,
     191, QMetaType::Bool, 0x00495103,
     192, QMetaType::Bool, 0x00495103,
     193, QMetaType::Bool, 0x00495103,
     194, QMetaType::Bool, 0x00495003,
     195, 0x80000000 | 41, 0x0049510b,
     196, 0x80000000 | 41, 0x0049510b,
     197, QMetaType::QVariantMap, 0x00495103,
     198, QMetaType::Float, 0x00495103,
     199, QMetaType::Int, 0x00495103,
     200, QMetaType::Int, 0x00495003,
     201, QMetaType::Int, 0x00495003,
     118, QMetaType::Int, 0x00495003,
     202, QMetaType::Float, 0x00495103,
      17, QMetaType::Int, 0x00495003,
     203, QMetaType::Int, 0x00495003,
     204, QMetaType::Float, 0x00495103,
     205, 0x80000000 | 60, 0x0049510b,

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
      31,
      30,
      34,
      35,
      36,
      37,
      29,
      38,
      39,
      42,
      28,
      43,
      44,
      45,
      27,
      47,
      13,
      14,
      48,
      49,

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
        case 28: _t->waterlevelValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->rstwaterlevelValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->trigArmStatusValueChanged(); break;
        case 34: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 35: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 39: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 40: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->rstWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 43: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 47: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 49: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 50: _t->automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->initRosThread(); break;
        case 52: _t->on_pushButton_pressed(); break;
        case 53: _t->on_pushButton_2_pressed(); break;
        case 54: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 70: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: { bool _r = _t->getspeedIncrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->setspeedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: { bool _r = _t->getspeedDecrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->setspeedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 89: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 93: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 95: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->trig_armStatus(); break;
        case 97: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 99: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->speedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->speedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 103: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 106: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 110: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 112: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 114: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 115: { bool _r = _t->getrstwaterlevelValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: _t->setrstwaterlevelValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 119: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 120: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 121: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 123: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: _t->reset_water((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 127: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: _t->call_speedIncrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->call_speedDecrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 132: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 133: _t->call_resetWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 135: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 136: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 137: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 138: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 139: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->rstwaterlevel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 143: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 144: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 145: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 146: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 147: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 148: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 149: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 150: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 151: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 152: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 153: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 154: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 155: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 156: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 157: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 158: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 159: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 160: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 161: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 162: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 163: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 164: _t->call_automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 34:
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
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 120:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 136:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 162:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 163:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstwaterlevelValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstWaterLevel)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::automode)) {
                *result = 50;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 20:
        case 19:
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
        case 18: *reinterpret_cast< bool*>(_v) = _t->getrstwaterlevelValue(); break;
        case 19: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 20: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 21: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
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
        case 18: _t->setrstwaterlevelValue(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 20: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 21: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 22: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
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
        if (_id < 165)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 165;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 165)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 165;
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
void Publisher::waterlevelValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::rstwaterlevelValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::rstCrawlerValueChanged(bool _t1)
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
void Publisher::rstWaterLevel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Publisher::automode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
