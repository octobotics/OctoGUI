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
    QByteArrayData data[154];
    char stringdata0[2057];
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
QT_MOC_LITERAL(9, 59, 16), // "comStatusChanged"
QT_MOC_LITERAL(10, 76, 18), // "toggleValueChanged"
QT_MOC_LITERAL(11, 95, 20), // "armToolStatusChanged"
QT_MOC_LITERAL(12, 116, 17), // "toolToggleChanged"
QT_MOC_LITERAL(13, 134, 19), // "slideCWValueChanged"
QT_MOC_LITERAL(14, 154, 20), // "slideCCWValueChanged"
QT_MOC_LITERAL(15, 175, 18), // "rstArmValueChanged"
QT_MOC_LITERAL(16, 194, 19), // "stopArmValueChanged"
QT_MOC_LITERAL(17, 214, 6), // "rstArm"
QT_MOC_LITERAL(18, 221, 25), // "trigArmStatusValueChanged"
QT_MOC_LITERAL(19, 247, 16), // "armStatusChanged"
QT_MOC_LITERAL(20, 264, 12), // "QVector<int>"
QT_MOC_LITERAL(21, 277, 6), // "status"
QT_MOC_LITERAL(22, 284, 23), // "initCrawlerValueChanged"
QT_MOC_LITERAL(23, 308, 23), // "stopCrawlerValueChanged"
QT_MOC_LITERAL(24, 332, 22), // "rstCrawlerValueChanged"
QT_MOC_LITERAL(25, 355, 15), // "errValueChanged"
QT_MOC_LITERAL(26, 371, 16), // "tempValueChanged"
QT_MOC_LITERAL(27, 388, 10), // "rstCrawler"
QT_MOC_LITERAL(28, 399, 18), // "crawlStatusChanged"
QT_MOC_LITERAL(29, 418, 20), // "velocityValueChanged"
QT_MOC_LITERAL(30, 439, 22), // "waterlevelValueChanged"
QT_MOC_LITERAL(31, 462, 5), // "level"
QT_MOC_LITERAL(32, 468, 19), // "batteryValueChanged"
QT_MOC_LITERAL(33, 488, 19), // "currentValueChanged"
QT_MOC_LITERAL(34, 508, 15), // "utstatusChanged"
QT_MOC_LITERAL(35, 524, 16), // "thicknessChanged"
QT_MOC_LITERAL(36, 541, 12), // "utVelChanged"
QT_MOC_LITERAL(37, 554, 13), // "utDataChanged"
QT_MOC_LITERAL(38, 568, 10), // "uidChanged"
QT_MOC_LITERAL(39, 579, 16), // "QVector<QString>"
QT_MOC_LITERAL(40, 596, 6), // "capImg"
QT_MOC_LITERAL(41, 603, 13), // "initRosThread"
QT_MOC_LITERAL(42, 617, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(43, 639, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(44, 663, 12), // "getComStatus"
QT_MOC_LITERAL(45, 676, 12), // "setComStatus"
QT_MOC_LITERAL(46, 689, 12), // "commCallback"
QT_MOC_LITERAL(47, 702, 14), // "getToggleValue"
QT_MOC_LITERAL(48, 717, 14), // "setToggleValue"
QT_MOC_LITERAL(49, 732, 4), // "flag"
QT_MOC_LITERAL(50, 737, 14), // "toggleCallback"
QT_MOC_LITERAL(51, 752, 13), // "getToolToggle"
QT_MOC_LITERAL(52, 766, 13), // "setToolToggle"
QT_MOC_LITERAL(53, 780, 16), // "getArmToolStatus"
QT_MOC_LITERAL(54, 797, 16), // "setArmToolStatus"
QT_MOC_LITERAL(55, 814, 15), // "armToolCallback"
QT_MOC_LITERAL(56, 830, 3), // "arg"
QT_MOC_LITERAL(57, 834, 15), // "getslideCWValue"
QT_MOC_LITERAL(58, 850, 15), // "setslideCWValue"
QT_MOC_LITERAL(59, 866, 1), // "k"
QT_MOC_LITERAL(60, 868, 16), // "getslideCCWValue"
QT_MOC_LITERAL(61, 885, 16), // "setslideCCWValue"
QT_MOC_LITERAL(62, 902, 13), // "getWaterLevel"
QT_MOC_LITERAL(63, 916, 13), // "setWaterLevel"
QT_MOC_LITERAL(64, 930, 15), // "getStopArmValue"
QT_MOC_LITERAL(65, 946, 15), // "setStopArmValue"
QT_MOC_LITERAL(66, 962, 14), // "setRstArmValue"
QT_MOC_LITERAL(67, 977, 14), // "getRstArmValue"
QT_MOC_LITERAL(68, 992, 12), // "getArmStatus"
QT_MOC_LITERAL(69, 1005, 12), // "setArmStatus"
QT_MOC_LITERAL(70, 1018, 12), // "call_arminit"
QT_MOC_LITERAL(71, 1031, 3), // "val"
QT_MOC_LITERAL(72, 1035, 14), // "trig_armStatus"
QT_MOC_LITERAL(73, 1050, 7), // "rst_arm"
QT_MOC_LITERAL(74, 1058, 11), // "armCallback"
QT_MOC_LITERAL(75, 1070, 7), // "slideCW"
QT_MOC_LITERAL(76, 1078, 8), // "slideCCW"
QT_MOC_LITERAL(77, 1087, 7), // "stopArm"
QT_MOC_LITERAL(78, 1095, 19), // "getInitCrawlerValue"
QT_MOC_LITERAL(79, 1115, 19), // "setInitCrawlerValue"
QT_MOC_LITERAL(80, 1135, 19), // "getStopCrawlerValue"
QT_MOC_LITERAL(81, 1155, 19), // "setStopCrawlerValue"
QT_MOC_LITERAL(82, 1175, 18), // "getRstCrawlerValue"
QT_MOC_LITERAL(83, 1194, 18), // "setRstCrawlerValue"
QT_MOC_LITERAL(84, 1213, 12), // "getTempValue"
QT_MOC_LITERAL(85, 1226, 12), // "setTempValue"
QT_MOC_LITERAL(86, 1239, 11), // "getErrValue"
QT_MOC_LITERAL(87, 1251, 11), // "setErrValue"
QT_MOC_LITERAL(88, 1263, 14), // "getCrawlStatus"
QT_MOC_LITERAL(89, 1278, 14), // "setCrawlStatus"
QT_MOC_LITERAL(90, 1293, 11), // "rst_crawler"
QT_MOC_LITERAL(91, 1305, 16), // "call_crawlerinit"
QT_MOC_LITERAL(92, 1322, 12), // "call_slidecw"
QT_MOC_LITERAL(93, 1335, 13), // "call_slideccw"
QT_MOC_LITERAL(94, 1349, 13), // "errorCallback"
QT_MOC_LITERAL(95, 1363, 12), // "tempCallback"
QT_MOC_LITERAL(96, 1376, 15), // "crawlerCallback"
QT_MOC_LITERAL(97, 1392, 9), // "frontLeft"
QT_MOC_LITERAL(98, 1402, 10), // "frontRight"
QT_MOC_LITERAL(99, 1413, 10), // "backrRight"
QT_MOC_LITERAL(100, 1424, 8), // "backLeft"
QT_MOC_LITERAL(101, 1433, 11), // "initCrawler"
QT_MOC_LITERAL(102, 1445, 11), // "stopCrawler"
QT_MOC_LITERAL(103, 1457, 15), // "getBatteryValue"
QT_MOC_LITERAL(104, 1473, 15), // "setBatteryValue"
QT_MOC_LITERAL(105, 1489, 12), // "battCallback"
QT_MOC_LITERAL(106, 1502, 11), // "velCallback"
QT_MOC_LITERAL(107, 1514, 18), // "current_vel_linear"
QT_MOC_LITERAL(108, 1533, 16), // "getVelocityValue"
QT_MOC_LITERAL(109, 1550, 16), // "setVelocityValue"
QT_MOC_LITERAL(110, 1567, 15), // "getCurrentValue"
QT_MOC_LITERAL(111, 1583, 15), // "setCurrentValue"
QT_MOC_LITERAL(112, 1599, 15), // "currentCallback"
QT_MOC_LITERAL(113, 1615, 13), // "waterCallback"
QT_MOC_LITERAL(114, 1629, 9), // "getUtData"
QT_MOC_LITERAL(115, 1639, 9), // "setUtData"
QT_MOC_LITERAL(116, 1649, 8), // "getUtVel"
QT_MOC_LITERAL(117, 1658, 8), // "setUtVel"
QT_MOC_LITERAL(118, 1667, 11), // "getUtstatus"
QT_MOC_LITERAL(119, 1679, 11), // "setUtstatus"
QT_MOC_LITERAL(120, 1691, 12), // "getThickness"
QT_MOC_LITERAL(121, 1704, 12), // "setThickness"
QT_MOC_LITERAL(122, 1717, 10), // "utCallback"
QT_MOC_LITERAL(123, 1728, 3), // "vel"
QT_MOC_LITERAL(124, 1732, 8), // "deepcoat"
QT_MOC_LITERAL(125, 1741, 4), // "echo"
QT_MOC_LITERAL(126, 1746, 17), // "thicknessCallback"
QT_MOC_LITERAL(127, 1764, 9), // "thickness"
QT_MOC_LITERAL(128, 1774, 4), // "unit"
QT_MOC_LITERAL(129, 1779, 6), // "getUid"
QT_MOC_LITERAL(130, 1786, 6), // "setUid"
QT_MOC_LITERAL(131, 1793, 11), // "uidCallback"
QT_MOC_LITERAL(132, 1805, 11), // "call_capImg"
QT_MOC_LITERAL(133, 1817, 9), // "comStatus"
QT_MOC_LITERAL(134, 1827, 11), // "toggleValue"
QT_MOC_LITERAL(135, 1839, 13), // "armToolStatus"
QT_MOC_LITERAL(136, 1853, 10), // "toolToggle"
QT_MOC_LITERAL(137, 1864, 12), // "stopArmValue"
QT_MOC_LITERAL(138, 1877, 11), // "rstArmValue"
QT_MOC_LITERAL(139, 1889, 9), // "armStatus"
QT_MOC_LITERAL(140, 1899, 16), // "initCrawlerValue"
QT_MOC_LITERAL(141, 1916, 16), // "stopCrawlerValue"
QT_MOC_LITERAL(142, 1933, 15), // "rstCrawlerValue"
QT_MOC_LITERAL(143, 1949, 8), // "errValue"
QT_MOC_LITERAL(144, 1958, 9), // "tempValue"
QT_MOC_LITERAL(145, 1968, 11), // "crawlStatus"
QT_MOC_LITERAL(146, 1980, 10), // "waterLevel"
QT_MOC_LITERAL(147, 1991, 13), // "velocityValue"
QT_MOC_LITERAL(148, 2005, 12), // "batteryValue"
QT_MOC_LITERAL(149, 2018, 12), // "currentValue"
QT_MOC_LITERAL(150, 2031, 6), // "utData"
QT_MOC_LITERAL(151, 2038, 5), // "utVel"
QT_MOC_LITERAL(152, 2044, 8), // "utstatus"
QT_MOC_LITERAL(153, 2053, 3) // "uid"

    },
    "Publisher\0message\0\0msg\0message1\0value\0"
    "value2\0value3\0value4\0comStatusChanged\0"
    "toggleValueChanged\0armToolStatusChanged\0"
    "toolToggleChanged\0slideCWValueChanged\0"
    "slideCCWValueChanged\0rstArmValueChanged\0"
    "stopArmValueChanged\0rstArm\0"
    "trigArmStatusValueChanged\0armStatusChanged\0"
    "QVector<int>\0status\0initCrawlerValueChanged\0"
    "stopCrawlerValueChanged\0rstCrawlerValueChanged\0"
    "errValueChanged\0tempValueChanged\0"
    "rstCrawler\0crawlStatusChanged\0"
    "velocityValueChanged\0waterlevelValueChanged\0"
    "level\0batteryValueChanged\0currentValueChanged\0"
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
    "setslideCCWValue\0getWaterLevel\0"
    "setWaterLevel\0getStopArmValue\0"
    "setStopArmValue\0setRstArmValue\0"
    "getRstArmValue\0getArmStatus\0setArmStatus\0"
    "call_arminit\0val\0trig_armStatus\0rst_arm\0"
    "armCallback\0slideCW\0slideCCW\0stopArm\0"
    "getInitCrawlerValue\0setInitCrawlerValue\0"
    "getStopCrawlerValue\0setStopCrawlerValue\0"
    "getRstCrawlerValue\0setRstCrawlerValue\0"
    "getTempValue\0setTempValue\0getErrValue\0"
    "setErrValue\0getCrawlStatus\0setCrawlStatus\0"
    "rst_crawler\0call_crawlerinit\0call_slidecw\0"
    "call_slideccw\0errorCallback\0tempCallback\0"
    "crawlerCallback\0frontLeft\0frontRight\0"
    "backrRight\0backLeft\0initCrawler\0"
    "stopCrawler\0getBatteryValue\0setBatteryValue\0"
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
     114,   14, // methods
      24,  880, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  584,    2, 0x06 /* Public */,
       4,    1,  587,    2, 0x06 /* Public */,
       5,    1,  590,    2, 0x06 /* Public */,
       6,    1,  593,    2, 0x06 /* Public */,
       7,    1,  596,    2, 0x06 /* Public */,
       8,    1,  599,    2, 0x06 /* Public */,
       9,    1,  602,    2, 0x06 /* Public */,
      10,    1,  605,    2, 0x06 /* Public */,
      11,    1,  608,    2, 0x06 /* Public */,
      12,    1,  611,    2, 0x06 /* Public */,
      13,    1,  614,    2, 0x06 /* Public */,
      14,    1,  617,    2, 0x06 /* Public */,
      15,    1,  620,    2, 0x06 /* Public */,
      16,    1,  623,    2, 0x06 /* Public */,
      17,    1,  626,    2, 0x06 /* Public */,
      18,    0,  629,    2, 0x06 /* Public */,
      19,    1,  630,    2, 0x06 /* Public */,
      22,    1,  633,    2, 0x06 /* Public */,
      23,    1,  636,    2, 0x06 /* Public */,
      24,    1,  639,    2, 0x06 /* Public */,
      25,    1,  642,    2, 0x06 /* Public */,
      26,    1,  645,    2, 0x06 /* Public */,
      27,    1,  648,    2, 0x06 /* Public */,
      28,    1,  651,    2, 0x06 /* Public */,
      29,    1,  654,    2, 0x06 /* Public */,
      30,    1,  657,    2, 0x06 /* Public */,
      32,    1,  660,    2, 0x06 /* Public */,
      33,    1,  663,    2, 0x06 /* Public */,
      34,    1,  666,    2, 0x06 /* Public */,
      35,    1,  669,    2, 0x06 /* Public */,
      36,    1,  672,    2, 0x06 /* Public */,
      37,    1,  675,    2, 0x06 /* Public */,
      38,    1,  678,    2, 0x06 /* Public */,
      40,    1,  681,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    0,  684,    2, 0x0a /* Public */,
      42,    0,  685,    2, 0x0a /* Public */,
      43,    0,  686,    2, 0x0a /* Public */,
      44,    0,  687,    2, 0x0a /* Public */,
      45,    1,  688,    2, 0x0a /* Public */,
      46,    1,  691,    2, 0x0a /* Public */,
      47,    0,  694,    2, 0x0a /* Public */,
      48,    1,  695,    2, 0x0a /* Public */,
      50,    1,  698,    2, 0x0a /* Public */,
      51,    0,  701,    2, 0x0a /* Public */,
      52,    1,  702,    2, 0x0a /* Public */,
      53,    0,  705,    2, 0x0a /* Public */,
      54,    1,  706,    2, 0x0a /* Public */,
      55,    1,  709,    2, 0x0a /* Public */,
      57,    0,  712,    2, 0x0a /* Public */,
      58,    1,  713,    2, 0x0a /* Public */,
      60,    0,  716,    2, 0x0a /* Public */,
      61,    1,  717,    2, 0x0a /* Public */,
      62,    0,  720,    2, 0x0a /* Public */,
      63,    1,  721,    2, 0x0a /* Public */,
      64,    0,  724,    2, 0x0a /* Public */,
      65,    1,  725,    2, 0x0a /* Public */,
      66,    1,  728,    2, 0x0a /* Public */,
      67,    0,  731,    2, 0x0a /* Public */,
      68,    0,  732,    2, 0x0a /* Public */,
      69,    1,  733,    2, 0x0a /* Public */,
      70,    1,  736,    2, 0x0a /* Public */,
      72,    0,  739,    2, 0x0a /* Public */,
      73,    1,  740,    2, 0x0a /* Public */,
      74,    1,  743,    2, 0x0a /* Public */,
      75,    1,  746,    2, 0x0a /* Public */,
      76,    1,  749,    2, 0x0a /* Public */,
      77,    1,  752,    2, 0x0a /* Public */,
      17,    1,  755,    2, 0x0a /* Public */,
      78,    0,  758,    2, 0x0a /* Public */,
      79,    1,  759,    2, 0x0a /* Public */,
      80,    0,  762,    2, 0x0a /* Public */,
      81,    1,  763,    2, 0x0a /* Public */,
      82,    0,  766,    2, 0x0a /* Public */,
      83,    1,  767,    2, 0x0a /* Public */,
      84,    0,  770,    2, 0x0a /* Public */,
      85,    1,  771,    2, 0x0a /* Public */,
      86,    0,  774,    2, 0x0a /* Public */,
      87,    1,  775,    2, 0x0a /* Public */,
      88,    0,  778,    2, 0x0a /* Public */,
      89,    1,  779,    2, 0x0a /* Public */,
      90,    1,  782,    2, 0x0a /* Public */,
      91,    1,  785,    2, 0x0a /* Public */,
      92,    1,  788,    2, 0x0a /* Public */,
      93,    1,  791,    2, 0x0a /* Public */,
      94,    1,  794,    2, 0x0a /* Public */,
      95,    1,  797,    2, 0x0a /* Public */,
      96,    4,  800,    2, 0x0a /* Public */,
     101,    1,  809,    2, 0x0a /* Public */,
     102,    1,  812,    2, 0x0a /* Public */,
      27,    1,  815,    2, 0x0a /* Public */,
     103,    0,  818,    2, 0x0a /* Public */,
     104,    1,  819,    2, 0x0a /* Public */,
     105,    1,  822,    2, 0x0a /* Public */,
     106,    1,  825,    2, 0x0a /* Public */,
     108,    0,  828,    2, 0x0a /* Public */,
     109,    1,  829,    2, 0x0a /* Public */,
     110,    0,  832,    2, 0x0a /* Public */,
     111,    1,  833,    2, 0x0a /* Public */,
     112,    1,  836,    2, 0x0a /* Public */,
     113,    1,  839,    2, 0x0a /* Public */,
     114,    0,  842,    2, 0x0a /* Public */,
     115,    1,  843,    2, 0x0a /* Public */,
     116,    0,  846,    2, 0x0a /* Public */,
     117,    1,  847,    2, 0x0a /* Public */,
     118,    0,  850,    2, 0x0a /* Public */,
     119,    1,  851,    2, 0x0a /* Public */,
     120,    0,  854,    2, 0x0a /* Public */,
     121,    1,  855,    2, 0x0a /* Public */,
     122,    3,  858,    2, 0x0a /* Public */,
     126,    2,  865,    2, 0x0a /* Public */,
     129,    0,  870,    2, 0x0a /* Public */,
     130,    1,  871,    2, 0x0a /* Public */,
     131,    1,  874,    2, 0x0a /* Public */,
     132,    1,  877,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QVariantMap,   21,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVariantMap,   21,
    QMetaType::Void, QMetaType::QVariantMap,   21,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 39,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 20,    5,
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::Void, 0x80000000 | 20,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   97,   98,   99,  100,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  123,  124,  125,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  127,  128,
    0x80000000 | 39,
    QMetaType::Void, 0x80000000 | 39,    5,
    QMetaType::Void, 0x80000000 | 39,    5,
    QMetaType::Void, QMetaType::Int,   71,

 // properties: name, type, flags
     133, QMetaType::Int, 0x00495103,
     134, QMetaType::Bool, 0x00495103,
     135, QMetaType::Int, 0x00495103,
     136, QMetaType::QString, 0x00495103,
      75, QMetaType::Bool, 0x00495003,
      76, QMetaType::Bool, 0x00495003,
     137, QMetaType::Bool, 0x00495103,
     138, QMetaType::Bool, 0x00495103,
     139, 0x80000000 | 20, 0x0049510b,
     140, QMetaType::Bool, 0x00495103,
     141, QMetaType::Bool, 0x00495103,
     142, QMetaType::Bool, 0x00495103,
     143, 0x80000000 | 20, 0x0049510b,
     144, 0x80000000 | 20, 0x0049510b,
     145, QMetaType::QVariantMap, 0x00495103,
     146, QMetaType::Float, 0x00495103,
     147, QMetaType::Int, 0x00495103,
     148, QMetaType::Float, 0x00495103,
     149, QMetaType::Float, 0x00495103,
     150, QMetaType::QString, 0x00495103,
     151, QMetaType::QString, 0x00495103,
     152, QMetaType::QVariantMap, 0x00495103,
     127, QMetaType::QVariantMap, 0x00495103,
     153, 0x80000000 | 39, 0x0049510b,

 // properties: notify_signal_id
       6,
       7,
       8,
       9,
      10,
      11,
      13,
      12,
      16,
      17,
      18,
      19,
      20,
      21,
      23,
      25,
      24,
      26,
      27,
      31,
      30,
      28,
      29,
      32,

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
        case 6: _t->comStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->toggleValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->armToolStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toolToggleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->slideCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->slideCCWValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->rstArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->stopArmValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->rstArm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->trigArmStatusValueChanged(); break;
        case 16: _t->armStatusChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 17: _t->initCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->stopCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->rstCrawlerValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->errValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 21: _t->tempValueChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 22: _t->rstCrawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->crawlStatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 24: _t->velocityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->waterlevelValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->batteryValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->currentValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->utstatusChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 29: _t->thicknessChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 30: _t->utVelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->utDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->uidChanged((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 33: _t->capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->initRosThread(); break;
        case 35: _t->on_pushButton_pressed(); break;
        case 36: _t->on_pushButton_2_pressed(); break;
        case 37: { int _r = _t->getComStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->setComStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->commCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: { bool _r = _t->getToggleValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->setToggleValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->toggleCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: { QString _r = _t->getToolToggle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->setToolToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: { int _r = _t->getArmToolStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->setArmToolStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->armToolCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: { bool _r = _t->getslideCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setslideCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: { bool _r = _t->getslideCCWValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setslideCCWValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: { float _r = _t->getWaterLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: { bool _r = _t->getStopArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setStopArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->setRstArmValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: { bool _r = _t->getRstArmValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: { QVector<int> _r = _t->getArmStatus();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setArmStatus((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 60: _t->call_arminit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->trig_armStatus(); break;
        case 62: _t->rst_arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->armCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 64: _t->slideCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->slideCCW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->stopArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->rstArm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { bool _r = _t->getInitCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setInitCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: { bool _r = _t->getStopCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setStopCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { bool _r = _t->getRstCrawlerValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setRstCrawlerValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: { QVector<int> _r = _t->getTempValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setTempValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 76: { QVector<int> _r = _t->getErrValue();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setErrValue((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 78: { QVariantMap _r = _t->getCrawlStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setCrawlStatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 80: _t->rst_crawler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->call_crawlerinit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->call_slidecw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->call_slideccw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->errorCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 85: _t->tempCallback((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 86: _t->crawlerCallback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 87: _t->initCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->stopCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->rstCrawler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: { float _r = _t->getBatteryValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->setBatteryValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 92: _t->battCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 93: _t->velCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: { int _r = _t->getVelocityValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->setVelocityValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: { float _r = _t->getCurrentValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->setCurrentValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 98: _t->currentCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 99: _t->waterCallback((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 100: { QString _r = _t->getUtData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 101: _t->setUtData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 102: { QString _r = _t->getUtVel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->setUtVel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 104: { QVariantMap _r = _t->getUtstatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->setUtstatus((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 106: { QVariantMap _r = _t->getThickness();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->setThickness((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 108: _t->utCallback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 109: _t->thicknessCallback((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 110: { QVector<QString> _r = _t->getUid();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 111: _t->setUid((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 112: _t->uidCallback((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 113: _t->call_capImg((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 21:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 84:
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
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 112:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::comStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toggleValueChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armToolStatusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::toolToggleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCWValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::slideCCWValueChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArmValueChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopArmValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstArm)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Publisher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::trigArmStatusValueChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::armStatusChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::initCrawlerValueChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::stopCrawlerValueChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawlerValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::errValueChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::tempValueChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::rstCrawler)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::crawlStatusChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::velocityValueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::waterlevelValueChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::batteryValueChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::currentValueChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utstatusChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::thicknessChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utVelChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::utDataChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::uidChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Publisher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Publisher::capImg)) {
                *result = 33;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 13:
        case 12:
        case 8:
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
        case 6: *reinterpret_cast< bool*>(_v) = _t->getStopArmValue(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getRstArmValue(); break;
        case 8: *reinterpret_cast< QVector<int>*>(_v) = _t->getArmStatus(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getInitCrawlerValue(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getStopCrawlerValue(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getRstCrawlerValue(); break;
        case 12: *reinterpret_cast< QVector<int>*>(_v) = _t->getErrValue(); break;
        case 13: *reinterpret_cast< QVector<int>*>(_v) = _t->getTempValue(); break;
        case 14: *reinterpret_cast< QVariantMap*>(_v) = _t->getCrawlStatus(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getWaterLevel(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getVelocityValue(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getBatteryValue(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getCurrentValue(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getUtData(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getUtVel(); break;
        case 21: *reinterpret_cast< QVariantMap*>(_v) = _t->getUtstatus(); break;
        case 22: *reinterpret_cast< QVariantMap*>(_v) = _t->getThickness(); break;
        case 23: *reinterpret_cast< QVector<QString>*>(_v) = _t->getUid(); break;
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
        case 6: _t->setStopArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setRstArmValue(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setArmStatus(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 9: _t->setInitCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setStopCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setRstCrawlerValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setErrValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 13: _t->setTempValue(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 14: _t->setCrawlStatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 15: _t->setWaterLevel(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setVelocityValue(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setBatteryValue(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setCurrentValue(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setUtData(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setUtVel(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setUtstatus(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 22: _t->setThickness(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 23: _t->setUid(*reinterpret_cast< QVector<QString>*>(_v)); break;
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
        if (_id < 114)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 114;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 114)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 114;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 24;
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
void Publisher::comStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Publisher::toggleValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Publisher::armToolStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Publisher::toolToggleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Publisher::slideCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Publisher::slideCCWValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Publisher::rstArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Publisher::stopArmValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Publisher::rstArm(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Publisher::trigArmStatusValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Publisher::armStatusChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Publisher::initCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Publisher::stopCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Publisher::rstCrawlerValueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Publisher::errValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Publisher::tempValueChanged(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Publisher::rstCrawler(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Publisher::crawlStatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Publisher::velocityValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Publisher::waterlevelValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Publisher::batteryValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Publisher::currentValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Publisher::utstatusChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Publisher::thicknessChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Publisher::utVelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Publisher::utDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Publisher::uidChanged(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Publisher::capImg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
