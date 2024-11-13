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
    QByteArrayData data[283];
    char stringdata0[4248];
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
QT_MOC_LITERAL(17, 118, 7), // "value13"
QT_MOC_LITERAL(18, 126, 7), // "value44"
QT_MOC_LITERAL(19, 134, 4), // "val4"
QT_MOC_LITERAL(20, 139, 18), // "posvalValueChanged"
QT_MOC_LITERAL(21, 158, 18), // "negvalValueChanged"
QT_MOC_LITERAL(22, 177, 21), // "cyclesvalValueChanged"
QT_MOC_LITERAL(23, 199, 22), // "pause_treeValueChanged"
QT_MOC_LITERAL(24, 222, 24), // "speedsettingValueChanged"
QT_MOC_LITERAL(25, 247, 12), // "speedsetting"
QT_MOC_LITERAL(26, 260, 24), // "angularspeedValueChanged"
QT_MOC_LITERAL(27, 285, 12), // "angularspeed"
QT_MOC_LITERAL(28, 298, 16), // "comStatusChanged"
QT_MOC_LITERAL(29, 315, 18), // "toggleValueChanged"
QT_MOC_LITERAL(30, 334, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(31, 355, 17), // "toolToggleChanged"
QT_MOC_LITERAL(32, 373, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(33, 393, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(34, 414, 25), // "speedIncreaseValueChanged"
QT_MOC_LITERAL(35, 440, 25), // "speedDecreaseValueChanged"
QT_MOC_LITERAL(36, 466, 25), // "joystickonoffValueChanged"
QT_MOC_LITERAL(37, 492, 21), // "abortautoValueChanged"
QT_MOC_LITERAL(38, 514, 22), // "cameraInitValueChanged"
QT_MOC_LITERAL(39, 537, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(40, 555, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(41, 574, 15), // "lacValueChanged"
QT_MOC_LITERAL(42, 590, 9), // "lac_value"
QT_MOC_LITERAL(43, 600, 21), // "resetTripValueChanged"
QT_MOC_LITERAL(44, 622, 25), // "rstwaterlevelValueChanged"
QT_MOC_LITERAL(45, 648, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(46, 667, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(47, 687, 20), // "stopautoValueChanged"
QT_MOC_LITERAL(48, 708, 20), // "initautoValueChanged"
QT_MOC_LITERAL(49, 729, 6), // "rstArm"
QT_MOC_LITERAL(50, 736, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(51, 762, 16), // "armStatusChanged"
QT_MOC_LITERAL(52, 779, 12), // "QVector<int>"
QT_MOC_LITERAL(53, 792, 6), // "status"
QT_MOC_LITERAL(54, 799, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(55, 823, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(56, 847, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(57, 870, 22), // "shdCrawlerValueChanged"
QT_MOC_LITERAL(58, 893, 15), // "errValueChanged"
QT_MOC_LITERAL(59, 909, 16), // "tempValueChanged"
QT_MOC_LITERAL(60, 926, 10), // "rstCrawler"
QT_MOC_LITERAL(61, 937, 10), // "shdCrawler"
QT_MOC_LITERAL(62, 948, 13), // "rstWaterLevel"
QT_MOC_LITERAL(63, 962, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(64, 981, 20), // "velocityValueChanged"
QT_MOC_LITERAL(65, 1002, 16), // "odomValueChanged"
QT_MOC_LITERAL(66, 1019, 12), // "current_odom"
QT_MOC_LITERAL(67, 1032, 16), // "tripValueChanged"
QT_MOC_LITERAL(68, 1049, 12), // "current_trip"
QT_MOC_LITERAL(69, 1062, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(70, 1085, 5), // "level"
QT_MOC_LITERAL(71, 1091, 19), // "batteryValueChanged"
QT_MOC_LITERAL(72, 1111, 17), // "angleValueChanged"
QT_MOC_LITERAL(73, 1129, 19), // "currentValueChanged"
QT_MOC_LITERAL(74, 1149, 10), // "uidChanged"
QT_MOC_LITERAL(75, 1160, 16), // "QVector<QString>"
QT_MOC_LITERAL(76, 1177, 12), // "initautoSrvp"
QT_MOC_LITERAL(77, 1190, 8), // "automode"
QT_MOC_LITERAL(78, 1199, 12), // "stopautoSrvp"
QT_MOC_LITERAL(79, 1212, 30), // "abort_grid_mappingValueChanged"
QT_MOC_LITERAL(80, 1243, 31), // "start_grid_scanningValueChanged"
QT_MOC_LITERAL(81, 1275, 7), // "value99"
QT_MOC_LITERAL(82, 1283, 25), // "startGridScanValueChanged"
QT_MOC_LITERAL(83, 1309, 24), // "stopGridScanValueChanged"
QT_MOC_LITERAL(84, 1334, 7), // "value98"
QT_MOC_LITERAL(85, 1342, 13), // "initRosThread"
QT_MOC_LITERAL(86, 1356, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(87, 1378, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(88, 1402, 12), // "getComStatus"
QT_MOC_LITERAL(89, 1415, 12), // "setComStatus"
QT_MOC_LITERAL(90, 1428, 12), // "commCallback"
QT_MOC_LITERAL(91, 1441, 9), // "getposval"
QT_MOC_LITERAL(92, 1451, 9), // "getnegval"
QT_MOC_LITERAL(93, 1461, 9), // "setposval"
QT_MOC_LITERAL(94, 1471, 9), // "setnegval"
QT_MOC_LITERAL(95, 1481, 12), // "getcyclesval"
QT_MOC_LITERAL(96, 1494, 12), // "setcyclesval"
QT_MOC_LITERAL(97, 1507, 20), // "getangularspeedValue"
QT_MOC_LITERAL(98, 1528, 20), // "setangularspeedValue"
QT_MOC_LITERAL(99, 1549, 20), // "angularspeedCallback"
QT_MOC_LITERAL(100, 1570, 20), // "getspeedsettingValue"
QT_MOC_LITERAL(101, 1591, 20), // "setspeedsettingValue"
QT_MOC_LITERAL(102, 1612, 17), // "velstatusCallback"
QT_MOC_LITERAL(103, 1630, 15), // "trig_pause_tree"
QT_MOC_LITERAL(104, 1646, 16), // "pause_treeStatus"
QT_MOC_LITERAL(105, 1663, 14), // "getToggleValue"
QT_MOC_LITERAL(106, 1678, 14), // "setToggleValue"
QT_MOC_LITERAL(107, 1693, 4), // "flag"
QT_MOC_LITERAL(108, 1698, 14), // "toggleCallback"
QT_MOC_LITERAL(109, 1713, 18), // "getcameraInitValue"
QT_MOC_LITERAL(110, 1732, 18), // "setcameraInitValue"
QT_MOC_LITERAL(111, 1751, 1), // "k"
QT_MOC_LITERAL(112, 1753, 13), // "getToolToggle"
QT_MOC_LITERAL(113, 1767, 13), // "setToolToggle"
QT_MOC_LITERAL(114, 1781, 16), // "getArmToolStatus"
QT_MOC_LITERAL(115, 1798, 16), // "setArmToolStatus"
QT_MOC_LITERAL(116, 1815, 15), // "armToolCallback"
QT_MOC_LITERAL(117, 1831, 3), // "arg"
QT_MOC_LITERAL(118, 1835, 15), // "getslideCWValue"
QT_MOC_LITERAL(119, 1851, 15), // "setslideCWValue"
QT_MOC_LITERAL(120, 1867, 16), // "getslideCCWValue"
QT_MOC_LITERAL(121, 1884, 16), // "setslideCCWValue"
QT_MOC_LITERAL(122, 1901, 16), // "getspeedIncrease"
QT_MOC_LITERAL(123, 1918, 16), // "setspeedIncrease"
QT_MOC_LITERAL(124, 1935, 16), // "getjoystickonoff"
QT_MOC_LITERAL(125, 1952, 12), // "getabortauto"
QT_MOC_LITERAL(126, 1965, 16), // "setjoystickonoff"
QT_MOC_LITERAL(127, 1982, 12), // "setabortauto"
QT_MOC_LITERAL(128, 1995, 16), // "getspeedDecrease"
QT_MOC_LITERAL(129, 2012, 16), // "setspeedDecrease"
QT_MOC_LITERAL(130, 2029, 13), // "getlacCWValue"
QT_MOC_LITERAL(131, 2043, 13), // "setlacCWValue"
QT_MOC_LITERAL(132, 2057, 14), // "getlacCCWValue"
QT_MOC_LITERAL(133, 2072, 14), // "setlacCCWValue"
QT_MOC_LITERAL(134, 2087, 17), // "getresetTripValue"
QT_MOC_LITERAL(135, 2105, 17), // "setresetTripValue"
QT_MOC_LITERAL(136, 2123, 13), // "getWaterLevel"
QT_MOC_LITERAL(137, 2137, 13), // "setWaterLevel"
QT_MOC_LITERAL(138, 2151, 15), // "getStopArmValue"
QT_MOC_LITERAL(139, 2167, 15), // "setStopArmValue"
QT_MOC_LITERAL(140, 2183, 14), // "setRstArmValue"
QT_MOC_LITERAL(141, 2198, 14), // "getRstArmValue"
QT_MOC_LITERAL(142, 2213, 12), // "getArmStatus"
QT_MOC_LITERAL(143, 2226, 12), // "setArmStatus"
QT_MOC_LITERAL(144, 2239, 12), // "call_arminit"
QT_MOC_LITERAL(145, 2252, 3), // "val"
QT_MOC_LITERAL(146, 2256, 14), // "trig_armStatus"
QT_MOC_LITERAL(147, 2271, 7), // "rst_arm"
QT_MOC_LITERAL(148, 2279, 11), // "armCallback"
QT_MOC_LITERAL(149, 2291, 7), // "slideCW"
QT_MOC_LITERAL(150, 2299, 8), // "slideCCW"
QT_MOC_LITERAL(151, 2308, 13), // "speedIncrease"
QT_MOC_LITERAL(152, 2322, 13), // "speedDecrease"
QT_MOC_LITERAL(153, 2336, 13), // "joystickonoff"
QT_MOC_LITERAL(154, 2350, 9), // "abortauto"
QT_MOC_LITERAL(155, 2360, 9), // "resetTrip"
QT_MOC_LITERAL(156, 2370, 10), // "cameraInit"
QT_MOC_LITERAL(157, 2381, 5), // "lacCW"
QT_MOC_LITERAL(158, 2387, 6), // "lacCCW"
QT_MOC_LITERAL(159, 2394, 7), // "stopArm"
QT_MOC_LITERAL(160, 2402, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(161, 2422, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(162, 2442, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(163, 2462, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(164, 2482, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(165, 2501, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(166, 2520, 18), // "getshdCrawlerValue"
QT_MOC_LITERAL(167, 2539, 18), // "setshdCrawlerValue"
QT_MOC_LITERAL(168, 2558, 16), // "setstopautoValue"
QT_MOC_LITERAL(169, 2575, 16), // "setinitautoValue"
QT_MOC_LITERAL(170, 2592, 16), // "getstopautoValue"
QT_MOC_LITERAL(171, 2609, 16), // "getinitautoValue"
QT_MOC_LITERAL(172, 2626, 21), // "getrstwaterlevelValue"
QT_MOC_LITERAL(173, 2648, 21), // "setrstwaterlevelValue"
QT_MOC_LITERAL(174, 2670, 12), // "getTempValue"
QT_MOC_LITERAL(175, 2683, 12), // "setTempValue"
QT_MOC_LITERAL(176, 2696, 11), // "getErrValue"
QT_MOC_LITERAL(177, 2708, 11), // "setErrValue"
QT_MOC_LITERAL(178, 2720, 14), // "getCrawlStatus"
QT_MOC_LITERAL(179, 2735, 14), // "setCrawlStatus"
QT_MOC_LITERAL(180, 2750, 11), // "rst_crawler"
QT_MOC_LITERAL(181, 2762, 11), // "shd_crawler"
QT_MOC_LITERAL(182, 2774, 16), // "call_crawlerinit"
QT_MOC_LITERAL(183, 2791, 12), // "call_slidecw"
QT_MOC_LITERAL(184, 2804, 13), // "call_slideccw"
QT_MOC_LITERAL(185, 2818, 10), // "call_laccw"
QT_MOC_LITERAL(186, 2829, 11), // "call_lacccw"
QT_MOC_LITERAL(187, 2841, 18), // "call_speedIncrease"
QT_MOC_LITERAL(188, 2860, 18), // "call_speedDecrease"
QT_MOC_LITERAL(189, 2879, 18), // "call_joystickonoff"
QT_MOC_LITERAL(190, 2898, 14), // "call_abortauto"
QT_MOC_LITERAL(191, 2913, 14), // "call_resetTrip"
QT_MOC_LITERAL(192, 2928, 20), // "call_resetWaterLevel"
QT_MOC_LITERAL(193, 2949, 15), // "call_cameraInit"
QT_MOC_LITERAL(194, 2965, 13), // "errorCallback"
QT_MOC_LITERAL(195, 2979, 12), // "tempCallback"
QT_MOC_LITERAL(196, 2992, 15), // "crawlerCallback"
QT_MOC_LITERAL(197, 3008, 9), // "frontLeft"
QT_MOC_LITERAL(198, 3018, 10), // "frontRight"
QT_MOC_LITERAL(199, 3029, 10), // "backrRight"
QT_MOC_LITERAL(200, 3040, 8), // "backLeft"
QT_MOC_LITERAL(201, 3049, 11), // "initCrawler"
QT_MOC_LITERAL(202, 3061, 11), // "stopCrawler"
QT_MOC_LITERAL(203, 3073, 9), // "stopautop"
QT_MOC_LITERAL(204, 3083, 9), // "initautop"
QT_MOC_LITERAL(205, 3093, 15), // "getBatteryValue"
QT_MOC_LITERAL(206, 3109, 15), // "setBatteryValue"
QT_MOC_LITERAL(207, 3125, 12), // "battCallback"
QT_MOC_LITERAL(208, 3138, 13), // "getAngleValue"
QT_MOC_LITERAL(209, 3152, 13), // "setAngleValue"
QT_MOC_LITERAL(210, 3166, 14), // "angleCallbackp"
QT_MOC_LITERAL(211, 3181, 11), // "velCallback"
QT_MOC_LITERAL(212, 3193, 18), // "current_vel_linear"
QT_MOC_LITERAL(213, 3212, 16), // "getVelocityValue"
QT_MOC_LITERAL(214, 3229, 16), // "setVelocityValue"
QT_MOC_LITERAL(215, 3246, 11), // "lacCallback"
QT_MOC_LITERAL(216, 3258, 11), // "getlacValue"
QT_MOC_LITERAL(217, 3270, 11), // "setlacValue"
QT_MOC_LITERAL(218, 3282, 12), // "odomCallback"
QT_MOC_LITERAL(219, 3295, 12), // "getodomValue"
QT_MOC_LITERAL(220, 3308, 12), // "setodomValue"
QT_MOC_LITERAL(221, 3321, 12), // "tripCallback"
QT_MOC_LITERAL(222, 3334, 12), // "gettripValue"
QT_MOC_LITERAL(223, 3347, 12), // "settripValue"
QT_MOC_LITERAL(224, 3360, 15), // "getCurrentValue"
QT_MOC_LITERAL(225, 3376, 15), // "setCurrentValue"
QT_MOC_LITERAL(226, 3392, 15), // "currentCallback"
QT_MOC_LITERAL(227, 3408, 13), // "waterCallback"
QT_MOC_LITERAL(228, 3422, 6), // "getUid"
QT_MOC_LITERAL(229, 3429, 6), // "setUid"
QT_MOC_LITERAL(230, 3436, 11), // "uidCallback"
QT_MOC_LITERAL(231, 3448, 13), // "call_automode"
QT_MOC_LITERAL(232, 3462, 17), // "call_stopautomode"
QT_MOC_LITERAL(233, 3480, 17), // "call_initautomode"
QT_MOC_LITERAL(234, 3498, 18), // "getpause_treeValue"
QT_MOC_LITERAL(235, 3517, 18), // "setpause_treeValue"
QT_MOC_LITERAL(236, 3536, 26), // "getabort_grid_mappingValue"
QT_MOC_LITERAL(237, 3563, 26), // "setabort_grid_mappingValue"
QT_MOC_LITERAL(238, 3590, 27), // "getstart_grid_scanningValue"
QT_MOC_LITERAL(239, 3618, 27), // "setstart_grid_scanningValue"
QT_MOC_LITERAL(240, 3646, 14), // "call_grid_scan"
QT_MOC_LITERAL(241, 3661, 13), // "startGridScan"
QT_MOC_LITERAL(242, 3675, 21), // "setstartGridScanValue"
QT_MOC_LITERAL(243, 3697, 21), // "getstartGridScanValue"
QT_MOC_LITERAL(244, 3719, 12), // "stopGridScan"
QT_MOC_LITERAL(245, 3732, 20), // "setstopGridScanValue"
QT_MOC_LITERAL(246, 3753, 20), // "getstopGridScanValue"
QT_MOC_LITERAL(247, 3774, 13), // "call_save_CSV"
QT_MOC_LITERAL(248, 3788, 9), // "comStatus"
QT_MOC_LITERAL(249, 3798, 6), // "posval"
QT_MOC_LITERAL(250, 3805, 6), // "negval"
QT_MOC_LITERAL(251, 3812, 9), // "cyclesval"
QT_MOC_LITERAL(252, 3822, 11), // "toggleValue"
QT_MOC_LITERAL(253, 3834, 13), // "armToolStatus"
QT_MOC_LITERAL(254, 3848, 10), // "toolToggle"
QT_MOC_LITERAL(255, 3859, 8), // "lacValue"
QT_MOC_LITERAL(256, 3868, 12), // "stopArmValue"
QT_MOC_LITERAL(257, 3881, 11), // "rstArmValue"
QT_MOC_LITERAL(258, 3893, 9), // "armStatus"
QT_MOC_LITERAL(259, 3903, 16), // "initCrawlerValue"
QT_MOC_LITERAL(260, 3920, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(261, 3937, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(262, 3953, 13), // "stopautoValue"
QT_MOC_LITERAL(263, 3967, 13), // "initautoValue"
QT_MOC_LITERAL(264, 3981, 15), // "shdCrawlerValue"
QT_MOC_LITERAL(265, 3997, 18), // "rstwaterlevelValue"
QT_MOC_LITERAL(266, 4016, 8), // "errValue"
QT_MOC_LITERAL(267, 4025, 9), // "tempValue"
QT_MOC_LITERAL(268, 4035, 11), // "crawlStatus"
QT_MOC_LITERAL(269, 4047, 10), // "waterLevel"
QT_MOC_LITERAL(270, 4058, 15), // "pause_treeValue"
QT_MOC_LITERAL(271, 4074, 13), // "velocityValue"
QT_MOC_LITERAL(272, 4088, 9), // "odomValue"
QT_MOC_LITERAL(273, 4098, 9), // "tripValue"
QT_MOC_LITERAL(274, 4108, 12), // "batteryValue"
QT_MOC_LITERAL(275, 4121, 10), // "angleValue"
QT_MOC_LITERAL(276, 4132, 12), // "anglesetting"
QT_MOC_LITERAL(277, 4145, 12), // "currentValue"
QT_MOC_LITERAL(278, 4158, 3), // "uid"
QT_MOC_LITERAL(279, 4162, 23), // "abort_grid_mappingValue"
QT_MOC_LITERAL(280, 4186, 24), // "start_grid_scanningValue"
QT_MOC_LITERAL(281, 4211, 18), // "startGridScanValue"
QT_MOC_LITERAL(282, 4230, 17) // "stopGridScanValue"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "value7\0value8\0value9\0value10\0value11\0"
    "value12\0value13\0value44\0val4\0"
    "posvalValueChanged\0negvalValueChanged\0"
    "cyclesvalValueChanged\0pause_treeValueChanged\0"
    "speedsettingValueChanged\0speedsetting\0"
    "angularspeedValueChanged\0angularspeed\0"
    "comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "slideCWValueChanged\0slideCCWValueChanged\0"
    "speedIncreaseValueChanged\0"
    "speedDecreaseValueChanged\0"
    "joystickonoffValueChanged\0"
    "abortautoValueChanged\0cameraInitValueChanged\0"
    "lacCWValueChanged\0lacCCWValueChanged\0"
    "lacValueChanged\0lac_value\0"
    "resetTripValueChanged\0rstwaterlevelValueChanged\0"
    "rstArmValueChanged\0stopArmValueChanged\0"
    "stopautoValueChanged\0initautoValueChanged\0"
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
    "QVector<QString>\0initautoSrvp\0automode\0"
    "stopautoSrvp\0abort_grid_mappingValueChanged\0"
    "start_grid_scanningValueChanged\0value99\0"
    "startGridScanValueChanged\0"
    "stopGridScanValueChanged\0value98\0"
    "initRosThread\0on_pushButton_pressed\0"
    "on_pushButton_2_pressed\0getComStatus\0"
    "setComStatus\0commCallback\0getposval\0"
    "getnegval\0setposval\0setnegval\0"
    "getcyclesval\0setcyclesval\0"
    "getangularspeedValue\0setangularspeedValue\0"
    "angularspeedCallback\0getspeedsettingValue\0"
    "setspeedsettingValue\0velstatusCallback\0"
    "trig_pause_tree\0pause_treeStatus\0"
    "getToggleValue\0setToggleValue\0flag\0"
    "toggleCallback\0getcameraInitValue\0"
    "setcameraInitValue\0k\0getToolToggle\0"
    "setToolToggle\0getArmToolStatus\0"
    "setArmToolStatus\0armToolCallback\0arg\0"
    "getslideCWValue\0setslideCWValue\0"
    "getslideCCWValue\0setslideCCWValue\0"
    "getspeedIncrease\0setspeedIncrease\0"
    "getjoystickonoff\0getabortauto\0"
    "setjoystickonoff\0setabortauto\0"
    "getspeedDecrease\0setspeedDecrease\0"
    "getlacCWValue\0setlacCWValue\0getlacCCWValue\0"
    "setlacCCWValue\0getresetTripValue\0"
    "setresetTripValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0speedIncrease\0"
    "speedDecrease\0joystickonoff\0abortauto\0"
    "resetTrip\0cameraInit\0lacCW\0lacCCW\0"
    "stopArm\0getInitCrawlerValue\0"
    "setInitCrawlerValue\0getStopCrawlerValue\0"
    "setStopCrawlerValue\0getRstCrawlerValue\0"
    "setRstCrawlerValue\0getshdCrawlerValue\0"
    "setshdCrawlerValue\0setstopautoValue\0"
    "setinitautoValue\0getstopautoValue\0"
    "getinitautoValue\0getrstwaterlevelValue\0"
    "setrstwaterlevelValue\0getTempValue\0"
    "setTempValue\0getErrValue\0setErrValue\0"
    "getCrawlStatus\0setCrawlStatus\0rst_crawler\0"
    "shd_crawler\0call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
    "call_speedIncrease\0call_speedDecrease\0"
    "call_joystickonoff\0call_abortauto\0"
    "call_resetTrip\0call_resetWaterLevel\0"
    "call_cameraInit\0errorCallback\0"
    "tempCallback\0crawlerCallback\0frontLeft\0"
    "frontRight\0backrRight\0backLeft\0"
    "initCrawler\0stopCrawler\0stopautop\0"
    "initautop\0getBatteryValue\0setBatteryValue\0"
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
    "call_initautomode\0getpause_treeValue\0"
    "setpause_treeValue\0getabort_grid_mappingValue\0"
    "setabort_grid_mappingValue\0"
    "getstart_grid_scanningValue\0"
    "setstart_grid_scanningValue\0call_grid_scan\0"
    "startGridScan\0setstartGridScanValue\0"
    "getstartGridScanValue\0stopGridScan\0"
    "setstopGridScanValue\0getstopGridScanValue\0"
    "call_save_CSV\0comStatus\0posval\0negval\0"
    "cyclesval\0toggleValue\0armToolStatus\0"
    "toolToggle\0lacValue\0stopArmValue\0"
    "rstArmValue\0armStatus\0initCrawlerValue\0"
    "stopCrawlerValue\0rstCrawlerValue\0"
    "stopautoValue\0initautoValue\0shdCrawlerValue\0"
    "rstwaterlevelValue\0errValue\0tempValue\0"
    "crawlStatus\0waterLevel\0pause_treeValue\0"
    "velocityValue\0odomValue\0tripValue\0"
    "batteryValue\0angleValue\0anglesetting\0"
    "currentValue\0uid\0abort_grid_mappingValue\0"
    "start_grid_scanningValue\0startGridScanValue\0"
    "stopGridScanValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     228,   14, // methods
      47, 1742, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      72,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 1154,    2, 0x06 /* Public */,
       4,    1, 1157,    2, 0x06 /* Public */,
       5,    1, 1160,    2, 0x06 /* Public */,
       6,    1, 1163,    2, 0x06 /* Public */,
       7,    1, 1166,    2, 0x06 /* Public */,
       8,    1, 1169,    2, 0x06 /* Public */,
       9,    1, 1172,    2, 0x06 /* Public */,
      10,    1, 1175,    2, 0x06 /* Public */,
      11,    1, 1178,    2, 0x06 /* Public */,
      12,    1, 1181,    2, 0x06 /* Public */,
      13,    1, 1184,    2, 0x06 /* Public */,
      14,    1, 1187,    2, 0x06 /* Public */,
      15,    1, 1190,    2, 0x06 /* Public */,
      16,    1, 1193,    2, 0x06 /* Public */,
      17,    1, 1196,    2, 0x06 /* Public */,
      18,    1, 1199,    2, 0x06 /* Public */,
      20,    1, 1202,    2, 0x06 /* Public */,
      21,    1, 1205,    2, 0x06 /* Public */,
      22,    1, 1208,    2, 0x06 /* Public */,
      23,    1, 1211,    2, 0x06 /* Public */,
      24,    1, 1214,    2, 0x06 /* Public */,
      26,    1, 1217,    2, 0x06 /* Public */,
      28,    1, 1220,    2, 0x06 /* Public */,
      29,    1, 1223,    2, 0x06 /* Public */,
      30,    1, 1226,    2, 0x06 /* Public */,
      31,    1, 1229,    2, 0x06 /* Public */,
      32,    1, 1232,    2, 0x06 /* Public */,
      33,    1, 1235,    2, 0x06 /* Public */,
      34,    1, 1238,    2, 0x06 /* Public */,
      35,    1, 1241,    2, 0x06 /* Public */,
      36,    1, 1244,    2, 0x06 /* Public */,
      37,    1, 1247,    2, 0x06 /* Public */,
      38,    1, 1250,    2, 0x06 /* Public */,
      39,    1, 1253,    2, 0x06 /* Public */,
      40,    1, 1256,    2, 0x06 /* Public */,
      41,    1, 1259,    2, 0x06 /* Public */,
      43,    1, 1262,    2, 0x06 /* Public */,
      44,    1, 1265,    2, 0x06 /* Public */,
      45,    1, 1268,    2, 0x06 /* Public */,
      46,    1, 1271,    2, 0x06 /* Public */,
      47,    1, 1274,    2, 0x06 /* Public */,
      48,    1, 1277,    2, 0x06 /* Public */,
      49,    1, 1280,    2, 0x06 /* Public */,
      50,    0, 1283,    2, 0x06 /* Public */,
      51,    1, 1284,    2, 0x06 /* Public */,
      54,    1, 1287,    2, 0x06 /* Public */,
      55,    1, 1290,    2, 0x06 /* Public */,
      56,    1, 1293,    2, 0x06 /* Public */,
      57,    1, 1296,    2, 0x06 /* Public */,
      58,    1, 1299,    2, 0x06 /* Public */,
      59,    1, 1302,    2, 0x06 /* Public */,
      60,    1, 1305,    2, 0x06 /* Public */,
      61,    1, 1308,    2, 0x06 /* Public */,
      62,    1, 1311,    2, 0x06 /* Public */,
      63,    1, 1314,    2, 0x06 /* Public */,
      64,    1, 1317,    2, 0x06 /* Public */,
      65,    1, 1320,    2, 0x06 /* Public */,
      67,    1, 1323,    2, 0x06 /* Public */,
      69,    1, 1326,    2, 0x06 /* Public */,
      71,    1, 1329,    2, 0x06 /* Public */,
      72,    1, 1332,    2, 0x06 /* Public */,
      73,    1, 1335,    2, 0x06 /* Public */,
      74,    1, 1338,    2, 0x06 /* Public */,
      76,    1, 1341,    2, 0x06 /* Public */,
      77,    1, 1344,    2, 0x06 /* Public */,
      78,    1, 1347,    2, 0x06 /* Public */,
      79,    1, 1350,    2, 0x06 /* Public */,
      80,    1, 1353,    2, 0x06 /* Public */,
      81,    1, 1356,    2, 0x06 /* Public */,
      82,    1, 1359,    2, 0x06 /* Public */,
      83,    1, 1362,    2, 0x06 /* Public */,
      84,    1, 1365,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      85,    0, 1368,    2, 0x0a /* Public */,
      86,    0, 1369,    2, 0x0a /* Public */,
      87,    0, 1370,    2, 0x0a /* Public */,
      88,    0, 1371,    2, 0x0a /* Public */,
      89,    1, 1372,    2, 0x0a /* Public */,
      90,    1, 1375,    2, 0x0a /* Public */,
      91,    0, 1378,    2, 0x0a /* Public */,
      92,    0, 1379,    2, 0x0a /* Public */,
      93,    1, 1380,    2, 0x0a /* Public */,
      94,    1, 1383,    2, 0x0a /* Public */,
      95,    0, 1386,    2, 0x0a /* Public */,
      96,    1, 1387,    2, 0x0a /* Public */,
      97,    0, 1390,    2, 0x0a /* Public */,
      98,    1, 1391,    2, 0x0a /* Public */,
      99,    1, 1394,    2, 0x0a /* Public */,
     100,    0, 1397,    2, 0x0a /* Public */,
     101,    1, 1398,    2, 0x0a /* Public */,
     102,    1, 1401,    2, 0x0a /* Public */,
     103,    1, 1404,    2, 0x0a /* Public */,
     104,    1, 1407,    2, 0x0a /* Public */,
     105,    0, 1410,    2, 0x0a /* Public */,
     106,    1, 1411,    2, 0x0a /* Public */,
     108,    1, 1414,    2, 0x0a /* Public */,
     109,    0, 1417,    2, 0x0a /* Public */,
     110,    1, 1418,    2, 0x0a /* Public */,
     112,    0, 1421,    2, 0x0a /* Public */,
     113,    1, 1422,    2, 0x0a /* Public */,
     114,    0, 1425,    2, 0x0a /* Public */,
     115,    1, 1426,    2, 0x0a /* Public */,
     116,    1, 1429,    2, 0x0a /* Public */,
     118,    0, 1432,    2, 0x0a /* Public */,
     119,    1, 1433,    2, 0x0a /* Public */,
     120,    0, 1436,    2, 0x0a /* Public */,
     121,    1, 1437,    2, 0x0a /* Public */,
     122,    0, 1440,    2, 0x0a /* Public */,
     123,    1, 1441,    2, 0x0a /* Public */,
     124,    0, 1444,    2, 0x0a /* Public */,
     125,    0, 1445,    2, 0x0a /* Public */,
     126,    1, 1446,    2, 0x0a /* Public */,
     127,    1, 1449,    2, 0x0a /* Public */,
     128,    0, 1452,    2, 0x0a /* Public */,
     129,    1, 1453,    2, 0x0a /* Public */,
     130,    0, 1456,    2, 0x0a /* Public */,
     131,    1, 1457,    2, 0x0a /* Public */,
     132,    0, 1460,    2, 0x0a /* Public */,
     133,    1, 1461,    2, 0x0a /* Public */,
     134,    0, 1464,    2, 0x0a /* Public */,
     135,    1, 1465,    2, 0x0a /* Public */,
     136,    0, 1468,    2, 0x0a /* Public */,
     137,    1, 1469,    2, 0x0a /* Public */,
     138,    0, 1472,    2, 0x0a /* Public */,
     139,    1, 1473,    2, 0x0a /* Public */,
     140,    1, 1476,    2, 0x0a /* Public */,
     141,    0, 1479,    2, 0x0a /* Public */,
     142,    0, 1480,    2, 0x0a /* Public */,
     143,    1, 1481,    2, 0x0a /* Public */,
     144,    1, 1484,    2, 0x0a /* Public */,
     146,    0, 1487,    2, 0x0a /* Public */,
     147,    1, 1488,    2, 0x0a /* Public */,
     148,    1, 1491,    2, 0x0a /* Public */,
     149,    1, 1494,    2, 0x0a /* Public */,
     150,    1, 1497,    2, 0x0a /* Public */,
     151,    1, 1500,    2, 0x0a /* Public */,
     152,    1, 1503,    2, 0x0a /* Public */,
     153,    1, 1506,    2, 0x0a /* Public */,
     154,    1, 1509,    2, 0x0a /* Public */,
     155,    1, 1512,    2, 0x0a /* Public */,
     156,    1, 1515,    2, 0x0a /* Public */,
     157,    1, 1518,    2, 0x0a /* Public */,
     158,    1, 1521,    2, 0x0a /* Public */,
     159,    1, 1524,    2, 0x0a /* Public */,
      49,    1, 1527,    2, 0x0a /* Public */,
     160,    0, 1530,    2, 0x0a /* Public */,
     161,    1, 1531,    2, 0x0a /* Public */,
     162,    0, 1534,    2, 0x0a /* Public */,
     163,    1, 1535,    2, 0x0a /* Public */,
     164,    0, 1538,    2, 0x0a /* Public */,
     165,    1, 1539,    2, 0x0a /* Public */,
     166,    0, 1542,    2, 0x0a /* Public */,
     167,    1, 1543,    2, 0x0a /* Public */,
     168,    1, 1546,    2, 0x0a /* Public */,
     169,    1, 1549,    2, 0x0a /* Public */,
     170,    0, 1552,    2, 0x0a /* Public */,
     171,    0, 1553,    2, 0x0a /* Public */,
     172,    0, 1554,    2, 0x0a /* Public */,
     173,    1, 1555,    2, 0x0a /* Public */,
     174,    0, 1558,    2, 0x0a /* Public */,
     175,    1, 1559,    2, 0x0a /* Public */,
     176,    0, 1562,    2, 0x0a /* Public */,
     177,    1, 1563,    2, 0x0a /* Public */,
     178,    0, 1566,    2, 0x0a /* Public */,
     179,    1, 1567,    2, 0x0a /* Public */,
     180,    1, 1570,    2, 0x0a /* Public */,
     181,    1, 1573,    2, 0x0a /* Public */,
     182,    1, 1576,    2, 0x0a /* Public */,
     183,    1, 1579,    2, 0x0a /* Public */,
     184,    1, 1582,    2, 0x0a /* Public */,
     185,    1, 1585,    2, 0x0a /* Public */,
     186,    1, 1588,    2, 0x0a /* Public */,
     187,    1, 1591,    2, 0x0a /* Public */,
     188,    1, 1594,    2, 0x0a /* Public */,
     189,    1, 1597,    2, 0x0a /* Public */,
     190,    1, 1600,    2, 0x0a /* Public */,
     191,    1, 1603,    2, 0x0a /* Public */,
     192,    1, 1606,    2, 0x0a /* Public */,
     193,    1, 1609,    2, 0x0a /* Public */,
     194,    1, 1612,    2, 0x0a /* Public */,
     195,    1, 1615,    2, 0x0a /* Public */,
     196,    4, 1618,    2, 0x0a /* Public */,
     201,    1, 1627,    2, 0x0a /* Public */,
     202,    1, 1630,    2, 0x0a /* Public */,
     203,    1, 1633,    2, 0x0a /* Public */,
     204,    1, 1636,    2, 0x0a /* Public */,
      60,    1, 1639,    2, 0x0a /* Public */,
     205,    0, 1642,    2, 0x0a /* Public */,
     206,    1, 1643,    2, 0x0a /* Public */,
     207,    1, 1646,    2, 0x0a /* Public */,
     208,    0, 1649,    2, 0x0a /* Public */,
     209,    1, 1650,    2, 0x0a /* Public */,
     210,    1, 1653,    2, 0x0a /* Public */,
     211,    1, 1656,    2, 0x0a /* Public */,
     213,    0, 1659,    2, 0x0a /* Public */,
     214,    1, 1660,    2, 0x0a /* Public */,
     215,    1, 1663,    2, 0x0a /* Public */,
     216,    0, 1666,    2, 0x0a /* Public */,
     217,    1, 1667,    2, 0x0a /* Public */,
     218,    1, 1670,    2, 0x0a /* Public */,
     219,    0, 1673,    2, 0x0a /* Public */,
     220,    1, 1674,    2, 0x0a /* Public */,
     221,    1, 1677,    2, 0x0a /* Public */,
     222,    0, 1680,    2, 0x0a /* Public */,
     223,    1, 1681,    2, 0x0a /* Public */,
     224,    0, 1684,    2, 0x0a /* Public */,
     225,    1, 1685,    2, 0x0a /* Public */,
     226,    1, 1688,    2, 0x0a /* Public */,
     227,    1, 1691,    2, 0x0a /* Public */,
     228,    0, 1694,    2, 0x0a /* Public */,
     229,    1, 1695,    2, 0x0a /* Public */,
     230,    1, 1698,    2, 0x0a /* Public */,
     231,    1, 1701,    2, 0x0a /* Public */,
     232,    1, 1704,    2, 0x0a /* Public */,
     233,    1, 1707,    2, 0x0a /* Public */,
     234,    0, 1710,    2, 0x0a /* Public */,
     235,    1, 1711,    2, 0x0a /* Public */,
     236,    0, 1714,    2, 0x0a /* Public */,
     237,    1, 1715,    2, 0x0a /* Public */,
     238,    0, 1718,    2, 0x0a /* Public */,
     239,    1, 1719,    2, 0x0a /* Public */,
     240,    1, 1722,    2, 0x0a /* Public */,
     241,    1, 1725,    2, 0x0a /* Public */,
     242,    1, 1728,    2, 0x0a /* Public */,
     243,    0, 1731,    2, 0x0a /* Public */,
     244,    1, 1732,    2, 0x0a /* Public */,
     245,    1, 1735,    2, 0x0a /* Public */,
     246,    0, 1738,    2, 0x0a /* Public */,
     247,    1, 1739,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   27,
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
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   53,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void, QMetaType::Float,   70,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 75,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  117,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   70,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    0x80000000 | 52,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    0x80000000 | 52,
    QMetaType::Void, 0x80000000 | 52,    5,
    0x80000000 | 52,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, 0x80000000 | 52,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  197,  198,  199,  200,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,  212,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,   70,
    0x80000000 | 75,
    QMetaType::Void, 0x80000000 | 75,    5,
    QMetaType::Void, 0x80000000 | 75,    5,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Int,  145,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,  145,

 // properties: name, type, flags
     248, QMetaType::Int, 0x00495103,
     249, QMetaType::QString, 0x00495003,
     250, QMetaType::QString, 0x00495003,
     251, QMetaType::QString, 0x00495003,
     252, QMetaType::Bool, 0x00495103,
     253, QMetaType::Int, 0x00495103,
     254, QMetaType::QString, 0x00495103,
     156, QMetaType::Bool, 0x00495003,
     149, QMetaType::Bool, 0x00495003,
     150, QMetaType::Bool, 0x00495003,
     151, QMetaType::Bool, 0x00495003,
     152, QMetaType::Bool, 0x00495003,
     153, QMetaType::Bool, 0x00495003,
     154, QMetaType::Bool, 0x00495003,
     157, QMetaType::Bool, 0x00495003,
     158, QMetaType::Bool, 0x00495003,
     255, QMetaType::Int, 0x00495003,
     256, QMetaType::Bool, 0x00495103,
     257, QMetaType::Bool, 0x00495103,
     258, 0x80000000 | 52, 0x0049510b,
     259, QMetaType::Bool, 0x00495103,
     260, QMetaType::Bool, 0x00495103,
     261, QMetaType::Bool, 0x00495103,
     262, QMetaType::Bool, 0x00495003,
     263, QMetaType::Bool, 0x00495003,
     264, QMetaType::Bool, 0x00495003,
     265, QMetaType::Bool, 0x00495003,
     266, 0x80000000 | 52, 0x0049510b,
     267, 0x80000000 | 52, 0x0049510b,
     268, QMetaType::QVariantMap, 0x00495103,
     269, QMetaType::Float, 0x00495103,
     270, QMetaType::Int, 0x00495003,
     271, QMetaType::Int, 0x00495103,
     272, QMetaType::Int, 0x00495003,
     273, QMetaType::Int, 0x00495003,
     155, QMetaType::Int, 0x00495003,
     274, QMetaType::Float, 0x00495103,
     275, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495003,
     276, QMetaType::Int, 0x00495003,
     277, QMetaType::Float, 0x00495103,
     278, 0x80000000 | 75, 0x0049510b,
     270, QMetaType::Int, 0x00495003,
     279, QMetaType::Int, 0x00495003,
     280, QMetaType::Int, 0x00495003,
     281, QMetaType::Bool, 0x00495003,
     282, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
      22,
      16,
      17,
      18,
      23,
      24,
      25,
      32,
      26,
      27,
      28,
      29,
      30,
      31,
      33,
      34,
      35,
      39,
      38,
      44,
      45,
      46,
      47,
      40,
      41,
      48,
      48,
      49,
      50,
      54,
      58,
      19,
      55,
      56,
      57,
      36,
      59,
      60,
      20,
      21,
      61,
      62,
      19,
      66,
      67,
      69,
      70,

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
        case 14: _t->value13((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->value44((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->posvalValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->negvalValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->cyclesvalValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->pause_treeValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->speedsettingValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->angularspeedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->speedIncreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->speedDecreaseValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->joystickonoffValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->abortautoValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->cameraInitValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->lacValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->resetTripValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->rstwaterlevelValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->stopautoValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->initautoValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->trigArmStatusValueChanged(); break;
        case 44: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 45: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->shdCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 50: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 51: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->shdCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->rstWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 55: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->odomValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->tripValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->angleValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->currentValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 63: _t->initautoSrvp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->stopautoSrvp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->abort_grid_mappingValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->start_grid_scanningValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->value99((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->startGridScanValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->stopGridScanValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->value98((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->initRosThread(); break;
        case 73: _t->on_pushButton_pressed(); break;
        case 74: _t->on_pushButton_2_pressed(); break;
        case 75: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: { QString _r = _t->getposval();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 79: { QString _r = _t->getnegval();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->setposval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 81: _t->setnegval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 82: { QString _r = _t->getcyclesval();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setcyclesval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: { int _r = _t->getangularspeedValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->setangularspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->angularspeedCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: { int _r = _t->getspeedsettingValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->setspeedsettingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->velstatusCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->trig_pause_tree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->pause_treeStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: { bool _r = _t->getcameraInitValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setcameraInitValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 99: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 100: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 101: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 106: { bool _r = _t->getspeedIncrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->setspeedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: { bool _r = _t->getjoystickonoff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 109: { bool _r = _t->getabortauto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 110: _t->setjoystickonoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->setabortauto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: { bool _r = _t->getspeedDecrease();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: _t->setspeedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 115: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: { bool _r = _t->getresetTripValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 119: _t->setresetTripValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 121: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 122: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 124: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 125: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 126: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 128: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->trig_armStatus(); break;
        case 130: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 132: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: _t->speedIncrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 135: _t->speedDecrease((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 136: _t->joystickonoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 137: _t->abortauto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 138: _t->resetTrip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 139: _t->cameraInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 143: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 144: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 146: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 147: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 148: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 149: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 150: { bool _r = _t->getshdCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 151: _t->setshdCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 152: _t->setstopautoValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 153: _t->setinitautoValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 154: { bool _r = _t->getstopautoValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 155: { bool _r = _t->getinitautoValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 156: { bool _r = _t->getrstwaterlevelValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 157: _t->setrstwaterlevelValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 158: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 159: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 160: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 161: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 162: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 163: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 164: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 165: _t->shd_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 166: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 167: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 168: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 169: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 170: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 171: _t->call_speedIncrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 172: _t->call_speedDecrease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 173: _t->call_joystickonoff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 174: _t->call_abortauto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 175: _t->call_resetTrip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 176: _t->call_resetWaterLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 177: _t->call_cameraInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 178: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 179: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 180: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 181: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 182: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 183: _t->stopautop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 184: _t->initautop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 185: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 186: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 187: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 188: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 189: { int _r = _t->getAngleValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 190: _t->setAngleValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 191: _t->angleCallbackp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 192: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 193: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 194: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 195: _t->lacCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 196: { int _r = _t->getlacValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 197: _t->setlacValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 198: _t->odomCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 199: { int _r = _t->getodomValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 200: _t->setodomValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 201: _t->tripCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 202: { int _r = _t->gettripValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 203: _t->settripValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 204: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 205: _t->setCurrentValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 206: _t->currentCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 207: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 208: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 209: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 210: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 211: _t->call_automode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 212: _t->call_stopautomode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 213: _t->call_initautomode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 214: { int _r = _t->getpause_treeValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 215: _t->setpause_treeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 216: { bool _r = _t->getabort_grid_mappingValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 217: _t->setabort_grid_mappingValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 218: { bool _r = _t->getstart_grid_scanningValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 219: _t->setstart_grid_scanningValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 220: _t->call_grid_scan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 221: _t->startGridScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 222: _t->setstartGridScanValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 223: { bool _r = _t->getstartGridScanValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 224: _t->stopGridScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 225: _t->setstopGridScanValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 226: { bool _r = _t->getstopGridScanValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 227: _t->call_save_CSV((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 44:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 127:
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
        case 159:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 161:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 178:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 209:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 210:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value13)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value44)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::posvalValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::negvalValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cyclesvalValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::pause_treeValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedsettingValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angularspeedValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedIncreaseValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::speedDecreaseValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::joystickonoffValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::abortautoValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::cameraInitValueChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacValueChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::resetTripValueChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstwaterlevelValueChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopautoValueChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initautoValueChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawlerValueChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::shdCrawler)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstWaterLevel)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::odomValueChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tripValueChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::angleValueChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initautoSrvp)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::automode)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopautoSrvp)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::abort_grid_mappingValueChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::start_grid_scanningValueChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value99)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::startGridScanValueChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopGridScanValueChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::value98)) {
                *result = 71;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 41:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 28:
        case 27:
        case 19:
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
        case 1: *reinterpret_cast< QString*>(_v) = _t->getposval(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getnegval(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getcyclesval(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getToggleValue(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getArmToolStatus(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getToolToggle(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getcameraInitValue(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getslideCWValue(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getslideCCWValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getspeedIncrease(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getspeedDecrease(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getjoystickonoff(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getabortauto(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getlacCWValue(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getlacCCWValue(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getlacValue(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 19: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->getstopautoValue(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->getinitautoValue(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getshdCrawlerValue(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->getrstwaterlevelValue(); break;
        case 27: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 28: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 29: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->getpause_treeValue(); break;
        case 32: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->getodomValue(); break;
        case 34: *reinterpret_cast< int*>(_v) = _t->gettripValue(); break;
        case 35: *reinterpret_cast< int*>(_v) = _t->getresetTripValue(); break;
        case 36: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 37: *reinterpret_cast< int*>(_v) = _t->getAngleValue(); break;
        case 38: *reinterpret_cast< int*>(_v) = _t->getspeedsettingValue(); break;
        case 39: *reinterpret_cast< int*>(_v) = _t->getangularspeedValue(); break;
        case 40: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 41: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
        case 42: *reinterpret_cast< int*>(_v) = _t->getpause_treeValue(); break;
        case 43: *reinterpret_cast< int*>(_v) = _t->getabort_grid_mappingValue(); break;
        case 44: *reinterpret_cast< int*>(_v) = _t->getstart_grid_scanningValue(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->getstartGridScanValue(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->getstopGridScanValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Publisher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setComStatus(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setposval(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setnegval(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setcyclesval(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setToggleValue(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setArmToolStatus(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setToolToggle(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setcameraInitValue(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setslideCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setslideCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setspeedIncrease(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setspeedDecrease(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setjoystickonoff(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setabortauto(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setlacCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setlacCCWValue(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setlacValue(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 20: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setstopautoValue(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setinitautoValue(*reinterpret_cast< bool*>(_v)); break;
        case 25: _t->setshdCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setshdCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 28: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 29: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 30: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setpause_treeValue(*reinterpret_cast< int*>(_v)); break;
        case 32: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 33: _t->setodomValue(*reinterpret_cast< int*>(_v)); break;
        case 34: _t->settripValue(*reinterpret_cast< int*>(_v)); break;
        case 35: _t->setresetTripValue(*reinterpret_cast< int*>(_v)); break;
        case 36: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 37: _t->setAngleValue(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->setspeedsettingValue(*reinterpret_cast< int*>(_v)); break;
        case 39: _t->setangularspeedValue(*reinterpret_cast< int*>(_v)); break;
        case 40: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 41: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
        case 42: _t->setpause_treeValue(*reinterpret_cast< int*>(_v)); break;
        case 43: _t->setabort_grid_mappingValue(*reinterpret_cast< int*>(_v)); break;
        case 44: _t->setstart_grid_scanningValue(*reinterpret_cast< int*>(_v)); break;
        case 45: _t->setstartGridScanValue(*reinterpret_cast< bool*>(_v)); break;
        case 46: _t->setstopGridScanValue(*reinterpret_cast< bool*>(_v)); break;
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
        if (_id < 228)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 228;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 228)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 228;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 47;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 47;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 47;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 47;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 47;
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
void Publisher::value13(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::value44(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::posvalValueChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::negvalValueChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::cyclesvalValueChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::pause_treeValueChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::speedsettingValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::angularspeedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::speedIncreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::speedDecreaseValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::joystickonoffValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::abortautoValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::cameraInitValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::lacValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::resetTripValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::rstwaterlevelValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Publisher::stopautoValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Publisher::initautoValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Publisher::shdCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Publisher::shdCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Publisher::rstWaterLevel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Publisher::odomValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Publisher::tripValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Publisher::angleValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Publisher::currentValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Publisher::initautoSrvp(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Publisher::automode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Publisher::stopautoSrvp(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Publisher::abort_grid_mappingValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Publisher::start_grid_scanningValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Publisher::value99(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Publisher::startGridScanValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Publisher::stopGridScanValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Publisher::value98(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
