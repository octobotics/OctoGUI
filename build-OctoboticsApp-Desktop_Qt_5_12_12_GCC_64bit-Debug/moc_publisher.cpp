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
    QByteArrayData data[228];
    char stringdata0[3316];
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
QT_MOC_LITERAL(16, 110, 7), // "value12"
QT_MOC_LITERAL(17, 118, 24), // "speedsettingValueChanged"
QT_MOC_LITERAL(18, 143, 12), // "speedsetting"
QT_MOC_LITERAL(19, 156, 24), // "angularspeedValueChanged"
QT_MOC_LITERAL(20, 181, 12), // "angularspeed"
QT_MOC_LITERAL(21, 194, 16), // "comStatusChanged"
QT_MOC_LITERAL(22, 211, 18), // "toggleValueChanged"
QT_MOC_LITERAL(23, 230, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(24, 251, 17), // "toolToggleChanged"
QT_MOC_LITERAL(25, 269, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(26, 289, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(27, 310, 25), // "speedIncreaseValueChanged"
QT_MOC_LITERAL(28, 336, 25), // "speedDecreaseValueChanged"
QT_MOC_LITERAL(29, 362, 25), // "joystickonoffValueChanged"
QT_MOC_LITERAL(30, 388, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(31, 411, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(32, 429, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(33, 448, 15), // "lacValueChanged"
QT_MOC_LITERAL(34, 464, 9), // "lac_value"
QT_MOC_LITERAL(35, 474, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(36, 496, 25), // "rstwaterlevelValueChanged"
QT_MOC_LITERAL(37, 522, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(38, 541, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(39, 561, 20), // "stopautoValueChanged"
QT_MOC_LITERAL(40, 582, 6), // "rstArm"
QT_MOC_LITERAL(41, 589, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(42, 615, 16), // "armStatusChanged"
QT_MOC_LITERAL(43, 632, 12), // "QVector<int>"
QT_MOC_LITERAL(44, 645, 6), // "status"
QT_MOC_LITERAL(45, 652, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(46, 676, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(47, 700, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(48, 723, 22), // "shdCrawlerValueChanged"
QT_MOC_LITERAL(49, 746, 15), // "errValueChanged"
QT_MOC_LITERAL(50, 762, 16), // "tempValueChanged"
QT_MOC_LITERAL(51, 779, 10), // "rstCrawler"
QT_MOC_LITERAL(52, 790, 10), // "shdCrawler"
QT_MOC_LITERAL(53, 801, 13), // "rstWaterLevel"
QT_MOC_LITERAL(54, 815, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(55, 834, 20), // "velocityValueChanged"
QT_MOC_LITERAL(56, 855, 16), // "odomValueChanged"
QT_MOC_LITERAL(57, 872, 12), // "current_odom"
QT_MOC_LITERAL(58, 885, 16), // "tripValueChanged"
QT_MOC_LITERAL(59, 902, 12), // "current_trip"
QT_MOC_LITERAL(60, 915, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(61, 938, 5), // "level"
QT_MOC_LITERAL(62, 944, 19), // "batteryValueChanged"
QT_MOC_LITERAL(63, 964, 17), // "angleValueChanged"
QT_MOC_LITERAL(64, 982, 19), // "currentValueChanged"
QT_MOC_LITERAL(65, 1002, 10), // "uidChanged"
QT_MOC_LITERAL(66, 1013, 16), // "QVector<QString>"
QT_MOC_LITERAL(67, 1030, 8), // "automode"
QT_MOC_LITERAL(68, 1039, 12), // "stopautoSrvp"
QT_MOC_LITERAL(69, 1052, 13), // "initRosThread"
QT_MOC_LITERAL(70, 1066, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(71, 1088, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(72, 1112, 12), // "getComStatus"
QT_MOC_LITERAL(73, 1125, 12), // "setComStatus"
QT_MOC_LITERAL(74, 1138, 12), // "commCallback"
QT_MOC_LITERAL(75, 1151, 20), // "getangularspeedValue"
QT_MOC_LITERAL(76, 1172, 20), // "setangularspeedValue"
QT_MOC_LITERAL(77, 1193, 20), // "angularspeedCallback"
QT_MOC_LITERAL(78, 1214, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(79, 1235, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(80, 1256, 17), // "velstatusCallback"
QT_MOC_LITERAL(81, 1274, 14), // "getToggleValue"
QT_MOC_LITERAL(82, 1289, 14), // "setToggleValue"
QT_MOC_LITERAL(83, 1304, 4), // "flag"
QT_MOC_LITERAL(84, 1309, 14), // "toggleCallback"
QT_MOC_LITERAL(85, 1324, 18), // "getcameraInitValue"
QT_MOC_LITERAL(86, 1343, 18), // "setcameraInitValue"
QT_MOC_LITERAL(87, 1362, 1), // "k"
QT_MOC_LITERAL(88, 1364, 13), // "getToolToggle"
QT_MOC_LITERAL(89, 1378, 13), // "setToolToggle"
QT_MOC_LITERAL(90, 1392, 16), // "getArmToolStatus"
QT_MOC_LITERAL(91, 1409, 16), // "setArmToolStatus"
QT_MOC_LITERAL(92, 1426, 15), // "armToolCallback"
QT_MOC_LITERAL(93, 1442, 3), // "arg"
QT_MOC_LITERAL(94, 1446, 15), // "getslideCWValue"
QT_MOC_LITERAL(95, 1462, 15), // "setslideCWValue"
QT_MOC_LITERAL(96, 1478, 16), // "getslideCCWValue"
QT_MOC_LITERAL(97, 1495, 16), // "setslideCCWValue"
QT_MOC_LITERAL(98, 1512, 16), // "getspeedIncrease"
QT_MOC_LITERAL(99, 1529, 16), // "setspeedIncrease"
QT_MOC_LITERAL(100, 1546, 16), // "getjoystickonoff"
QT_MOC_LITERAL(101, 1563, 16), // "setjoystickonoff"
QT_MOC_LITERAL(102, 1580, 16), // "getspeedDecrease"
QT_MOC_LITERAL(103, 1597, 16), // "setspeedDecrease"
QT_MOC_LITERAL(104, 1614, 13), // "getlacCWValue"
QT_MOC_LITERAL(105, 1628, 13), // "setlacCWValue"
QT_MOC_LITERAL(106, 1642, 14), // "getlacCCWValue"
QT_MOC_LITERAL(107, 1657, 14), // "setlacCCWValue"
QT_MOC_LITERAL(108, 1672, 17), // "getresetTripValue"
QT_MOC_LITERAL(109, 1690, 17), // "setresetTripValue"
QT_MOC_LITERAL(110, 1708, 13), // "getWaterLevel"
QT_MOC_LITERAL(111, 1722, 13), // "setWaterLevel"
QT_MOC_LITERAL(112, 1736, 15), // "getStopArmValue"
QT_MOC_LITERAL(113, 1752, 15), // "setStopArmValue"
QT_MOC_LITERAL(114, 1768, 14), // "setRstArmValue"
QT_MOC_LITERAL(115, 1783, 14), // "getRstArmValue"
QT_MOC_LITERAL(116, 1798, 12), // "getArmStatus"
QT_MOC_LITERAL(117, 1811, 12), // "setArmStatus"
QT_MOC_LITERAL(118, 1824, 12), // "call_arminit"
QT_MOC_LITERAL(119, 1837, 3), // "val"
QT_MOC_LITERAL(120, 1841, 14), // "trig_armStatus"
QT_MOC_LITERAL(121, 1856, 7), // "rst_arm"
QT_MOC_LITERAL(122, 1864, 11), // "armCallback"
QT_MOC_LITERAL(123, 1876, 7), // "slideCW"
QT_MOC_LITERAL(124, 1884, 8), // "slideCCW"
QT_MOC_LITERAL(125, 1893, 13), // "speedIncrease"
QT_MOC_LITERAL(126, 1907, 13), // "speedDecrease"
QT_MOC_LITERAL(127, 1921, 13), // "joystickonoff"
QT_MOC_LITERAL(128, 1935, 9), // "resetTrip"
QT_MOC_LITERAL(129, 1945, 10), // "cameraInit"
QT_MOC_LITERAL(130, 1956, 5), // "lacCW"
QT_MOC_LITERAL(131, 1962, 6), // "lacCCW"
QT_MOC_LITERAL(132, 1969, 7), // "stopArm"
QT_MOC_LITERAL(133, 1977, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(134, 1997, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(135, 2017, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(136, 2037, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(137, 2057, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(138, 2076, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(139, 2095, 18), // "getshdCrawlerValue"
QT_MOC_LITERAL(140, 2114, 18), // "setshdCrawlerValue"
QT_MOC_LITERAL(141, 2133, 16), // "setstopautoValue"
QT_MOC_LITERAL(142, 2150, 16), // "getstopautoValue"
QT_MOC_LITERAL(143, 2167, 21), // "getrstwaterlevelValue"
QT_MOC_LITERAL(144, 2189, 21), // "setrstwaterlevelValue"
QT_MOC_LITERAL(145, 2211, 12), // "getTempValue"
QT_MOC_LITERAL(146, 2224, 12), // "setTempValue"
QT_MOC_LITERAL(147, 2237, 11), // "getErrValue"
QT_MOC_LITERAL(148, 2249, 11), // "setErrValue"
QT_MOC_LITERAL(149, 2261, 14), // "getCrawlStatus"
QT_MOC_LITERAL(150, 2276, 14), // "setCrawlStatus"
QT_MOC_LITERAL(151, 2291, 11), // "rst_crawler"
QT_MOC_LITERAL(152, 2303, 11), // "shd_crawler"
QT_MOC_LITERAL(153, 2315, 16), // "call_crawlerinit"
QT_MOC_LITERAL(154, 2332, 12), // "call_slidecw"
QT_MOC_LITERAL(155, 2345, 13), // "call_slideccw"
QT_MOC_LITERAL(156, 2359, 10), // "call_laccw"
QT_MOC_LITERAL(157, 2370, 11), // "call_lacccw"
QT_MOC_LITERAL(158, 2382, 18), // "call_speedIncrease"
QT_MOC_LITERAL(159, 2401, 18), // "call_speedDecrease"
QT_MOC_LITERAL(160, 2420, 18), // "call_joystickonoff"
QT_MOC_LITERAL(161, 2439, 14), // "call_resetTrip"
QT_MOC_LITERAL(162, 2454, 20), // "call_resetWaterLevel"
QT_MOC_LITERAL(163, 2475, 15), // "call_cameraInit"
QT_MOC_LITERAL(164, 2491, 13), // "errorCallback"
QT_MOC_LITERAL(165, 2505, 12), // "tempCallback"
QT_MOC_LITERAL(166, 2518, 15), // "crawlerCallback"
QT_MOC_LITERAL(167, 2534, 9), // "frontLeft"
QT_MOC_LITERAL(168, 2544, 10), // "frontRight"
QT_MOC_LITERAL(169, 2555, 10), // "backrRight"
QT_MOC_LITERAL(170, 2566, 8), // "backLeft"
QT_MOC_LITERAL(171, 2575, 11), // "initCrawler"
QT_MOC_LITERAL(172, 2587, 11), // "stopCrawler"
QT_MOC_LITERAL(173, 2599, 9), // "stopautop"
QT_MOC_LITERAL(174, 2609, 15), // "getBatteryValue"
QT_MOC_LITERAL(175, 2625, 15), // "setBatteryValue"
QT_MOC_LITERAL(176, 2641, 12), // "battCallback"
QT_MOC_LITERAL(177, 2654, 13), // "getAngleValue"
QT_MOC_LITERAL(178, 2668, 13), // "setAngleValue"
QT_MOC_LITERAL(179, 2682, 14), // "angleCallbackp"
QT_MOC_LITERAL(180, 2697, 11), // "velCallback"
QT_MOC_LITERAL(181, 2709, 18), // "current_vel_linear"
QT_MOC_LITERAL(182, 2728, 16), // "getVelocityValue"
QT_MOC_LITERAL(183, 2745, 16), // "setVelocityValue"
QT_MOC_LITERAL(184, 2762, 11), // "lacCallback"
QT_MOC_LITERAL(185, 2774, 11), // "getlacValue"
QT_MOC_LITERAL(186, 2786, 11), // "setlacValue"
QT_MOC_LITERAL(187, 2798, 12), // "odomCallback"
QT_MOC_LITERAL(188, 2811, 12), // "getodomValue"
QT_MOC_LITERAL(189, 2824, 12), // "setodomValue"
QT_MOC_LITERAL(190, 2837, 12), // "tripCallback"
QT_MOC_LITERAL(191, 2850, 12), // "gettripValue"
QT_MOC_LITERAL(192, 2863, 12), // "settripValue"
QT_MOC_LITERAL(193, 2876, 15), // "getCurrentValue"
QT_MOC_LITERAL(194, 2892, 15), // "setCurrentValue"
QT_MOC_LITERAL(195, 2908, 15), // "currentCallback"
QT_MOC_LITERAL(196, 2924, 13), // "waterCallback"
QT_MOC_LITERAL(197, 2938, 6), // "getUid"
QT_MOC_LITERAL(198, 2945, 6), // "setUid"
QT_MOC_LITERAL(199, 2952, 11), // "uidCallback"
QT_MOC_LITERAL(200, 2964, 13), // "call_automode"
QT_MOC_LITERAL(201, 2978, 17), // "call_stopautomode"
QT_MOC_LITERAL(202, 2996, 9), // "comStatus"
QT_MOC_LITERAL(203, 3006, 11), // "toggleValue"
QT_MOC_LITERAL(204, 3018, 13), // "armToolStatus"
QT_MOC_LITERAL(205, 3032, 10), // "toolToggle"
QT_MOC_LITERAL(206, 3043, 8), // "lacValue"
QT_MOC_LITERAL(207, 3052, 12), // "stopArmValue"
QT_MOC_LITERAL(208, 3065, 11), // "rstArmValue"
QT_MOC_LITERAL(209, 3077, 9), // "armStatus"
QT_MOC_LITERAL(210, 3087, 16), // "initCrawlerValue"
QT_MOC_LITERAL(211, 3104, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(212, 3121, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(213, 3137, 13), // "stopautoValue"
QT_MOC_LITERAL(214, 3151, 15), // "shdCrawlerValue"
QT_MOC_LITERAL(215, 3167, 18), // "rstwaterlevelValue"
QT_MOC_LITERAL(216, 3186, 8), // "errValue"
QT_MOC_LITERAL(217, 3195, 9), // "tempValue"
QT_MOC_LITERAL(218, 3205, 11), // "crawlStatus"
QT_MOC_LITERAL(219, 3217, 10), // "waterLevel"
QT_MOC_LITERAL(220, 3228, 13), // "velocityValue"
QT_MOC_LITERAL(221, 3242, 9), // "odomValue"
QT_MOC_LITERAL(222, 3252, 9), // "tripValue"
QT_MOC_LITERAL(223, 3262, 12), // "batteryValue"
QT_MOC_LITERAL(224, 3275, 10), // "angleValue"
QT_MOC_LITERAL(225, 3286, 12), // "anglesetting"
QT_MOC_LITERAL(226, 3299, 12), // "currentValue"
QT_MOC_LITERAL(227, 3312, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0value9\0value10\0value11\0"
    "value12\0speedsettingValueChanged\0"
    "speedsetting\0angularspeedValueChanged\0"
    "angularspeed\0comStatusChanged\0"
    "toggleValueChanged\0armToolStatusChanged\0"
    "toolToggleChanged\0slideCWValueChanged\0"
    "slideCCWValueChanged\0speedIncreaseValueChanged\0"
    "speedDecreaseValueChanged\0"
    "joystickonoffValueChanged\0"
    "cameraInitValueChanged\0lacCWValueChanged\0"
    "lacCCWValueChanged\0lacValueChanged\0"
    "lac_value\0resetTripValueChanged\0"
    "rstwaterlevelValueChanged\0rstArmValueChanged\0"
    "stopArmValueChanged\0stopautoValueChanged\0"
    "rstArm\0trigArmStatusValueChanged\0"
    "armStatusChanged\0QVector<int>\0status\0"
    "initCrawlerValueChanged\0stopCrawlerValueChanged\0"
    "rstCrawlerValueChanged\0shdCrawlerValueChanged\0"
    "errValueChanged\0tempValueChanged\0"
    "rstCrawler\0shdCrawler\0rstWaterLevel\0"
    "crawlStatusChanged\0velocityValueChanged\0"
    "odomValueChanged\0current_odom\0"
    "tripValueChanged\0current_trip\0"
    "waterlevelValueChanged\0level\0"
    "batteryValueChanged\0angleValueChanged\0"
    "currentValueChanged\0uidChanged\0"
    "QVector<QString>\0automode\0stopautoSrvp\0"
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
    "getjoystickonoff\0setjoystickonoff\0"
    "getspeedDecrease\0setspeedDecrease\0"
    "getlacCWValue\0setlacCWValue\0getlacCCWValue\0"
    "setlacCCWValue\0getresetTripValue\0"
    "setresetTripValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0speedIncrease\0"
    "speedDecrease\0joystickonoff\0resetTrip\0"
    "cameraInit\0lacCW\0lacCCW\0stopArm\0"
    "getInitCrawlerValue\0setInitCrawlerValue\0"
    "getStopCrawlerValue\0setStopCrawlerValue\0"
    "getRstCrawlerValue\0setRstCrawlerValue\0"
    "getshdCrawlerValue\0setshdCrawlerValue\0"
    "setstopautoValue\0getstopautoValue\0"
    "getrstwaterlevelValue\0setrstwaterlevelValue\0"
    "getTempValue\0setTempValue\0getErrValue\0"
    "setErrValue\0getCrawlStatus\0setCrawlStatus\0"
    "rst_crawler\0shd_crawler\0call_crawlerinit\0"
    "call_slidecw\0call_slideccw\0call_laccw\0"
    "call_lacccw\0call_speedIncrease\0"
    "call_speedDecrease\0call_joystickonoff\0"
    "call_resetTrip\0call_resetWaterLevel\0"
    "call_cameraInit\0errorCallback\0"
    "tempCallback\0crawlerCallback\0frontLeft\0"
    "frontRight\0backrRight\0backLeft\0"
    "initCrawler\0stopCrawler\0stopautop\0"
    "getBatteryValue\0setBatteryValue\0"
    "battCallback\0getAngleValue\0setAngleValue\0"
    "angleCallbackp\0velCallback\0"
    "current_vel_linear\0getVelocityValue\0"
    "setVelocityValue\0lacCallback\0getlacValue\0"
    "setlacValue\0odomCallback\0getodomValue\0"
    "setodomValue\0tripCallback\0gettripValue\0"
    "settripValue\0getCurrentValue\0"
    "setCurrentValue\0currentCallback\0"
    "waterCallback\0getUid\0setUid\0uidCallback\0"
    "call_automode\0call_stopautomode\0"
    "comStatus\0toggleValue\0armToolStatus\0"
    "toolToggle\0lacValue\0stopArmValue\0"
    "rstArmValue\0armStatus\0initCrawlerValue\0"
    "stopCrawlerValue\0rstCrawlerValue\0"
    "stopautoValue\0shdCrawlerValue\0"
    "rstwaterlevelValue\0errValue\0tempValue\0"
    "crawlStatus\0waterLevel\0velocityValue\0"
    "odomValue\0tripValue\0batteryValue\0"
    "angleValue\0anglesetting\0currentValue\0"
    "uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     183,   14, // methods
      36, 1402, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      57,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  929,    2, 0x06 /* Public */,
       4,    1,  932,    2, 0x06 /* Public */,
       5,    1,  935,    2, 0x06 /* Public */,
       6,    1,  938,    2, 0x06 /* Public */,
       7,    1,  941,    2, 0x06 /* Public */,
       8,    1,  944,    2, 0x06 /* Public */,
       9,    1,  947,    2, 0x06 /* Public */,
      10,    1,  950,    2, 0x06 /* Public */,
      11,    1,  953,    2, 0x06 /* Public */,
      12,    1,  956,    2, 0x06 /* Public */,
      13,    1,  959,    2, 0x06 /* Public */,
      14,    1,  962,    2, 0x06 /* Public */,
      15,    1,  965,    2, 0x06 /* Public */,
      16,    1,  968,    2, 0x06 /* Public */,
      17,    1,  971,    2, 0x06 /* Public */,
      19,    1,  974,    2, 0x06 /* Public */,
      21,    1,  977,    2, 0x06 /* Public */,
      22,    1,  980,    2, 0x06 /* Public */,
      23,    1,  983,    2, 0x06 /* Public */,
      24,    1,  986,    2, 0x06 /* Public */,
      25,    1,  989,    2, 0x06 /* Public */,
      26,    1,  992,    2, 0x06 /* Public */,
      27,    1,  995,    2, 0x06 /* Public */,
      28,    1,  998,    2, 0x06 /* Public */,
      29,    1, 1001,    2, 0x06 /* Public */,
      30,    1, 1004,    2, 0x06 /* Public */,
      31,    1, 1007,    2, 0x06 /* Public */,
      32,    1, 1010,    2, 0x06 /* Public */,
      33,    1, 1013,    2, 0x06 /* Public */,
      35,    1, 1016,    2, 0x06 /* Public */,
      36,    1, 1019,    2, 0x06 /* Public */,
      37,    1, 1022,    2, 0x06 /* Public */,
      38,    1, 1025,    2, 0x06 /* Public */,
      39,    1, 1028,    2, 0x06 /* Public */,
      40,    1, 1031,    2, 0x06 /* Public */,
      41,    0, 1034,    2, 0x06 /* Public */,
      42,    1, 1035,    2, 0x06 /* Public */,
      45,    1, 1038,    2, 0x06 /* Public */,
      46,    1, 1041,    2, 0x06 /* Public */,
      47,    1, 1044,    2, 0x06 /* Public */,
      48,    1, 1047,    2, 0x06 /* Public */,
      49,    1, 1050,    2, 0x06 /* Public */,
      50,    1, 1053,    2, 0x06 /* Public */,
      51,    1, 1056,    2, 0x06 /* Public */,
      52,    1, 1059,    2, 0x06 /* Public */,
      53,    1, 1062,    2, 0x06 /* Public */,
      54,    1, 1065,    2, 0x06 /* Public */,
      55,    1, 1068,    2, 0x06 /* Public */,
      56,    1, 1071,    2, 0x06 /* Public */,
      58,    1, 1074,    2, 0x06 /* Public */,
      60,    1, 1077,    2, 0x06 /* Public */,
      62,    1, 1080,    2, 0x06 /* Public */,
      63,    1, 1083,    2, 0x06 /* Public */,
      64,    1, 1086,    2, 0x06 /* Public */,
      65,    1, 1089,    2, 0x06 /* Public */,
      67,    1, 1092,    2, 0x06 /* Public */,
      68,    1, 1095,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      69,    0, 1098,    2, 0x0a /* Public */,
      70,    0, 1099,    2, 0x0a /* Public */,
      71,    0, 1100,    2, 0x0a /* Public */,
      72,    0, 1101,    2, 0x0a /* Public */,
      73,    1, 1102,    2, 0x0a /* Public */,
      74,    1, 1105,    2, 0x0a /* Public */,
      75,    0, 1108,    2, 0x0a /* Public */,
      76,    1, 1109,    2, 0x0a /* Public */,
      77,    1, 1112,    2, 0x0a /* Public */,
      78,    0, 1115,    2, 0x0a /* Public */,
      79,    1, 1116,    2, 0x0a /* Public */,
      80,    1, 1119,    2, 0x0a /* Public */,
      81,    0, 1122,    2, 0x0a /* Public */,
      82,    1, 1123,    2, 0x0a /* Public */,
      84,    1, 1126,    2, 0x0a /* Public */,
      85,    0, 1129,    2, 0x0a /* Public */,
      86,    1, 1130,    2, 0x0a /* Public */,
      88,    0, 1133,    2, 0x0a /* Public */,
      89,    1, 1134,    2, 0x0a /* Public */,
      90,    0, 1137,    2, 0x0a /* Public */,
      91,    1, 1138,    2, 0x0a /* Public */,
      92,    1, 1141,    2, 0x0a /* Public */,
      94,    0, 1144,    2, 0x0a /* Public */,
      95,    1, 1145,    2, 0x0a /* Public */,
      96,    0, 1148,    2, 0x0a /* Public */,
      97,    1, 1149,    2, 0x0a /* Public */,
      98,    0, 1152,    2, 0x0a /* Public */,
      99,    1, 1153,    2, 0x0a /* Public */,
     100,    0, 1156,    2, 0x0a /* Public */,
     101,    1, 1157,    2, 0x0a /* Public */,
     102,    0, 1160,    2, 0x0a /* Public */,
     103,    1, 1161,    2, 0x0a /* Public */,
     104,    0, 1164,    2, 0x0a /* Public */,
     105,    1, 1165,    2, 0x0a /* Public */,
     106,    0, 1168,    2, 0x0a /* Public */,
     107,    1, 1169,    2, 0x0a /* Public */,
     108,    0, 1172,    2, 0x0a /* Public */,
     109,    1, 1173,    2, 0x0a /* Public */,
     110,    0, 1176,    2, 0x0a /* Public */,
     111,    1, 1177,    2, 0x0a /* Public */,
     112,    0, 1180,    2, 0x0a /* Public */,
     113,    1, 1181,    2, 0x0a /* Public */,
     114,    1, 1184,    2, 0x0a /* Public */,
     115,    0, 1187,    2, 0x0a /* Public */,
     116,    0, 1188,    2, 0x0a /* Public */,
     117,    1, 1189,    2, 0x0a /* Public */,
     118,    1, 1192,    2, 0x0a /* Public */,
     120,    0, 1195,    2, 0x0a /* Public */,
     121,    1, 1196,    2, 0x0a /* Public */,
     122,    1, 1199,    2, 0x0a /* Public */,
     123,    1, 1202,    2, 0x0a /* Public */,
     124,    1, 1205,    2, 0x0a /* Public */,
     125,    1, 1208,    2, 0x0a /* Public */,
     126,    1, 1211,    2, 0x0a /* Public */,
     127,    1, 1214,    2, 0x0a /* Public */,
     128,    1, 1217,    2, 0x0a /* Public */,
     129,    1, 1220,    2, 0x0a /* Public */,
     130,    1, 1223,    2, 0x0a /* Public */,
     131,    1, 1226,    2, 0x0a /* Public */,
     132,    1, 1229,    2, 0x0a /* Public */,
      40,    1, 1232,    2, 0x0a /* Public */,
     133,    0, 1235,    2, 0x0a /* Public */,
     134,    1, 1236,    2, 0x0a /* Public */,
     135,    0, 1239,    2, 0x0a /* Public */,
     136,    1, 1240,    2, 0x0a /* Public */,
     137,    0, 1243,    2, 0x0a /* Public */,
     138,    1, 1244,    2, 0x0a /* Public */,
     139,    0, 1247,    2, 0x0a /* Public */,
     140,    1, 1248,    2, 0x0a /* Public */,
     141,    1, 1251,    2, 0x0a /* Public */,
     142,    0, 1254,    2, 0x0a /* Public */,
     143,    0, 1255,    2, 0x0a /* Public */,
     144,    1, 1256,    2, 0x0a /* Public */,
     145,    0, 1259,    2, 0x0a /* Public */,
     146,    1, 1260,    2, 0x0a /* Public */,
     147,    0, 1263,    2, 0x0a /* Public */,
     148,    1, 1264,    2, 0x0a /* Public */,
     149,    0, 1267,    2, 0x0a /* Public */,
     150,    1, 1268,    2, 0x0a /* Public */,
     151,    1, 1271,    2, 0x0a /* Public */,
     152,    1, 1274,    2, 0x0a /* Public */,
     153,    1, 1277,    2, 0x0a /* Public */,
     154,    1, 1280,    2, 0x0a /* Public */,
     155,    1, 1283,    2, 0x0a /* Public */,
     156,    1, 1286,    2, 0x0a /* Public */,
     157,    1, 1289,    2, 0x0a /* Public */,
     158,    1, 1292,    2, 0x0a /* Public */,
     159,    1, 1295,    2, 0x0a /* Public */,
     160,    1, 1298,    2, 0x0a /* Public */,
     161,    1, 1301,    2, 0x0a /* Public */,
     162,    1, 1304,    2, 0x0a /* Public */,
     163,    1, 1307,    2, 0x0a /* Public */,
     164,    1, 1310,    2, 0x0a /* Public */,
     165,    1, 1313,    2, 0x0a /* Public */,
     166,    4, 1316,    2, 0x0a /* Public */,
     171,    1, 1325,    2, 0x0a /* Public */,
     172,    1, 1328,    2, 0x0a /* Public */,
     173,    1, 1331,    2, 0x0a /* Public */,
      51,    1, 1334,    2, 0x0a /* Public */,
     174,    0, 1337,    2, 0x0a /* Public */,
     175,    1, 1338,    2, 0x0a /* Public */,
     176,    1, 1341,    2, 0x0a /* Public */,
     177,    0, 1344,    2, 0x0a /* Public */,
     178,    1, 1345,    2, 0x0a /* Public */,
     179,    1, 1348,    2, 0x0a /* Public */,
     180,    1, 1351,    2, 0x0a /* Public */,
     182,    0, 1354,    2, 0x0a /* Public */,
     183,    1, 1355,    2, 0x0a /* Public */,
     184,    1, 1358,    2, 0x0a /* Public */,
     185,    0, 1361,    2, 0x0a /* Public */,
     186,    1, 1362,    2, 0x0a /* Public */,
     187,    1, 1365,    2, 0x0a /* Public */,
     188,    0, 1368,    2, 0x0a /* Public */,
     189,    1, 1369,    2, 0x0a /* Public */,
     190,    1, 1372,    2, 0x0a /* Public */,
     191,    0, 1375,    2, 0x0a /* Public */,
     192,    1, 1376,    2, 0x0a /* Public */,
     193,    0, 1379,    2, 0x0a /* Public */,
     194,    1, 1380,    2, 0x0a /* Public */,
     195,    1, 1383,    2, 0x0a /* Public */,
     196,    1, 1386,    2, 0x0a /* Public */,
     197,    0, 1389,    2, 0x0a /* Public */,
     198,    1, 1390,    2, 0x0a /* Public */,
     199,    1, 1393,    2, 0x0a /* Public */,
     200,    1, 1396,    2, 0x0a /* Public */,
     201,    1, 1399,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
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
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   44,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Float,   61,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 66,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   83,
    QMetaType::Void, QMetaType::Bool,   83,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   61,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    0x80000000 | 43,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   87,
    0x80000000 | 43,
    QMetaType::Void, 0x80000000 | 43,    5,
    0x80000000 | 43,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  167,  168,  169,  170,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  181,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   61,
    0x80000000 | 66,
    QMetaType::Void, 0x80000000 | 66,    5,
    QMetaType::Void, 0x80000000 | 66,    5,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,  119,

 // properties: name, type, flags
     202, QMetaType::Int, 0x00495103,
     203, QMetaType::Bool, 0x00495103,
     204, QMetaType::Int, 0x00495103,
     205, QMetaType::QString, 0x00495103,
     129, QMetaType::Bool, 0x00495003,
     123, QMetaType::Bool, 0x00495003,
     124, QMetaType::Bool, 0x00495003,
     125, QMetaType::Bool, 0x00495003,
     126, QMetaType::Bool, 0x00495003,
     127, QMetaType::Bool, 0x00495003,
     130, QMetaType::Bool, 0x00495003,
     131, QMetaType::Bool, 0x00495003,
     206, QMetaType::Int, 0x00495003,
     207, QMetaType::Bool, 0x00495103,
     208, QMetaType::Bool, 0x00495103,
     209, 0x80000000 | 43, 0x0049510b,
     210, QMetaType::Bool, 0x00495103,
     211, QMetaType::Bool, 0x00495103,
     212, QMetaType::Bool, 0x00495103,
     213, QMetaType::Bool, 0x00495003,
     214, QMetaType::Bool, 0x00495003,
     215, QMetaType::Bool, 0x00495003,
     216, 0x80000000 | 43, 0x0049510b,
     217, 0x80000000 | 43, 0x0049510b,
     218, QMetaType::QVariantMap, 0x00495103,
     219, QMetaType::Float, 0x00495103,
     220, QMetaType::Int, 0x00495103,
     221, QMetaType::Int, 0x00495003,
     222, QMetaType::Int, 0x00495003,
     128, QMetaType::Int, 0x00495003,
     223, QMetaType::Float, 0x00495103,
     224, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495003,
     225, QMetaType::Int, 0x00495003,
     226, QMetaType::Float, 0x00495103,
     227, 0x80000000 | 66, 0x0049510b,

 // properties: notify_signal_id
      16,
      17,
      18,
      19,
      25,
      20,
      21,
      22,
      23,
      24,
      26,
      27,
      28,
      32,
      31,
      36,
      37,
      38,
      39,
      33,
      40,
      40,
      41,
      42,
      46,
      50,
      47,
      48,
      49,
      29,
      51,
      52,
      14,
      15,
      53,
      54,

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
        case 13: _t->value12((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->speedsettingValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->angularspeedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->speedIncreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->speedDecreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->joystickonoffValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->rstwaterlevelValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->stopautoValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->trigArmStatusValueChanged(); break;
        case 36: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 37: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->shdCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 42: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 43: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->shdCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->rstWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 47: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->angleValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 55: _t->automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->stopautoSrvp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->initRosThread(); break;
        case 58: _t->on_pushButton_pressed(); break;
        case 59: _t->on_pushButton_2_pressed(); break;
        case 60: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 76: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: { bool _r = _t->getspeedIncrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: _t->setspeedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: { bool _r = _t->getjoystickonoff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setjoystickonoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: { bool _r = _t->getspeedDecrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->setspeedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 92: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 97: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 101: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 102: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 103: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->trig_armStatus(); break;
        case 105: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 107: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->speedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->speedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->joystickonoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 115: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 119: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 122: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 124: { bool _r = _t->getshdCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->setshdCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 126: _t->setstopautoValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: { bool _r = _t->getstopautoValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 128: { bool _r = _t->getrstwaterlevelValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->setrstwaterlevelValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 130: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 132: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 133: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 134: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 135: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 136: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 137: _t->shd_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 138: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 141: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: _t->call_speedIncrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 144: _t->call_speedDecrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->call_joystickonoff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 146: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: _t->call_resetWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 148: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 149: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 150: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 151: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 152: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 153: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 154: _t->stopautop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 155: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 156: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 157: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 158: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 159: { int _r = _t->getAngleValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 160: _t->setAngleValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 161: _t->angleCallbackp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 162: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 163: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 164: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 165: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 166: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 167: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 168: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 169: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 170: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 171: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 172: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 173: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 174: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 175: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 176: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 177: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 178: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 179: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 180: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 181: _t->call_automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 182: _t->call_stopautomode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 36:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 102:
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
        case 131:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 149:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 150:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 179:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 180:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value12)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedsettingValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angularspeedValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedIncreaseValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedDecreaseValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::joystickonoffValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstwaterlevelValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopautoValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawlerValueChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawler)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstWaterLevel)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angleValueChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::automode)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopautoSrvp)) {
                *result = 56;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 35:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 23:
        case 22:
        case 15:
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
        case 9: *reinterpret_cast< bool*>(_v) = _t->getjoystickonoff(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getlacCWValue(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getlacCCWValue(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->getlacValue(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 15: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->getstopautoValue(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getshdCrawlerValue(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getrstwaterlevelValue(); break;
        case 22: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 23: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 24: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->getAngleValue(); break;
        case 32: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 35: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 9: _t->setjoystickonoff(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setlacCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setlacCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setlacValue(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 16: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setstopautoValue(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setshdCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setshdCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 23: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 24: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 25: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setAngleValue(*reinterpret_cast< int*>(_v)); break;
        case 32: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 33: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 34: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 183)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 183;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 183)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 183;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 36;
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
void Publisher::value12(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::speedsettingValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::angularspeedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::speedIncreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::speedDecreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::joystickonoffValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::rstwaterlevelValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::stopautoValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::shdCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Publisher::shdCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::rstWaterLevel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Publisher::angleValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Publisher::automode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Publisher::stopautoSrvp(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
