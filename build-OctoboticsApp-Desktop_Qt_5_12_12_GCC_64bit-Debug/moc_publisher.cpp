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
    QByteArrayData data[166];
    char stringdata0[2202];
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
QT_MOC_LITERAL(11, 73, 16), // "comStatusChanged"
QT_MOC_LITERAL(12, 90, 18), // "toggleValueChanged"
QT_MOC_LITERAL(13, 109, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(14, 130, 17), // "toolToggleChanged"
QT_MOC_LITERAL(15, 148, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(16, 168, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(17, 189, 17), // "lacCWValueChanged"
QT_MOC_LITERAL(18, 207, 18), // "lacCCWValueChanged"
QT_MOC_LITERAL(19, 226, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(20, 245, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(21, 265, 6), // "rstArm"
QT_MOC_LITERAL(22, 272, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(23, 298, 16), // "armStatusChanged"
QT_MOC_LITERAL(24, 315, 12), // "QVector<int>"
QT_MOC_LITERAL(25, 328, 6), // "status"
QT_MOC_LITERAL(26, 335, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(27, 359, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(28, 383, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(29, 406, 15), // "errValueChanged"
QT_MOC_LITERAL(30, 422, 16), // "tempValueChanged"
QT_MOC_LITERAL(31, 439, 10), // "rstCrawler"
QT_MOC_LITERAL(32, 450, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(33, 469, 20), // "velocityValueChanged"
QT_MOC_LITERAL(34, 490, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(35, 513, 5), // "level"
QT_MOC_LITERAL(36, 519, 19), // "batteryValueChanged"
QT_MOC_LITERAL(37, 539, 19), // "currentValueChanged"
QT_MOC_LITERAL(38, 559, 15), // "utstatusChanged"
QT_MOC_LITERAL(39, 575, 16), // "thicknessChanged"
QT_MOC_LITERAL(40, 592, 12), // "utVelChanged"
QT_MOC_LITERAL(41, 605, 13), // "utDataChanged"
QT_MOC_LITERAL(42, 619, 10), // "uidChanged"
QT_MOC_LITERAL(43, 630, 16), // "QVector<QString>"
QT_MOC_LITERAL(44, 647, 6), // "capImg"
QT_MOC_LITERAL(45, 654, 13), // "initRosThread"
QT_MOC_LITERAL(46, 668, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(47, 690, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(48, 714, 12), // "getComStatus"
QT_MOC_LITERAL(49, 727, 12), // "setComStatus"
QT_MOC_LITERAL(50, 740, 12), // "commCallback"
QT_MOC_LITERAL(51, 753, 14), // "getToggleValue"
QT_MOC_LITERAL(52, 768, 14), // "setToggleValue"
QT_MOC_LITERAL(53, 783, 4), // "flag"
QT_MOC_LITERAL(54, 788, 14), // "toggleCallback"
QT_MOC_LITERAL(55, 803, 13), // "getToolToggle"
QT_MOC_LITERAL(56, 817, 13), // "setToolToggle"
QT_MOC_LITERAL(57, 831, 16), // "getArmToolStatus"
QT_MOC_LITERAL(58, 848, 16), // "setArmToolStatus"
QT_MOC_LITERAL(59, 865, 15), // "armToolCallback"
QT_MOC_LITERAL(60, 881, 3), // "arg"
QT_MOC_LITERAL(61, 885, 15), // "getslideCWValue"
QT_MOC_LITERAL(62, 901, 15), // "setslideCWValue"
QT_MOC_LITERAL(63, 917, 1), // "k"
QT_MOC_LITERAL(64, 919, 16), // "getslideCCWValue"
QT_MOC_LITERAL(65, 936, 16), // "setslideCCWValue"
QT_MOC_LITERAL(66, 953, 13), // "getlacCWValue"
QT_MOC_LITERAL(67, 967, 13), // "setlacCWValue"
QT_MOC_LITERAL(68, 981, 14), // "getlacCCWValue"
QT_MOC_LITERAL(69, 996, 14), // "setlacCCWValue"
QT_MOC_LITERAL(70, 1011, 13), // "getWaterLevel"
QT_MOC_LITERAL(71, 1025, 13), // "setWaterLevel"
QT_MOC_LITERAL(72, 1039, 15), // "getStopArmValue"
QT_MOC_LITERAL(73, 1055, 15), // "setStopArmValue"
QT_MOC_LITERAL(74, 1071, 14), // "setRstArmValue"
QT_MOC_LITERAL(75, 1086, 14), // "getRstArmValue"
QT_MOC_LITERAL(76, 1101, 12), // "getArmStatus"
QT_MOC_LITERAL(77, 1114, 12), // "setArmStatus"
QT_MOC_LITERAL(78, 1127, 12), // "call_arminit"
QT_MOC_LITERAL(79, 1140, 3), // "val"
QT_MOC_LITERAL(80, 1144, 14), // "trig_armStatus"
QT_MOC_LITERAL(81, 1159, 7), // "rst_arm"
QT_MOC_LITERAL(82, 1167, 11), // "armCallback"
QT_MOC_LITERAL(83, 1179, 7), // "slideCW"
QT_MOC_LITERAL(84, 1187, 8), // "slideCCW"
QT_MOC_LITERAL(85, 1196, 5), // "lacCW"
QT_MOC_LITERAL(86, 1202, 6), // "lacCCW"
QT_MOC_LITERAL(87, 1209, 7), // "stopArm"
QT_MOC_LITERAL(88, 1217, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(89, 1237, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(90, 1257, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(91, 1277, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(92, 1297, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(93, 1316, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(94, 1335, 12), // "getTempValue"
QT_MOC_LITERAL(95, 1348, 12), // "setTempValue"
QT_MOC_LITERAL(96, 1361, 11), // "getErrValue"
QT_MOC_LITERAL(97, 1373, 11), // "setErrValue"
QT_MOC_LITERAL(98, 1385, 14), // "getCrawlStatus"
QT_MOC_LITERAL(99, 1400, 14), // "setCrawlStatus"
QT_MOC_LITERAL(100, 1415, 11), // "rst_crawler"
QT_MOC_LITERAL(101, 1427, 16), // "call_crawlerinit"
QT_MOC_LITERAL(102, 1444, 12), // "call_slidecw"
QT_MOC_LITERAL(103, 1457, 13), // "call_slideccw"
QT_MOC_LITERAL(104, 1471, 10), // "call_laccw"
QT_MOC_LITERAL(105, 1482, 11), // "call_lacccw"
QT_MOC_LITERAL(106, 1494, 13), // "errorCallback"
QT_MOC_LITERAL(107, 1508, 12), // "tempCallback"
QT_MOC_LITERAL(108, 1521, 15), // "crawlerCallback"
QT_MOC_LITERAL(109, 1537, 9), // "frontLeft"
QT_MOC_LITERAL(110, 1547, 10), // "frontRight"
QT_MOC_LITERAL(111, 1558, 10), // "backrRight"
QT_MOC_LITERAL(112, 1569, 8), // "backLeft"
QT_MOC_LITERAL(113, 1578, 11), // "initCrawler"
QT_MOC_LITERAL(114, 1590, 11), // "stopCrawler"
QT_MOC_LITERAL(115, 1602, 15), // "getBatteryValue"
QT_MOC_LITERAL(116, 1618, 15), // "setBatteryValue"
QT_MOC_LITERAL(117, 1634, 12), // "battCallback"
QT_MOC_LITERAL(118, 1647, 11), // "velCallback"
QT_MOC_LITERAL(119, 1659, 18), // "current_vel_linear"
QT_MOC_LITERAL(120, 1678, 16), // "getVelocityValue"
QT_MOC_LITERAL(121, 1695, 16), // "setVelocityValue"
QT_MOC_LITERAL(122, 1712, 15), // "getCurrentValue"
QT_MOC_LITERAL(123, 1728, 15), // "setCurrentValue"
QT_MOC_LITERAL(124, 1744, 15), // "currentCallback"
QT_MOC_LITERAL(125, 1760, 13), // "waterCallback"
QT_MOC_LITERAL(126, 1774, 9), // "getUtData"
QT_MOC_LITERAL(127, 1784, 9), // "setUtData"
QT_MOC_LITERAL(128, 1794, 8), // "getUtVel"
QT_MOC_LITERAL(129, 1803, 8), // "setUtVel"
QT_MOC_LITERAL(130, 1812, 11), // "getUtstatus"
QT_MOC_LITERAL(131, 1824, 11), // "setUtstatus"
QT_MOC_LITERAL(132, 1836, 12), // "getThickness"
QT_MOC_LITERAL(133, 1849, 12), // "setThickness"
QT_MOC_LITERAL(134, 1862, 10), // "utCallback"
QT_MOC_LITERAL(135, 1873, 3), // "vel"
QT_MOC_LITERAL(136, 1877, 8), // "deepcoat"
QT_MOC_LITERAL(137, 1886, 4), // "echo"
QT_MOC_LITERAL(138, 1891, 17), // "thicknessCallback"
QT_MOC_LITERAL(139, 1909, 9), // "thickness"
QT_MOC_LITERAL(140, 1919, 4), // "unit"
QT_MOC_LITERAL(141, 1924, 6), // "getUid"
QT_MOC_LITERAL(142, 1931, 6), // "setUid"
QT_MOC_LITERAL(143, 1938, 11), // "uidCallback"
QT_MOC_LITERAL(144, 1950, 11), // "call_capImg"
QT_MOC_LITERAL(145, 1962, 9), // "comStatus"
QT_MOC_LITERAL(146, 1972, 11), // "toggleValue"
QT_MOC_LITERAL(147, 1984, 13), // "armToolStatus"
QT_MOC_LITERAL(148, 1998, 10), // "toolToggle"
QT_MOC_LITERAL(149, 2009, 12), // "stopArmValue"
QT_MOC_LITERAL(150, 2022, 11), // "rstArmValue"
QT_MOC_LITERAL(151, 2034, 9), // "armStatus"
QT_MOC_LITERAL(152, 2044, 16), // "initCrawlerValue"
QT_MOC_LITERAL(153, 2061, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(154, 2078, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(155, 2094, 8), // "errValue"
QT_MOC_LITERAL(156, 2103, 9), // "tempValue"
QT_MOC_LITERAL(157, 2113, 11), // "crawlStatus"
QT_MOC_LITERAL(158, 2125, 10), // "waterLevel"
QT_MOC_LITERAL(159, 2136, 13), // "velocityValue"
QT_MOC_LITERAL(160, 2150, 12), // "batteryValue"
QT_MOC_LITERAL(161, 2163, 12), // "currentValue"
QT_MOC_LITERAL(162, 2176, 6), // "utData"
QT_MOC_LITERAL(163, 2183, 5), // "utVel"
QT_MOC_LITERAL(164, 2189, 8), // "utstatus"
QT_MOC_LITERAL(165, 2198, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0value5\0value6\0"
    "comStatusChanged\0toggleValueChanged\0"
    "armToolStatusChanged\0toolToggleChanged\0"
    "slideCWValueChanged\0slideCCWValueChanged\0"
    "lacCWValueChanged\0lacCCWValueChanged\0"
    "rstArmValueChanged\0stopArmValueChanged\0"
    "rstArm\0trigArmStatusValueChanged\0"
    "armStatusChanged\0QVector<int>\0status\0"
    "initCrawlerValueChanged\0stopCrawlerValueChanged\0"
    "rstCrawlerValueChanged\0errValueChanged\0"
    "tempValueChanged\0rstCrawler\0"
    "crawlStatusChanged\0velocityValueChanged\0"
    "waterlevelValueChanged\0level\0"
    "batteryValueChanged\0currentValueChanged\0"
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
    "setlacCCWValue\0getWaterLevel\0setWaterLevel\0"
    "getStopArmValue\0setStopArmValue\0"
    "setRstArmValue\0getRstArmValue\0"
    "getArmStatus\0setArmStatus\0call_arminit\0"
    "val\0trig_armStatus\0rst_arm\0armCallback\0"
    "slideCW\0slideCCW\0lacCW\0lacCCW\0stopArm\0"
    "getInitCrawlerValue\0setInitCrawlerValue\0"
    "getStopCrawlerValue\0setStopCrawlerValue\0"
    "getRstCrawlerValue\0setRstCrawlerValue\0"
    "getTempValue\0setTempValue\0getErrValue\0"
    "setErrValue\0getCrawlStatus\0setCrawlStatus\0"
    "rst_crawler\0call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0call_laccw\0call_lacccw\0"
    "errorCallback\0tempCallback\0crawlerCallback\0"
    "frontLeft\0frontRight\0backrRight\0"
    "backLeft\0initCrawler\0stopCrawler\0"
    "getBatteryValue\0setBatteryValue\0"
    "battCallback\0velCallback\0current_vel_linear\0"
    "getVelocityValue\0setVelocityValue\0"
    "getCurrentValue\0setCurrentValue\0"
    "currentCallback\0waterCallback\0getUtData\0"
    "setUtData\0getUtVel\0setUtVel\0getUtstatus\0"
    "setUtstatus\0getThickness\0setThickness\0"
    "utCallback\0vel\0deepcoat\0echo\0"
    "thicknessCallback\0thickness\0unit\0"
    "getUid\0setUid\0uidCallback\0call_capImg\0"
    "comStatus\0toggleValue\0armToolStatus\0"
    "toolToggle\0stopArmValue\0rstArmValue\0"
    "armStatus\0initCrawlerValue\0stopCrawlerValue\0"
    "rstCrawlerValue\0errValue\0tempValue\0"
    "crawlStatus\0waterLevel\0velocityValue\0"
    "batteryValue\0currentValue\0utData\0utVel\0"
    "utstatus\0uid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Publisher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     126,   14, // methods
      26,  972, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      38,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  644,    2, 0x06 /* Public */,
       4,    1,  647,    2, 0x06 /* Public */,
       5,    1,  650,    2, 0x06 /* Public */,
       6,    1,  653,    2, 0x06 /* Public */,
       7,    1,  656,    2, 0x06 /* Public */,
       8,    1,  659,    2, 0x06 /* Public */,
       9,    1,  662,    2, 0x06 /* Public */,
      10,    1,  665,    2, 0x06 /* Public */,
      11,    1,  668,    2, 0x06 /* Public */,
      12,    1,  671,    2, 0x06 /* Public */,
      13,    1,  674,    2, 0x06 /* Public */,
      14,    1,  677,    2, 0x06 /* Public */,
      15,    1,  680,    2, 0x06 /* Public */,
      16,    1,  683,    2, 0x06 /* Public */,
      17,    1,  686,    2, 0x06 /* Public */,
      18,    1,  689,    2, 0x06 /* Public */,
      19,    1,  692,    2, 0x06 /* Public */,
      20,    1,  695,    2, 0x06 /* Public */,
      21,    1,  698,    2, 0x06 /* Public */,
      22,    0,  701,    2, 0x06 /* Public */,
      23,    1,  702,    2, 0x06 /* Public */,
      26,    1,  705,    2, 0x06 /* Public */,
      27,    1,  708,    2, 0x06 /* Public */,
      28,    1,  711,    2, 0x06 /* Public */,
      29,    1,  714,    2, 0x06 /* Public */,
      30,    1,  717,    2, 0x06 /* Public */,
      31,    1,  720,    2, 0x06 /* Public */,
      32,    1,  723,    2, 0x06 /* Public */,
      33,    1,  726,    2, 0x06 /* Public */,
      34,    1,  729,    2, 0x06 /* Public */,
      36,    1,  732,    2, 0x06 /* Public */,
      37,    1,  735,    2, 0x06 /* Public */,
      38,    1,  738,    2, 0x06 /* Public */,
      39,    1,  741,    2, 0x06 /* Public */,
      40,    1,  744,    2, 0x06 /* Public */,
      41,    1,  747,    2, 0x06 /* Public */,
      42,    1,  750,    2, 0x06 /* Public */,
      44,    1,  753,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      45,    0,  756,    2, 0x0a /* Public */,
      46,    0,  757,    2, 0x0a /* Public */,
      47,    0,  758,    2, 0x0a /* Public */,
      48,    0,  759,    2, 0x0a /* Public */,
      49,    1,  760,    2, 0x0a /* Public */,
      50,    1,  763,    2, 0x0a /* Public */,
      51,    0,  766,    2, 0x0a /* Public */,
      52,    1,  767,    2, 0x0a /* Public */,
      54,    1,  770,    2, 0x0a /* Public */,
      55,    0,  773,    2, 0x0a /* Public */,
      56,    1,  774,    2, 0x0a /* Public */,
      57,    0,  777,    2, 0x0a /* Public */,
      58,    1,  778,    2, 0x0a /* Public */,
      59,    1,  781,    2, 0x0a /* Public */,
      61,    0,  784,    2, 0x0a /* Public */,
      62,    1,  785,    2, 0x0a /* Public */,
      64,    0,  788,    2, 0x0a /* Public */,
      65,    1,  789,    2, 0x0a /* Public */,
      66,    0,  792,    2, 0x0a /* Public */,
      67,    1,  793,    2, 0x0a /* Public */,
      68,    0,  796,    2, 0x0a /* Public */,
      69,    1,  797,    2, 0x0a /* Public */,
      70,    0,  800,    2, 0x0a /* Public */,
      71,    1,  801,    2, 0x0a /* Public */,
      72,    0,  804,    2, 0x0a /* Public */,
      73,    1,  805,    2, 0x0a /* Public */,
      74,    1,  808,    2, 0x0a /* Public */,
      75,    0,  811,    2, 0x0a /* Public */,
      76,    0,  812,    2, 0x0a /* Public */,
      77,    1,  813,    2, 0x0a /* Public */,
      78,    1,  816,    2, 0x0a /* Public */,
      80,    0,  819,    2, 0x0a /* Public */,
      81,    1,  820,    2, 0x0a /* Public */,
      82,    1,  823,    2, 0x0a /* Public */,
      83,    1,  826,    2, 0x0a /* Public */,
      84,    1,  829,    2, 0x0a /* Public */,
      85,    1,  832,    2, 0x0a /* Public */,
      86,    1,  835,    2, 0x0a /* Public */,
      87,    1,  838,    2, 0x0a /* Public */,
      21,    1,  841,    2, 0x0a /* Public */,
      88,    0,  844,    2, 0x0a /* Public */,
      89,    1,  845,    2, 0x0a /* Public */,
      90,    0,  848,    2, 0x0a /* Public */,
      91,    1,  849,    2, 0x0a /* Public */,
      92,    0,  852,    2, 0x0a /* Public */,
      93,    1,  853,    2, 0x0a /* Public */,
      94,    0,  856,    2, 0x0a /* Public */,
      95,    1,  857,    2, 0x0a /* Public */,
      96,    0,  860,    2, 0x0a /* Public */,
      97,    1,  861,    2, 0x0a /* Public */,
      98,    0,  864,    2, 0x0a /* Public */,
      99,    1,  865,    2, 0x0a /* Public */,
     100,    1,  868,    2, 0x0a /* Public */,
     101,    1,  871,    2, 0x0a /* Public */,
     102,    1,  874,    2, 0x0a /* Public */,
     103,    1,  877,    2, 0x0a /* Public */,
     104,    1,  880,    2, 0x0a /* Public */,
     105,    1,  883,    2, 0x0a /* Public */,
     106,    1,  886,    2, 0x0a /* Public */,
     107,    1,  889,    2, 0x0a /* Public */,
     108,    4,  892,    2, 0x0a /* Public */,
     113,    1,  901,    2, 0x0a /* Public */,
     114,    1,  904,    2, 0x0a /* Public */,
      31,    1,  907,    2, 0x0a /* Public */,
     115,    0,  910,    2, 0x0a /* Public */,
     116,    1,  911,    2, 0x0a /* Public */,
     117,    1,  914,    2, 0x0a /* Public */,
     118,    1,  917,    2, 0x0a /* Public */,
     120,    0,  920,    2, 0x0a /* Public */,
     121,    1,  921,    2, 0x0a /* Public */,
     122,    0,  924,    2, 0x0a /* Public */,
     123,    1,  925,    2, 0x0a /* Public */,
     124,    1,  928,    2, 0x0a /* Public */,
     125,    1,  931,    2, 0x0a /* Public */,
     126,    0,  934,    2, 0x0a /* Public */,
     127,    1,  935,    2, 0x0a /* Public */,
     128,    0,  938,    2, 0x0a /* Public */,
     129,    1,  939,    2, 0x0a /* Public */,
     130,    0,  942,    2, 0x0a /* Public */,
     131,    1,  943,    2, 0x0a /* Public */,
     132,    0,  946,    2, 0x0a /* Public */,
     133,    1,  947,    2, 0x0a /* Public */,
     134,    3,  950,    2, 0x0a /* Public */,
     138,    2,  957,    2, 0x0a /* Public */,
     141,    0,  962,    2, 0x0a /* Public */,
     142,    1,  963,    2, 0x0a /* Public */,
     143,    1,  966,    2, 0x0a /* Public */,
     144,    1,  969,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   25,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   25,
    QMetaType::Void, QMetaType::QVariantMap,   25,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, 0x80000000 | 24,   25,
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
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 24,    5,
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::Void, 0x80000000 | 24,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  109,  110,  111,  112,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  135,  136,  137,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  139,  140,
    0x80000000 | 43,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, 0x80000000 | 43,    5,
    QMetaType::Void, QMetaType::Int,   79,

 // properties: name, type, flags
     145, QMetaType::Int, 0x00495103,
     146, QMetaType::Bool, 0x00495103,
     147, QMetaType::Int, 0x00495103,
     148, QMetaType::QString, 0x00495103,
      83, QMetaType::Bool, 0x00495003,
      84, QMetaType::Bool, 0x00495003,
      85, QMetaType::Bool, 0x00495003,
      86, QMetaType::Bool, 0x00495003,
     149, QMetaType::Bool, 0x00495103,
     150, QMetaType::Bool, 0x00495103,
     151, 0x80000000 | 24, 0x0049510b,
     152, QMetaType::Bool, 0x00495103,
     153, QMetaType::Bool, 0x00495103,
     154, QMetaType::Bool, 0x00495103,
     155, 0x80000000 | 24, 0x0049510b,
     156, 0x80000000 | 24, 0x0049510b,
     157, QMetaType::QVariantMap, 0x00495103,
     158, QMetaType::Float, 0x00495103,
     159, QMetaType::Int, 0x00495103,
     160, QMetaType::Float, 0x00495103,
     161, QMetaType::Float, 0x00495103,
     162, QMetaType::QString, 0x00495103,
     163, QMetaType::QString, 0x00495103,
     164, QMetaType::QVariantMap, 0x00495103,
     139, QMetaType::QVariantMap, 0x00495103,
     165, 0x80000000 | 43, 0x0049510b,

 // properties: notify_signal_id
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      17,
      16,
      20,
      21,
      22,
      23,
      24,
      25,
      27,
      29,
      28,
      30,
      31,
      35,
      34,
      32,
      33,
      36,

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
        case 8: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->lacCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->lacCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->trigArmStatusValueChanged(); break;
        case 20: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 21: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 25: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 26: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 28: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 33: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 34: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 37: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->initRosThread(); break;
        case 39: _t->on_pushButton_pressed(); break;
        case 40: _t->on_pushButton_2_pressed(); break;
        case 41: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 42: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: { bool _r = _t->getlacCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->setlacCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getlacCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setlacCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 62: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 68: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->trig_armStatus(); break;
        case 70: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 72: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->lacCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->lacCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 86: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 87: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 88: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 90: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->call_laccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->call_lacccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 97: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 98: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 99: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 104: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 105: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 109: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 110: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 111: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 112: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 113: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 114: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 115: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 116: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 118: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 119: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 120: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 121: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 122: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 123: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 124: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 125: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 25:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 71:
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
        case 87:
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
        case 97:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 124:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCWValueChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::lacCCWValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 37;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 15:
        case 14:
        case 10:
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
        case 8: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 10: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 14: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 15: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 16: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 23: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 24: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 25: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 8: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 11: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 15: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 16: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 17: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 23: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 24: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 25: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 126)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 126;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 126)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 126;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 26;
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
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::lacCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::lacCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
