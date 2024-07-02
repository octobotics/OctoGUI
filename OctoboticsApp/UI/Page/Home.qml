/*!
 *  \file      home.qml
 *  \brief     This is the code for main page of UI
 *  \details   This is the code for main page of UI. You should be doing most of the new changes here.
 *  \author    Charith Reddy, Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      1. limit the popups if we get any error. Now it pops up after every value change in error
 *  \warning   Improper use can crash the application
 */

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import "../Assets/battery-status"
import QtQuick.Controls.Styles 1.4
import QtQuick.Extras 1.4
import QtMultimedia 5.12
import QtGraphicalEffects 1.0
import QtLocation 5.12
import QtQuick.Controls 1.4
import QtQuick.Controls 2.5
//import HelloCpp 1.0
import "../../UI/Components"
import CustomPlot 1.0
import QtQuick.Dialogs 1.1
//import RecordCams 1.0
import QtQuick.Extras 1.4
import camera 1.0

Rectangle{

    color: "#292D3E"
    property int iconSize: 32
    property int battCnt:0
    property bool armst: false
    property int full_cam:0
    property color  fg: "#27322f"
    property color  bg: "black"
    property variant arrange_cam: [0,1,2,3]
    property color  secondBg: "#34324a"
    property color borderSecondBg: "#ab47bc"
    property color buttonBg: "#c792ea"
    property color textColor: "#c792ea"
    property var crawler: publisher.crawlStatus
    onCrawlerChanged: {
        console.log("crawler",crawler)
    }

    property var armErr: ({   0 : "NO Error [ALL OK]",
                              6 : "Storage data error",
                              13 : "Multi-turn calibrate error",
                              23 : "Current temperature out of range	",
                              24 : "Current voltage out of range",
                              34 : "Target position out of range"
                          })
    property var cErr: ({   0 : "NO Error [ALL OK]",
                            1 : "Motor Stalled [Critical]",
                            2 : "Low Pressure [RESET MOTORS]",
                            3 : " Over Voltage [Moderate]",
                            4 : "Over Current [Critical]",
                            5 : "Power Overrun [Moderate]",
                            6 : "Speeding [Moderate]",
                            7 : "Empty Error 1",
                            8 : "Empty Error 2",
                            9 : "Empty Error 3",
                            10 : "Very High Temperature [Moderate]",
                            11 : "Encoder Calibration Error [Moderate]"})
    property var cMotors: ({
                               0 : "Rear Right",
                               1 : "Rear Left",
                               2 : "Front Left",
                               3 : "Front Right"
                           })
    property var armMotors: ({
                                 0 : "Base",
                                 1 : "Shoulder",
                                 2 : "Elbow",
                                 3 : "Tool"

                             })
    property var cameras: ({
                               0 : "FORWARD CAM",
                               1 : "ARM CAM",
                               2 : "OVERVIEW CAM",
                               3 : "BACK CAM"

                           })


    // popup functions

    MessageDialog {
        id: armDialog
        title: "Arm"
        text: "Arm Status"
        onAccepted: {
            armDialog.close()
        }
    }
    MessageDialog {
        id: crawlerDialog
        title: "Crawler"
        text: "Crawler Status"
        width: 400
        onAccepted: {
            crawlerDialog.close()
        }
    }
    MessageDialog {
        id: battDialog
        title: "Battery"
        text: "Battery Status"
        onAccepted: {
            battDialog.close()
        }
    }

    MessageDialog {
        id: generalDialog
        title: "General Info"
        text: "General Information"
        onAccepted: {
            generalDialog.close()
        }
    }

    /*!
     * \brief  battStatus: gets battery value from ros and gives a popup on low



     */
    property real battStatus: publisher.batteryValue
    onBattStatusChanged: {

        if (battStatus<=29 && battStatus>28 && battCnt<=3){
            battDialog.text = "\n\n         Battery LOW         \n\n"
            battDialog.icon = StandardIcon.Critical
            battDialog.open()
            battCnt++
        }
        else if((battStatus<= 28))
        {
            battDialog.text = "\n\n         Battery Critically LOW         \n         Change Batteries ASAP         \n\n"
            battDialog.icon = StandardIcon.Critical
            battDialog.open()
        }


    }

    /*!
     * \brief  armStatus: gets arm error and temperature from ros and gives a popup if any issue
     */
    property variant armStatus: publisher.armStatus
    onArmStatusChanged: {
        if(!armst)
        {
            armst = true
        }
        else{

            armDialog.text =  "\n\nErrors:\n\n"+armMotors[0]+" : "+armErr[armStatus[0]]+"\n"+armMotors[1]+" : "+armErr[armStatus[1]]+"\n"+armMotors[2]+" : "+armErr[armStatus[2]]+"\n"+armMotors[3]+" : "+armErr[armStatus[3]]+"\n\n\n"+
                    "\n\nTemperature:\n\n" +armMotors[0]+" : "+armStatus[4]+" deg"+"\n"+armMotors[1]+" : "+armStatus[5]+" deg"+"\n"+armMotors[2]+" : "+armStatus[6]+" deg"+"\n"+armMotors[3]+" : "+armStatus[7]+" deg"+"\n"
            armDialog.icon = StandardIcon.Information
            armDialog.open()}
    }


    /*!
     * \brief  crawlStatus: gets crawler status  from ros - not using now
     */
    property variant crawlStatus: publisher.crawlStatus
    onCrawlStatusChanged: {
        //        //console.log("crawlStatus")
        //        //console.log("frontLeft",crawlStatus.frontLeft)
        //        //console.log("frontRight",crawlStatus.frontRight)
        //        //console.log("backrRight",crawlStatus.backrRight)
        //        //console.log("backLeft",crawlStatus.backLeft)
    }



    /*!
     * \brief  velocityValue: gets crawler velocity  from ros - not using now
     */
    property variant velocityValue: publisher.velocityValue
    onVelocityValueChanged:  {
        //console.log("velocity status")
        //console.log("current_vel_linear",velocityValue.current_vel_linear)
        //console.log("current_vel_angular",velocityValue.current_vel_angular)
        //console.log("max_linear",velocityValue.max_linear)
        //console.log("max_angular",velocityValue.max_angular)
    }

    /*!
     * \brief  armTool: gets arm tool status from ros and updates the checker in tool tab
     */
    property int armTool: publisher.armToolStatus
    onArmToolChanged: {
        if(armTool == 1){
            pumpStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 0){
            pumpStatus.source =  "qrc:/UI/Assets/dashboard/tick.png"
        }
        if(armTool == 3){
            magnetStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 2){
            magnetStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
        if(armTool == 5){
            grinderStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 4){
            grinderStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
        if(armTool == 7){
            blightStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 6){
            blightStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
        if(armTool == 9){
            flightStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 8){
            flightStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
    }

    /*!
     * \brief  crawlerErr: gets crawler motors error value from ros and gives a popup on error
     */
    property variant crawlerErr: publisher.errValue
//    onCrawlerErrChanged: {
//        if(2===crawlerErr[0] || 16===crawlerErr[0] || 2===crawlerErr[1] || 16===crawlerErr[1] || 2===crawlerErr[2] || 16===crawlerErr[2] || 2===crawlerErr[3] || 16===crawlerErr[3]){
//            crawlerDialog.text =  cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n"+cMotors[1]+" : "+cErr[crawlerErr[1]]+"\n"+cMotors[2]+" : "+cErr[crawlerErr[2]]+"\n"+cMotors[3]+" : "+cErr[crawlerErr[3]]+"\n"

//            crawlerDialog.title = "Crawler Error"
//            crawlerDialog.icon = StandardIcon.Critical
//            crawlerDialog.open()
//        }


//    }
    /*!
     * \brief  crawlerTemp: gets crawler motors temp value from ros and gives a popup on temp error
     * \todo   make a variable for temperature value
     */
    property variant crawlerTemp: publisher.tempValue
    onCrawlerTempChanged:  {

        if(crawlerTemp[0]>125 || crawlerTemp[1]>125 || crawlerTemp[2]>125 || crawlerTemp[3]>125){
            crawlerDialog.text =  cMotors[0]+" : Temperature greater than "+crawlerTemp[0]+" deg"+"\n"+cMotors[1]+" : Temperature greater than "+crawlerTemp[1]+" deg"+"\n"+cMotors[2]+" : Temperature greater than "+crawlerTemp[2]+" deg"+"\n"+cMotors[3]+" : Temperature greater than "+crawlerTemp[3]+" deg"+"\n"
            crawlerDialog.title = "Crawler Temperature Error"
            crawlerDialog.icon = StandardIcon.Critical
            crawlerDialog.open()
        }

    }


    /*!
     * \brief  initCrawler: gets crawler init value from ros and gives a popup on success or failure
     */
    function initCrawler() {
        if ( publisher.initCrawlerValue){
            crawlerDialog.text = "\n\n         Crawler Initialized         \n\n"
            crawlerDialog.icon = StandardIcon.Information
            fr.source=  "qrc:/UI/Assets/dashboard/tick.png"
            fl.source=  "qrc:/UI/Assets/dashboard/tick.png"
            br.source=  "qrc:/UI/Assets/dashboard/tick.png"
            bl.source=  "qrc:/UI/Assets/dashboard/tick.png"
        }


        else{
            crawlerDialog.text = "\n\n         Crawler Initialization failed        \n\n"
            crawlerDialog.icon = StandardIcon.Critical
        }
        crawlerDialog.open()

    }
    /*!
     * \brief  rstCrawler: gets crawler reset value from ros and gives a popup on success or failure
     */
    function rstCrawler()  {
        if (publisher.rstCrawlerValue){
            crawlerDialog.text = "\n\n         Crawler Restarted         \n\n"
            crawlerDialog.icon = StandardIcon.Information
        }
        else{
            crawlerDialog.text = "\n\n         Crawler Restart Failed        \n\n"
            crawlerDialog.icon = StandardIcon.Critical
        }
        crawlerDialog.open()

    }
    /*!
     * \brief stopCrawler: gets crawler stop value from ros and gives a popup on success or failure
     */
    function stopCrawler()  {
        if (publisher.stopCrawlerValue){
            crawlerDialog.text = "\n\n         Crawler Stopped         \n\n"
            crawlerDialog.icon = StandardIcon.Information
            fr.source=  "qrc:/UI/Assets/dashboard/remove.png"
            fl.source=  "qrc:/UI/Assets/dashboard/remove.png"
            br.source=  "qrc:/UI/Assets/dashboard/remove.png"
            bl.source=  "qrc:/UI/Assets/dashboard/remove.png"

        }
        else{
            crawlerDialog.text = "\n\n         Crawler Stopping Failed         \n\n"
            crawlerDialog.icon = StandardIcon.Critical
        }
        crawlerDialog.open()

    }

    /*!
     * \brief  initArm: gets arm init value from ros and gives a popup on success or failure
     */
    function initArm()  {
        if (publisher.initArmValue){
            armDialog.text = "\n\n         Arm Initialized         \n\n"
            armDialog.icon = StandardIcon.Information
        }
        else{
            armDialog.text = "\n\n         Arm Initialization failed        \n\n"
            armDialog.icon = StandardIcon.Critical
        }
        armDialog.open()

    }
    /*!
     * \brief  rstArm: gets arm reset value from ros and gives a popup on success or failure
     */
    function rstArm()  {
        if (publisher.rstArmValue){
            armDialog.text = "\n\n         Arm Restarted         \n\n"
            armDialog.icon = StandardIcon.Information
        }
        else{
            armDialog.text = "\n\n         Arm Restart Failed        \n\n"
            armDialog.icon = StandardIcon.Critical
        }
        armDialog.open()

    }
    /*!
     * \brief  stopArm: gets arm stop value from ros and gives a popup on success or failure
     */
    function stopArm()  {
        if (publisher.stopArmValue){
            armDialog.text = "\n\n         Arm Stopped         \n\n"
            armDialog.icon = StandardIcon.Information
        }
        else{
            armDialog.text = "\n\n         Arm Stopping Failed         \n\n"
            armDialog.icon = StandardIcon.Critical
        }
        armDialog.open()
    }

    /*!
     * \brief  swapCam: swaps the video feeds with the main frame
     */
    function swapCam(id){
        var k = 0
        videoPlayer.playlist.currentIndex = arrange_cam[id]
        videoPlayer.play()
        //        console.log("---------------------------------------------------",id,arrange_cam)
        switch (id) {
        case 1:
            var tab1 = g1.getTab(0).item
            tab1.videoPlayer1.playlist.currentIndex =
            tab1.videoPlayer1.play()
            console.log ("swapped with cam: ",id+1)
            break
        case 2:
            videoPlayer2.playlist.currentIndex =
            videoPlayer2.play()
            console.log ("swapped with cam: ",id+1)

            break

        default:
            console.log ("1: count is non zero")
            break
        }
        k = arrange_cam[id]
        arrange_cam[id] =
        arrange_cam[0] = k
    }

    /*!
     * \brief  resetCam: resets the video feeds to their original frames
     */
    function resetCam()
    {
        videoPlayer.playlist.currentIndex = 0
        videoPlayer.play()

        var tab1 = g1.getTab(0).item
        tab1.videoPlayer1.playlist.currentIndex = 1
        tab1.videoPlayer1.play()

        videoPlayer2.playlist.currentIndex = 2
        videoPlayer2.play()


    }

    /*!
     * \brief  displaybatterStatus: displays current battery status animation
     */
    function displaybatterStatus(level)
    {
        var percentage = ((level - 44)*100) / (50 - 44);

        console.log("batt level",level)
        if (percentage < 20){
            batt.text = "BATTERY LOW"
            alertTimer.start();
            return "qrc:/UI/Assets/battery-status/battery-empty-solid.png" // fa-battery-empty
        }
        else if (percentage > 20 && percentage < 40)
        {     batt.text = " "

            return "qrc:/UI/Assets/battery-status/battery-quarter-solid.png" // fa-battery-quarter
        }
        else if (percentage > 40 && percentage < 60)
        {
            batt.text = " "
            return "qrc:/UI/Assets/battery-status/battery-half-solid.png" // fa-battery-half

        }
        else if (percentage > 60 && percentage < 80)
        {
            batt.text = " "
            return "qrc:/UI/Assets/battery-status/battery-three-quarters-solid.png" // fa-battery-three-quarters

        }
        else if (percentage > 80){
            batt.text = " "
            return "qrc:/UI/Assets/battery-status/battery-full-solid.png" // fa-battery-full

        }
        else
            return "qrc:/UI/Assets/battery-status/battery-empty-solid.png" // fa-battery-empty

    }

    /*!
     * \brief  displayConnectionStatus: displays current connection status
     */
    function displayConnectionStatus(wifiStatus){
        var status= parseInt(wifiStatus)
        if(status > 40 && status < 60){
            return "qrc:/UI/Assets/signal-status/wifi-signal.png"
        }else if(status >= 60 && status < 70){
            return "qrc:/UI/Assets/signal-status/warning.png"
        }else if(status >  80){
              alaramEffect.play()
             return "qrc:/UI/Assets/signal-status/no-wifi-signal.png"
        }else{

            return "qrc:/UI/Assets/signal-status/no-wifi-signal.png"
        }

    }
    /*!
     * \brief  init_crawler: calls the crawler to initialize
     */
    function init_crawler(ccw){

        publisher.call_crawlerinit(ccw)

    }

    CameraRunner {
        id:camera_runner;
    }

//    function slide_cw(cw){
//        publisher.call_slidecw(cw)
//    }

    ColumnLayout{
        anchors.fill: parent
        spacing: 0
        Rectangle{
            id:statusBar
            Layout.fillWidth: true
            height: parent.height*0.1
            visible: false
            color: "#00695C"

            PropertyAnimation { id: animationOne; target: statusBar;alwaysRunToEnd: true; property: "color"; to: "#fec1c1"; duration: 500
                onStopped: animationTwo.start()}
            PropertyAnimation { id: animationTwo; target: statusBar;alwaysRunToEnd: true; property: "color"; to: "#9b0000"; duration: 300 }
            RowLayout{
                Rectangle{
                    width: widthScreen * 0.06
                    height: parent.height*0.1


                    Item {
                        id: logo
                        width: 80
                        height: 80
                        anchors.left: parent.left

                        Image {
                            sourceSize.width: 80
                            sourceSize.height: 80
                            source: "qrc:/UI/Assets/octobotics_logo.png"
                        }

                    }
                }
                //                Rectangle{
                //                    width: widthScreen * 0.1
                //                    height: parent.height*0.2

                //                    Item {
                //                        id: connectionStatus
                //                        width: 50
                //                        height: 60


                //                        Image {
                //                            id: connectionStatusImg
                //                            anchors.fill: connectionStatus
                //                            anchors.topMargin: 6
                //                            source:displayConnectionStatus(publisher.comStatus)
                //                            onSourceChanged: {
                //                                if(publisher.comStatus){
                //                                    alertTimer.stop();
                //                                    alarmTone.stop()
                //                                    alertTimer.running = false

                //                                }else{

                //                                    alertTimer.start();
                //                                    alarmTone.play()
                //                                }


                //                            }
                //                        }
                //                    }
                //                }

                Rectangle{
                    width: widthScreen * 0.68
                    height: parent.height
                    Item{
                        anchors.horizontalCenter:  parent.horizontalCenter
                        Text {
                            id: batt
                            color: "black"
                            font.pixelSize: 50
                            text: qsTr("HI")
                        }
                    }
                }
                Rectangle{
                    width: widthScreen * 0.03
                    height: parent.height
                }
                Rectangle{
                    width: widthScreen * 0.1
                    height: parent.height


                    RowLayout{
                        width: parent.width

                        Item{
                            Text {
                                id:currTxt
                                font.family: "Tahoma"
                                font.bold: true
                                font.pixelSize: 20
                                color: "black"
                                topPadding: 18
                                text:   "Current:"

                            }
                            Text {

                                font.family: "Tahoma"
                                font.bold: true
                                font.pixelSize: 20
                                anchors.left: currTxt.right
                                color: "black"
                                topPadding: 18
                                text:   publisher.currentValue === -1 ? "-----" : publisher.currentValue.toFixed(2)

                            }

                        }

                    }
                }
                Rectangle{
                    width: widthScreen * 0.03
                    height: parent.height
                }
                Rectangle{
                    width: widthScreen * 0.3
                    height: parent.height

                    RowLayout{
                        width: parent.width
                        Item{
                            id: togglCw
                            Text {
                                id: textId
                                font.family: "Tahoma"

                                text: "Crawler"
                                font.bold: true
                                font.pixelSize: 20
                                color: "black"
                                topPadding: 18
                            }
                        }

                        Item{
                            Layout.leftMargin: 85
                            Switch {
                                id: control
                                text: qsTr("Arm")
                                checked:publisher.toggleValue
                                enabled: false
                                width: 60
                                height: 58
                                indicator: Rectangle {
                                    implicitWidth: 58
                                    implicitHeight: 28
                                    x: control.leftPadding
                                    y: parent.height / 2 - height / 2
                                    radius: 13
                                    color: control.checked ? "#17a81a" : "red"
                                    border.color: "#17a81a"//control.checked ? "#17a81a" : "#cccccc"

                                    Rectangle {
                                        x: control.checked ? parent.width - width : 0
                                        width: 28
                                        height: 28
                                        radius: 13
                                        color: control.down ? "#cccccc" : "#ffffff"
                                        border.color: "#232F34"//control.checked ? (control.down ? "#17a81a" : "#21be2b") : "#999999"
                                    }
                                }

                                contentItem: Text {
                                    text: control.text
                                    font.bold: true
                                    font.pixelSize: 20
                                    verticalAlignment: Text.AlignVCenter
                                    color: "black"
                                    leftPadding: control.indicator.width + control.spacing
                                }
                            }
                        }





                    }
                }

            }

            //            Item {
            //                id: batteryStatusId
            //                width: 60
            //                height: parent.height*0.95
            //                anchors.verticalCenter: parent.verticalCenter
            //                anchors.right: parent.right
            //                anchors.rightMargin: 90

            //                Image {
            //                    id: batteryStatus
            //                    anchors.fill: parent
            //                    source:displaybatterStatus(publisher.batteryValue)

            //                }
            //                Text {
            //                    id: batteryStatusValue
            //                    text: parseFloat((Math.round((publisher.batteryValue)*100))/100)

            //                    verticalAlignment: Text.AlignVCenter
            //                    horizontalAlignment: Text.AlignHCenter
            //                    anchors.fill: parent
            //                    font.pointSize: 8
            //                    color: "white"
            //                }
            //            }
            Item {
                id: uidInfo
                width: 40
                height: 40
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                anchors.rightMargin: 20

                Image {
                    id: uidInfoImage
                    anchors.fill: uidInfo
                    anchors.topMargin: 3
                    source: "qrc:/UI/Assets/dashboard/info.png"

                }
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        generalDialog.text =   "\n\nRobot Information\n\n"+"Robot ID"+" : "+publisher.uid[0]+"\n\n\n"+"Xavier ID"+"\t\t:\t"+publisher.uid[1]+"\n"+"CSI ID"+"\t\t:\t"+publisher.uid[2]+"\n"+"ZED ID"+"\t\t:\t"+publisher.uid[3]+"\n"+"UT Gauge ID"+"\t:\t"+publisher.uid[4]+"\n"+"Lidar ID"+"\t\t:\t"+publisher.uid[5]+
                                "\n"+"Drive Motors ID"+"\t:\t"+publisher.uid[6]+"\n"+"Arm Motors ID"+"\t:\t"+publisher.uid[7]+"\n"+"STM32 ID"+"\t\t:\t"+publisher.uid[8]+"\n"+"Crawler RS485 ID"+"\t:\t"+publisher.uid[9]+ "\n"+"ARM RS485 ID"+"\t:\t"+publisher.uid[10]+"\n"+"Servo ID"+"\t\t:\t"+publisher.uid[11]+"\n"+"Pump ID"+"\t\t:\t"+publisher.uid[12]+"\n"+"Magnets ID"+"\t\t:\t"+publisher.uid[13]+"\n"+"BLDC ID"+"\t\t:\t"+publisher.uid[14]+"\n"+"ESC ID"+"\t\t:\t"+publisher.uid[15]+"\n"+"STM Shield ID"+"\t:\t"+publisher.uid[16]+"\n"+"PDB ID"+"\t\t:\t"+publisher.uid[17]+
                                "\n"+"Emergency Unit ID"+"\t:\t"+publisher.uid[18]+"\n"+"EU Transmitter ID"+"\t:\t"+publisher.uid[19]+"\n"+"EU Receiver ID"+"\t:\t"+publisher.uid[20]+"\n"+"Lipo Battery ID"+"\t:\t"+publisher.uid[21]+"\n"+"Lion Battery ID"+"\t:\t"+publisher.uid[22]+ "\n"+"Coin Cell ID"+"\t\t:\t"+publisher.uid[22]+"\n\n"

                        generalDialog.icon = StandardIcon.Information
                        generalDialog.open()}
                }
            }


        }

        Rectangle {
            id:dashboardId
            Layout.fillWidth: true
            Layout.fillHeight: true
            color:"#292D3E"
            RowLayout{
                anchors.right:  parent.right
                anchors.top: parent.top
                anchors.topMargin: 5
            }

            ColumnLayout{
                anchors.centerIn: parent
                spacing: rectBox1.height * 0.1
                RowLayout {
                    Rectangle{
                        id:rectBox1
                        width: widthScreen * 0.20
                        height: heightScreen * 0.25
                        border.color:borderSecondBg
                        color: secondBg
                        radius: 15
                       Component.onCompleted: {
                          console.log("h",height,"w",width)
                         }

                        Row{
                            anchors.centerIn: parent
                            spacing: rectBox1.width * 0.01
                            Column{
                                spacing: parent.height * 0.15
                                RowLayout{
                                    spacing: rectBox1.width * 0.05
                                    Item {
                                        id: connectionStatus
                                        width: rectBox1.width * 0.130
                                        height: rectBox1.height * 0.291
                                        Image {
                                            id: connectionStatusImg
                                            width: rectBox1.width * 0.0744
                                            height: width
                                            anchors.centerIn: parent
                                            source:displayConnectionStatus(publisher.comStatus)
//                                            onSourceChanged: {
//                                                if(publisher.comStatus){
//                                                    alertTimer.stop();
//                                                   // alarmTone.stop()
//                                                    alertTimer.running = false

//                                                }else{

//                                                    alertTimer.start();
////                                                    alarmTone.play()
//                                                }


//                                            }
                                        }
                                    }
                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name:  "TD"
                                        baseColor: isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.13020
                                        onClicked: {
                                            isPressed = !isPressed
                                            publisher.toolToggle = "3"
                                        }
                                    }
                                    Item {
                                        id: batteryStatusId
                                        width: rectBox1.width * 0.1302
                                        height: rectBox1.height * 0.2962
                                        Image {
                                            id: batteryStatus
                                            anchors.fill: parent
                                            source:displaybatterStatus(publisher.batteryValue)
                                        }

                                        Text {
                                            id: batteryStatusValue
                                            text: parseFloat((Math.round((publisher.batteryValue)*100))/100)

                                            verticalAlignment: Text.AlignVCenter
                                            horizontalAlignment: Text.AlignHCenter
                                            anchors.fill: parent
                                            font.pointSize: 8
                                            color: textColor
                                        }
                                    }
                                }
                                RowLayout{
                                    spacing: rectBox1.width * 0.05
                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name:  "P/P"
                                        baseColor: isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.13020
                                        onClicked: {
                                            isPressed = !isPressed
                                            publisher.toolToggle = "4"

                                        }
                                    }
                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.width * 0.1
                                        name:  "Led"
                                        baseColor:  isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.13020
                                        onClicked: {
                                              isPressed = !isPressed
                                              publisher.toolToggle = "2"
                                        }
                                    }
                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.width * 0.1
                                        name:  "Motor"
                                        baseColor:  isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.15
                                        onClicked: {
                                            isPressed = !isPressed
                                            publisher.toolToggle = "1"
                                        }
                                    }
                                }
                                RowLayout{
                                    spacing: rectBox1.width * 0.08
                                    Item {
                                            Layout.fillWidth: true
                                        }

                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name:  "JoyStick OFF/ON"
                                        baseColor:  isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.45
                                        Layout.alignment: Qt.AlignCenter
                                        onClicked: {

                                            publisher.call_joystickonoff(isPressed ? 0 : 1);
                                            isPressed = !isPressed

                                        }
                                    }

                                }

                            }
                            Item{
                                height: rectBox1.height * 0.65
                                width: rectBox1.width * 0.100
                                OctoGauge {
                                    anchors.fill: parent
                                    minimumValue: 0
                                    value: parseFloat(Math.round(publisher.waterLevel));
                                    maximumValue: 100
                                    anchors.centerIn: parent
                                    onValueChanged: {
                                        if(value < 10){
                                            alaramEffect.play()
                                        }
                                    }
                                }

                            }


                        }


                    }


                    Rectangle{
                        id:rectBox2
                        width: widthScreen * 0.18
                        height: heightScreen * 0.25
                        border.color: borderSecondBg
                        color: secondBg
                        radius: 15
                        ColumnLayout{
                            anchors.fill: parent
                            anchors.topMargin: 10
                            Text {
                                Layout.fillWidth: true
                                height: rectBox2.height * 0.2
                                text: qsTr("Speed")
                                font.family: "Tahoma"
                                font.bold: true
                                font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                color: textColor
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignHCenter
                            }
                            Row{
                                Layout.fillHeight: true
                                width: parent.width
                                Text {
                                    width: parent.width * 0.8
                                    height: parent.height
                                    textFormat: Text.RichText
                                    text:publisher.velocityValue + "<b style='font-size: 20px;'> mm/s<b>"
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 60
                                    color: textColor
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }
                                Item {
                                    width: parent.width * 0.2
                                    height: parent.height
                                    ColumnLayout{
                                        height: parent.height
                                        width: parent.width
                                        IButton{
                                            defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                            clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                            onClicked: {
                                                //add logicr
                                            }
                                        }

                                        Item {
                                            Layout.fillHeight: true
                                        }
                                        IButton{
                                            sourceRot: 180
                                            defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                            clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                            onClicked: {
                                                //add logicr
                                            }
                                        }
                                    }
                                }
                            }
                            Item {
                                height: parent.height * 0.1
                            }
                        }
                    }
                    Rectangle{
                        id:rectBox3
                        width: widthScreen * 0.19
                        height: heightScreen * 0.25
                        border.color: borderSecondBg
                        color: secondBg
                        radius: 15
                        ColumnLayout{
                            id:colum1
                            anchors.fill: parent
                            anchors.topMargin: 10
                            Text {
                                Layout.fillWidth: true
                                height: rectBox3.height * 0.2
                                text: qsTr("Horizontal Slide Position")
                                font.family: "Tahoma"
                                font.bold: true
                                font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                 color: textColor
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignHCenter
                            }
                            Text {
                                    Layout.fillWidth: true
                                    Layout.fillHeight: true
                                    textFormat: Text.RichText
                                    text: Math.round(publisher.currentValue*100)/100 + "<b style='font-size: 18px;'> mm<b>"
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize:text.length < 12 ? 60 : 30
                                    color: textColor
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }
                            Item {
                                height: parent.height * 0.1
                            }
                        }
                        Item {
                            width: parent.width
                            height: parent.height * 0.1
                            anchors.bottom: colum1.bottom
                            anchors.bottomMargin: 28
                            RowLayout{
                                height: parent.height
                                anchors.right: parent.right
                                anchors.left: parent.left
                                anchors.rightMargin: 40
                                anchors.leftMargin: 40
                                IButton{
                                    sourceRot: -90
                                    defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                    clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                    onClicked: {
                                        publisher.call_slidecw(1)

                                        //add logicr
                                    }
                                }
                                Item {
                                    Layout.fillWidth: true
                                }
                                IButton{
                                    sourceRot: 90
                                    defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                    clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                    onClicked: {
                                        publisher.call_slideccw(1)

                                    }
                                }
                            }
                        }
                    }

//                    Rectangle{
//                        id:rectBox4
//                        width: widthScreen * 0.18
//                        height: heightScreen * 0.25
//                        border.color: borderSecondBg
//                        color: secondBg
//                        radius: 15
//                        ColumnLayout{
//                            anchors.fill: parent
//                            anchors.topMargin: 10
//                            Text {
//                                Layout.fillWidth: true
//                                height: rectBox4.height * 0.2
//                                text: qsTr("Linear Actuator")
//                                font.family: "Tahoma"
//                                font.bold: true
//                                font.pixelSize: Math.min(parent.width, parent.height) * 0.1
//                                color: textColor
//                                verticalAlignment: Text.AlignVCenter
//                                horizontalAlignment: Text.AlignHCenter
//                            }
//                            Text {
//                                  Layout.fillWidth: true
//                                  height: parent.height
//                                  textFormat: Text.RichText
//                                  text: publisher.lacValue + "<b style='font-size: 18px;'> mm<b>"
//                                  font.family: "Tahoma"
//                                  font.bold: true
//                                  font.pixelSize: 30
//                                  color: textColor
//                                  verticalAlignment: Text.AlignVCenter
//                                  horizontalAlignment: Text.AlignHCenter
//                                }
//                            Item {
//                                width: parent.width
//                                height: parent.height * 0.1
//                                anchors.bottom: parent.bottom
//                                anchors.bottomMargin: 20

//                                ColumnLayout{
//                                    width: parent.width
//                                    anchors.centerIn: parent
//                                    IButton{
//                                        // Assuming no rotation is needed for the up arrow
//                                        sourceRot: 0
//                                        defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
//                                        clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
//                                        onClicked: {
//                                            publisher.call_laccw(1);
//                                            // Add logic here
//                                        }
//                                    }
//                                    IButton{
//                                        // Rotate the image to make it a down arrow
//                                        sourceRot: 180
//                                        defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
//                                        clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
//                                        onClicked: {
//                                            publisher.call_lacccw(1);
//                                        }
//                                    }
//                                }
//                            }

//                            Item {
//                                height: parent.height * 0.1
//                            }

//                        }


//                    }


                    Rectangle{
                        id: rectBox4
                        width: widthScreen * 0.18
                        height: heightScreen * 0.25
                        border.color: borderSecondBg
                        color: secondBg
                        radius: 15
                        ColumnLayout{
                            anchors.fill: parent
                            anchors.topMargin: 10
                            Text {
                                Layout.fillWidth: true
                                height: rectBox4.height * 0.2
                                text: qsTr("Linear Actuator")
                                font.family: "Tahoma"
                                font.bold: true
                                font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                color: textColor
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignHCenter
                            }
                            RowLayout {
                                Layout.fillWidth: true
                                spacing: 30 // Adjust spacing as needed

                                Text {
                                    text: publisher.lacValue + " mm"
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 30
                                    color: textColor
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }

                                IButton{
                                    // Assuming no rotation is needed for the up arrow
                                    sourceRot: 0
                                    defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                    clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                    onClicked: {
                                        publisher.call_lacccw(1);
                                        // Add logic here
                                    }
                                }
                                IButton{
                                    // Rotate the image to make it a down arrow
                                    sourceRot: 180
                                    defaultImage: "qrc:/UI/Assets/dashboard/up-arrow.png"
                                    clickedImage: "qrc:/UI/Assets/dashboard/up-arrow_c.png"
                                    onClicked: {
                                        publisher.call_laccw(1);
                                    }
                                }
                            }

//                            Item {
//                                height: parent.height * 0.1
//                            }
                        }
                    }


                    Rectangle{
                                           id:rectBox5
                                           width: widthScreen * 0.12
                                           height: heightScreen * 0.25
                                           border.color: borderSecondBg
                                           color: secondBg
                                           radius: 15
                                           ColumnLayout{

                                               anchors.fill: parent
                                               anchors.topMargin: 10
                                               Text {
                                                   Layout.fillWidth: true
                                                   height: rectBox5.height * 0.2
                                                   text: qsTr("Linear Speed ")
                                                   font.family: "Tahoma"
                                                   font.bold: true
                                                   font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                                   color: textColor
                                                   verticalAlignment: Text.AlignVCenter
                                                   horizontalAlignment: Text.AlignHCenter
                                               }
                                               Text {
                                                       Layout.fillWidth: true
                                                       height: parent.height
                                                       textFormat: Text.RichText
                                                       text: Math.round(publisher.speedsetting) + "<b style='font-size: 18px;'> mm/s<b>"
                                                       font.family: "Tahoma"
                                                       font.bold: true
                                                       font.pixelSize:text.length < 12 ? 60 : 30
                                                       color: textColor
                                                       verticalAlignment: Text.AlignVCenter
                                                       horizontalAlignment: Text.AlignHCenter
                                                   }
                                               Item {
                                                   height: parent.height * 0.1
                                               }
                                           }
                                           Item {
                                               width: parent.width
                                               height: parent.height * 0.1
                                               anchors.bottom: colum1.bottom
                                               anchors.bottomMargin: 28

                                           }
                                       }

                    Rectangle{
                                            id:rectBox6
                                            width: widthScreen * 0.12
                                            height: heightScreen * 0.25
                                            border.color: borderSecondBg
                                            color: secondBg
                                            radius: 15
                                            ColumnLayout{
                                                anchors.fill: parent
                                                anchors.topMargin: 10
                                                Text {
                                                    Layout.fillWidth: true
                                                    height: rectBox4.height * 0.2
                                                    text: qsTr("Angular Speed")
                                                    font.family: "Tahoma"
                                                    font.bold: true
                                                    font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                                    color: textColor
                                                    verticalAlignment: Text.AlignVCenter
                                                    horizontalAlignment: Text.AlignHCenter
                                                }
                                                Text {
                                                      Layout.fillWidth: true
                                                      height: parent.height
                                                      textFormat: Text.RichText
                                                      text: publisher.anglesetting + "<b style='font-size: 18px;'> Deg/s<b>"
                                                      font.family: "Tahoma"
                                                      font.bold: true
                                                      font.pixelSize: 30
                                                      color: textColor
                                                      verticalAlignment: Text.AlignVCenter
                                                      horizontalAlignment: Text.AlignHCenter
                                                    }
                                                Item {
                                                          width: parent.width
                                                          height: parent.height * 0.1
                                                          anchors.bottom: colum1.bottom
                                                          anchors.bottomMargin: 10

                                                          RowLayout{
                                                              height: parent.height
                                                              anchors.right: parent.right
                                                              anchors.left: parent.left
                                                              anchors.rightMargin: 40
                                                              anchors.leftMargin: 40

                                                   Item {
                                                           Layout.fillWidth: true
                                                              }

                                                          }
                                                      }

                                                Item {
                                                    height: parent.height * 0.1
                                                }

                                            }


                                        }





                    Rectangle{
                        id: crawlerr
                        width: widthScreen * 0.24
                        height: heightScreen * 0.25
                        border.color:borderSecondBg
                        color: secondBg
                        radius: 15
                        ColumnLayout{
                            anchors.fill: parent
                            anchors.topMargin: 10
                            id:cr


                            Text {
                                Layout.fillWidth: true
                                height: crawlerr.height * 0.2
                                text: qsTr("Crawler")
                                font.family: "Tahoma"
                                font.bold: true
                                 font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                color: textColor
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignHCenter
                            }


                            Item{
                                width: crawlerr.width
                                height:rect.height
                                RowLayout{
                                    id:rect
                                    anchors.centerIn: parent
                                    SButton{
                                        id: intCrawler
                                        height: 20
                                        name:  "Initialize"
                                        baseColor:  mainAppColor
                                        borderColor: mainAppColor
                                        implicitWidth: 70
                                        onClicked: {

                                            init_crawler(1)
                                            initCrawler()

                                        }


                                    }
                                    SButton{
                                        id: stpCrawler
                                        height: 20
                                        name:"Stop"
                                        baseColor:  "#FF2E2E"
                                        borderColor: "#FF2E2E"
                                        implicitWidth: 70

                                        onClicked: {
                                            init_crawler(0)
                                            stopCrawler()


                                        }
                                    }

                                    SButton{

                                        id: resetCrawler
                                        height: 20
                                        implicitWidth: 70

                                        name: "Reset"
                                        baseColor: mainAppColor
                                        borderColor: mainAppColor
                                        onClicked: {
                                            publisher.rst_crawler(1)
                                            rstCrawler()
                                        }

                                    }
                                    SButton{
                                        id: crawlerStatus
                                        height: 20
                                        name:  "Status"
                                        baseColor:  mainAppColor
                                        borderColor: mainAppColor
                                        implicitWidth: 70

                                        onClicked: {

                                            crawlerDialog.text =  "\n\nErrors:\n\n"+cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n"+cMotors[1]+" : "+cErr[crawlerErr[1]]+"\n"+cMotors[2]+" : "+cErr[crawlerErr[2]]+"\n"+cMotors[3]+" : "+cErr[crawlerErr[3]]+"\n\n\n"+
                                                    "\n\nTemperature:\n\n" +cMotors[0]+" : "+crawlerTemp[0]+" deg"+"\n"+cMotors[1]+" : "+crawlerTemp[1]+" deg"+"\n"+cMotors[2]+" : "+crawlerTemp[2]+" deg"+"\n"+cMotors[3]+" : "+crawlerTemp[3]+" deg"+"\n"
                                            crawlerDialog.icon = StandardIcon.Information
                                            crawlerDialog.open()

                                        }
                                    }

                                }

                            }
                            Item{
                                Layout.fillHeight: true
                                width: parent.width

                                Rectangle{
                                    id:rectId
                                    anchors.centerIn: parent
                                    anchors.verticalCenterOffset: 5
                                    width: widthScreen * 0.08
                                    height: heightScreen * 0.10
                                    color: "#232F34"
                                    Image {
                                        anchors.centerIn: parent

                                        sourceSize.width: 40
                                        sourceSize.height: 40
                                        source:"qrc:/UI/Assets/dashboard/arrow.png"
                                    }
                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x - width
                                    y:rectId.y - height+25
                                    Image {
                                        id:fl
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.backrRight ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x + rectId.width
                                    y:rectId.y - height+25
                                    Image {
                                        id:fr
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source:  publisher.crawlStatus.frontRight? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x + rectId.width
                                    y:rectId.y + rectId.height-25
                                    Image {
                                        id:bl
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.frontLeft  ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x - width
                                    y:rectId.y + rectId.height-25
                                    Image {
                                        id:br
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.backLeft ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                            }



                        }
                    }

                // visble false
//                    Rectangle{
//                        width: widthScreen * 0.28
//                        height: heightScreen * 0.25
//                        border.color: "#6fda9c"
//                        color: "#344955"
//                        radius: 15
//                        visible: false

//                        ColumnLayout{
//                            anchors.fill: parent
//                            spacing: 0
//                            RowLayout{
//                                Text {
//                                    Layout.fillWidth: true
//                                    text: qsTr("Tool")
//                                    font.family: "Tahoma"
//                                    font.bold: true
//                                    font.pixelSize: 24
//                                    color: "#FFFFFF"
//                                    horizontalAlignment: Text.AlignHCenter
//                                    verticalAlignment: Text.AlignVCenter
//                                }
//                            }
//                            RowLayout{
//                                Layout.fillHeight: true
//                                width: parent.width

//                                Item{
//                                    Layout.fillHeight: true
//                                    Layout.fillWidth: true
//                                    ColumnLayout{
//                                        anchors.centerIn: parent
//                                        RowLayout{

//                                            Image {
//                                                id:magnetStatus
//                                                sourceSize.width: 35
//                                                sourceSize.height: 35
//                                                source: "qrc:/UI/Assets/dashboard/remove.png"
//                                            }

//                                            Button {
//                                                id: magnet
//                                                text : "Magnet"
//                                                implicitWidth : 70
//                                                implicitHeight : 30

//                                                background: Rectangle {
//                                                    color:"#6fda9c"
//                                                    radius: 5
//                                                    opacity: magnet.down ? 0.5 : 1

//                                                }

//                                                onClicked: {
//                                                    publisher.toolToggle = "7"

//                                                }
//                                            }

//                                            Item{
//                                                width: 8
//                                            }


//                                            Image {
//                                                id:pumpStatus
//                                                sourceSize.width: 35
//                                                sourceSize.height: 35
//                                                source: "qrc:/UI/Assets/dashboard/remove.png"
//                                            }

//                                            Button {
//                                                id: pump
//                                                text : "Pump"
//                                                implicitWidth : 70
//                                                implicitHeight : 30

//                                                background: Rectangle {
//                                                    color:"#6fda9c"
//                                                    radius: 5
//                                                    opacity: pump.down ? 0.5 : 1

//                                                }

//                                                onClicked: {
//                                                    publisher.toolToggle = "4"

//                                                }
//                                            }
//                                            Item{
//                                                width: 8
//                                            }
//                                            Image {
//                                                id:grinderStatus
//                                                sourceSize.width: 35
//                                                sourceSize.height: 35
//                                                source: "qrc:/UI/Assets/dashboard/remove.png"
//                                            }

//                                            Button {
//                                                id: grinder
//                                                text : "Grinder"
//                                                implicitWidth : 70
//                                                implicitHeight : 30

//                                                background: Rectangle {
//                                                    color:"#6fda9c"
//                                                    radius: 5
//                                                    opacity: grinder.down ? 0.5 : 1

//                                                }

//                                                onClicked: {
//                                                    publisher.toolToggle = "0"

//                                                }
//                                            }
//                                        }
//                                        Item {
//                                            height:20
//                                        }
//                                        RowLayout{

//                                            Image {
//                                                id:flightStatus
//                                                sourceSize.width: 35
//                                                sourceSize.height: 35
//                                                source: "qrc:/UI/Assets/dashboard/remove.png"
//                                            }
//                                            Button {
//                                                id: flight
//                                                text : "Upper Light"
//                                                implicitWidth : 120
//                                                implicitHeight : 30

//                                                background: Rectangle {
//                                                    color:"#6fda9c"
//                                                    radius: 5
//                                                    opacity: flight.down ? 0.5 : 1

//                                                }

//                                                onClicked: {
//                                                    publisher.toolToggle = "6"

//                                                }
//                                            }
//                                            Item {
//                                                width:30
//                                            }



//                                            Image {
//                                                id:blightStatus
//                                                sourceSize.width: 35
//                                                sourceSize.height: 35
//                                                source: "qrc:/UI/Assets/dashboard/remove.png"
//                                            }
//                                            Button {
//                                                id: blight
//                                                text : "Bottom Light"
//                                                implicitWidth : 120
//                                                implicitHeight : 30

//                                                background: Rectangle {
//                                                    color:"#6fda9c"
//                                                    radius: 5
//                                                    opacity: blight.down ? 0.5 : 1

//                                                }

//                                                onClicked: {
//                                                    publisher.toolToggle = "5"

//                                                }
//                                            }


//                                        }

//                                    }

//                                }
//                            }

//                        }

//                    }
//                    Rectangle{
//                        width: widthScreen * 0.20
//                        height: heightScreen * 0.25
//                        border.color: "#6fda9c"
//                        color: "#344955"
//                        radius: 15
//                        visible: false

//                        ColumnLayout{
//                            anchors.fill: parent
//                            RowLayout{

//                                Text {
//                                    Layout.fillWidth: true
//                                    text: qsTr("Arm")
//                                    font.family: "Tahoma"
//                                    font.bold: true
//                                    font.pixelSize: 24
//                                    color: "#FFFFFF"
//                                    horizontalAlignment: Text.AlignHCenter
//                                    verticalAlignment: Text.AlignVCenter
//                                }

//                            }

//                            RowLayout{
//                                Layout.fillHeight: true
//                                Item{
//                                    Layout.fillHeight: true
//                                    Layout.fillWidth: true

//                                    ColumnLayout{
//                                        Layout.fillHeight: true
//                                        anchors.fill: parent


//                                        RowLayout{
//                                            Layout.fillWidth: true

//                                            RowLayout{
//                                                Layout.leftMargin: 40


//                                                Image {
//                                                    sourceSize.width: 20
//                                                    sourceSize.height: 20
//                                                    source: publisher.armStatus[0] ? "qrc:/UI/Assets/dashboard/remove.png" : "qrc:/UI/Assets/dashboard/tick.png"
//                                                }
//                                                Text {
//                                                    color: "#6fda9c"
//                                                    font.pixelSize: 20
//                                                    text: qsTr("Base")
//                                                }

//                                            }

//                                            RowLayout{
//                                                Layout.leftMargin: 32

//                                                Image {
//                                                    sourceSize.width: 20
//                                                    sourceSize.height: 20
//                                                    source:  publisher.armStatus[1]? "qrc:/UI/Assets/dashboard/remove.png" : "qrc:/UI/Assets/dashboard/tick.png"
//                                                }
//                                                Text {
//                                                    color: "#6fda9c"
//                                                    font.pixelSize: 20
//                                                    text: qsTr("Shoulder")
//                                                }


//                                            }
//                                        }
//                                        RowLayout{
//                                            RowLayout{

//                                                Layout.leftMargin: 40

//                                                Image {
//                                                    sourceSize.width: 20
//                                                    sourceSize.height: 20
//                                                    source: publisher.armStatus[2] ? "qrc:/UI/Assets/dashboard/remove.png" : "qrc:/UI/Assets/dashboard/tick.png"
//                                                }
//                                                Text {
//                                                    color: "#6fda9c"
//                                                    font.pixelSize: 20
//                                                    text: qsTr("Elbow")
//                                                }
//                                            }
//                                            RowLayout{
//                                                Layout.leftMargin: 20

//                                                Image {
//                                                    sourceSize.width: 20
//                                                    sourceSize.height: 20
//                                                    source: publisher.armStatus[3]  ? "qrc:/UI/Assets/dashboard/remove.png" : "qrc:/UI/Assets/dashboard/tick.png"
//                                                }
//                                                Text {
//                                                    color: "#6fda9c"
//                                                    font.pixelSize: 20
//                                                    text: qsTr("Tool")
//                                                }
//                                            }}

//                                        RowLayout{

//                                            Layout.leftMargin:(widthScreen * 0.20 -245)/2

//                                            SButton{

//                                                id: intArm
//                                                height: 20
//                                                name: "Initilize"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                implicitWidth: 120
//                                                onClicked: {
//                                                    publisher.call_arminit(1)
//                                                    initArm()
//                                                }
//                                            }


//                                            SButton{

//                                                id: resetArm
//                                                height: 20
//                                                implicitWidth: 120

//                                                name: "Reset"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {
//                                                    publisher.rst_arm(1)

//                                                    rstArm()

//                                                }

//                                            }



//                                        }

//                                        RowLayout{

//                                            Layout.leftMargin:(widthScreen * 0.20 -245)/2

//                                            SButton{

//                                                id: stpArm
//                                                height: 20
//                                                name: "Stop"
//                                                baseColor: "red"
//                                                borderColor: "red"
//                                                implicitWidth: 120
//                                                onClicked: {
//                                                    publisher.call_arminit(0)

//                                                    stopArm()
//                                                }
//                                            }


//                                            SButton{

//                                                id: armmStatus
//                                                height: 20
//                                                name:  "Status"
//                                                baseColor:  mainAppColor
//                                                borderColor: mainAppColor
//                                                implicitWidth: 120

//                                                onClicked: {
//                                                    publisher.trig_armStatus()
//                                                    console.log("called in button")

//                                                }
//                                            }


//                                        }
//                                    }


//                                }

//                            }

//                        }
//                    }
//                    Rectangle{
//                        width: widthScreen * 0.22
//                        height: heightScreen * 0.25
//                        border.color: "#6fda9c"
//                        border.width: 2
//                        color: "#344955"
//                        radius: 15
//                        visible: false

//                        ColumnLayout{
//                            anchors.fill: parent
//                            spacing: 0
//                            RowLayout{
//                                Text {
//                                    Layout.fillWidth: true
//                                    font.family: "Tahoma"
//                                    font.bold: true
//                                    font.pixelSize: 50
//                                    color: "#6fda9c"
//                                    verticalAlignment: Text.AlignVCenter
//                                    horizontalAlignment: Text.AlignHCenter
//                                    topPadding: 5

//                                    function calcThick()
//                                    {
//                                        var u= publisher.thickness.unit
//                                        var un ="NAN"
//                                        if(u===1)
//                                            un= "mm"
//                                        else if(u===0)
//                                            un= "in"
//                                        else
//                                            un ="NAN"
//                                        return(" "+ un)

//                                    }
//                                    text:   publisher.thickness.unit === -1 ? "-----" : publisher.thickness.thickness.toFixed(2) + calcThick()
//                                }



//                            }
//                            RowLayout{
//                                Layout.fillHeight: true
//                                width: parent.width
//                                Item{
//                                    Layout.fillHeight: true
//                                    Layout.fillWidth: true
//                                    ColumnLayout{
//                                        anchors.left : parent
//                                        RowLayout{
//                                            Text {
//                                                color: "#6fda9c"
//                                                font.pixelSize: 12
//                                                text: qsTr("Velocity :")
//                                                leftPadding: 10
//                                            }
//                                            Text {
//                                                color: "#6fda9c"

//                                                font.pixelSize: 12
//                                                text: publisher.utstatus.vel === undefined ? "NAN" : publisher.utstatus.vel + " " + "m/s"
//                                            }
//                                            Text {
//                                                color: "#6fda9c"
//                                                font.pixelSize: 12
//                                                leftPadding: 10

//                                                text: qsTr("DeepCoat :")
//                                            }
//                                            Text {
//                                                color: "#6fda9c"

//                                                font.pixelSize: 12
//                                                text: publisher.utstatus.deepcoat === undefined ? "NAN" : publisher.utstatus.deepcoat
//                                            }

//                                            Text {
//                                                color: "#6fda9c"
//                                                font.pixelSize: 12
//                                                leftPadding: 10
//                                                text: qsTr("Echoes :")
//                                            }
//                                            Text {
//                                                color: "#6fda9c"

//                                                font.pixelSize: 12
//                                                text: publisher.utstatus.echo === undefined ? "NAN" : publisher.utstatus.echo
//                                            }


//                                        }
//                                        RowLayout{
//                                            Text {
//                                                color: "#6fda9c"
//                                                font.pixelSize: 20
//                                                text: qsTr("Velocity   :")
//                                                leftPadding: 10
//                                            }

//                                            TextField {
//                                                id: sendVel
//                                                Layout.preferredWidth: 80
//                                                Layout.alignment: Qt.AlignHCenter
//                                                color: mainTextColor
//                                                font.pointSize: 14
//                                                font.family: "fontawesome"
//                                                leftPadding: 5
//                                                activeFocusOnPress: true
//                                                Keys.onPressed: (event)=> {
//                                                                    if (event.key === Qt.Key_Return) {
//                                                                        publisher.utVel = text

//                                                                    }}
//                                                background: Rectangle {
//                                                    implicitWidth:  30
//                                                    implicitHeight: 30
//                                                    radius: implicitHeight / 2
//                                                    color: "transparent"

//                                                    Rectangle {
//                                                        width: 80
//                                                        height: 1
//                                                        anchors.horizontalCenter: parent.horizontalCenter
//                                                        anchors.bottom: parent.bottom
//                                                        color: mainAppColor
//                                                    }
//                                                }
//                                            }
//                                            SButton{
//                                                height: 15
//                                                name: "Send"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {
//                                                    publisher.utVel = sendVel.text
//                                                }


//                                            }
//                                        }
//                                        RowLayout{

//                                            Layout.fillHeight: true
//                                            width: parent.width/2
//                                            Text {
//                                                Layout.alignment: Qt.AlignCenter

//                                                color: "#6fda9c"
//                                                font.pixelSize: 20
//                                                leftPadding: 10

//                                                text: qsTr("DeepCoat :")
//                                            }

//                                            TextField {
//                                                id: sendDC
//                                                Layout.preferredWidth: 80
//                                                Layout.alignment: Qt.AlignHCenter
//                                                color: mainTextColor
//                                                font.pointSize: 14
//                                                font.family: "fontawesome"
//                                                leftPadding: 5
//                                                activeFocusOnPress: true
//                                                Keys.onPressed: (event)=> {
//                                                                    if (event.key === Qt.Key_Return) {
//                                                                        publisher.utData = sendDC.text

//                                                                    }}
//                                                background: Rectangle {
//                                                    implicitWidth:  30
//                                                    implicitHeight: 30
//                                                    radius: implicitHeight / 2
//                                                    color: "transparent"

//                                                    Rectangle {
//                                                        width: 80
//                                                        height: 1
//                                                        anchors.horizontalCenter: parent.horizontalCenter
//                                                        anchors.bottom: parent.bottom
//                                                        color: mainAppColor
//                                                    }
//                                                }
//                                            }
//                                            SButton{
//                                                height: 15
//                                                name: "Send"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {

//                                                    publisher.utData = sendDC.text
//                                                }


//                                            }
//                                        }
//                                        RowLayout{
//                                            Text {
//                                                color: "#6fda9c"
//                                                font.pixelSize: 20
//                                                leftPadding: 10
//                                                text: qsTr("XRange :")
//                                            }

//                                            TextField {
//                                                id: sendXR
//                                                Layout.preferredWidth: 80
//                                                Layout.alignment: Qt.AlignHCenter
//                                                color: mainTextColor
//                                                font.pointSize: 14
//                                                font.family: "fontawesome"
//                                                leftPadding: 5
//                                                activeFocusOnPress: true
//                                                Keys.onPressed: (event)=> {
//                                                                    if (event.key === Qt.Key_Return) {
//                                                                        publisher.utData = sendXR.text

//                                                                    }}
//                                                background: Rectangle {
//                                                    implicitWidth:  30
//                                                    implicitHeight: 30
//                                                    radius: implicitHeight / 2
//                                                    color: "transparent"

//                                                    Rectangle {
//                                                        width: 80
//                                                        height: 1
//                                                        anchors.horizontalCenter: parent.horizontalCenter
//                                                        anchors.bottom: parent.bottom
//                                                        color: mainAppColor
//                                                    }
//                                                }
//                                            }
//                                            SButton{
//                                                height: 15
//                                                name: "Send"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {
//                                                    //
//                                                    publisher.utData = sendXR.text
//                                                }


//                                            }
//                                        }
//                                        Item {
//                                            height: 2
//                                        }
//                                    }

//                                }
//                            }

//                        }

//                    }

                }

                RowLayout{
                    spacing: 2
                    Rectangle {
                        id:screen1
                        width: (widthScreen * 0.65)
                        height: (heightScreen * 0.90)
                        border.color: borderSecondBg
                        color: secondBg
                        border.width: 2
                        radius: 15

                        MediaPlayer {
                            id: videoPlayer

                            muted: true
                            autoPlay: true
                            //                            playlist: Playlist {
                            //                                PlaylistItem { source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4" }
                            //                                PlaylistItem { source: "http://212.67.236.61/mjpg/video.mjpg?camera=1&timestamp=1561621294984"}
                            //                                PlaylistItem { source: "http://195.196.36.242/mjpg/video.mjpg" }
                            //                            }
                            playlist: Playlist {
                                   PlaylistItem { source:"gst-pipeline: udpsrc port=5000 ! application/x-rtp,encoding-name=H264,payload=96 ! rtph264depay ! avdec_h264 ! videoconvert ! videoflip method=5 ! videoscale ! video/x-raw, width=(int)1280, height=(int)720 ! autovideosink"}

                            }

                        }
//                        HelloCpp {
//                            id: demo

//                        }
//                        RecordCams
//                        {
//                            id: recCams
//                        }


                        VideoOutput {
                            id: camera
                            anchors.fill: parent
                            source: videoPlayer
                            fillMode:VideoOutput.PreserveAspectCrop

                            function save() {
                                fullScreenRect.visible = true
                                fullScreenView.enabled = true
                                full_cam= arrange_cam[0]
                                fullScreenView.sourceItem = camera
                                fullScreenView.save()
                                fullScreenRect.visible = false
                                fullScreenView.enabled = false
                                publisher.call_capImg(arrange_cam[0])
                            }
                        }

                        Component.onCompleted: {
                            videoPlayer.playlist.currentIndex = 0;
                            videoPlayer.play();
                        }

                        Rectangle{
                            id:videoToolBar
                            anchors.bottom: parent.bottom
                            width: parent.width
                            height: parent.height*0.05
                            opacity: 0.5
                        }
                        RowLayout{
                            anchors.fill:videoToolBar
                            Item {
                                width: 50
                            }

                            Item{
                                Layout.fillHeight: true
                                width: 30

                                Button {
                                    id: btnON1
                                    text : "Record"
                                    width : 100
                                    height : 25
                                    anchors.centerIn: parent

                                    background: Rectangle {
                                        color:buttonBg
                                        radius: 8
                                    }

                                    onClicked: {
//                                        demo.gstRecord("Recording...");

                                         btnON1.text = "Recording Started";

                                    }
                                }

                            }

                            Item {
                                width: 100
                            }
                            Item{
                                Layout.fillHeight: true
                                width: 30

//                                Button {
//                                    id: btnSTOP1
//                                    text : "Stop"
//                                    width : 100
//                                    height : 25
//                                    anchors.centerIn: parent
//                                    background: Rectangle {
//                                        color:buttonBg
//                                        radius: 8
//                                    }

//                                    onClicked: {

//                                        demo.gstStop("Stop");
//                                        btnON1.text = "Record";
//                                    }
//                                }

                            }
                            Item {
                                Layout.fillWidth: true
                            }
                            Item{
                                Layout.fillHeight: true
                                width: 30
                                Image {
                                    id:resetCams
                                    sourceSize.width: 25
                                    sourceSize.height: 25
                                    anchors.centerIn: parent
                                    source: "qrc:/UI/Assets/dashboard/reset.png"
                                }
                                MouseArea{
                                    anchors.fill: parent
                                    onClicked: {
                                        resetCam()
                                    }
                                }
                            }
                            Item {
                                width:5
                            }
                            Item{
                                Layout.fillHeight: true
                                width: 30
                                Image {
                                    id:captureIcon1Id
                                    sourceSize.width: 25
                                    sourceSize.height: 25
                                    anchors.centerIn: parent
                                    source: "qrc:/UI/Assets/dashboard/capture.png"
                                }
                                MouseArea{
                                    anchors.fill: parent
                                    onClicked: {
                                        camera.save()
                                    }
                                }
                            }
                            Item {
                                width:5
                            }
                            Item{
                                Layout.fillHeight: true
                                width: 30
                                Image {
                                    id:screenSizeIcon1Id
                                    sourceSize.width: 25
                                    sourceSize.height: 25
                                    anchors.centerIn: parent
                                    source: "qrc:/UI/Assets/dashboard/expand.png"
                                }
                                MouseArea{
                                    anchors.fill: parent
                                    onClicked: {
                                        fullScreenRect.visible = true
                                        fullScreenView.enabled = true
                                        fullScreenView.sourceItem = camera
                                        full_cam=1
                                    }
                                }
                            }


                            Item {
                                width:5
                            }
                        }


                    }
                    ColumnLayout{
                        width: widthScreen * 0.60
                        height: heightScreen * 0.90
                        Rectangle{
                            implicitWidth: widthScreen * 0.60
                            implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                            border.color: borderSecondBg
                            color: secondBg
                            radius: 15
                            ColumnLayout{
                                anchors.centerIn: parent

                                SButton{
                                    property bool isPressed: false
                                    height: 20
                                    name:  "AUTO MODE"
                                    baseColor:  isPressed ? "red" : buttonBg
                                    borderColor: buttonBg
                                    implicitWidth:(widthScreen * 0.42)/2
                                    onClicked: {
                                        isPressed = !isPressed
                                        publisher.call_automode(1)

                                    }
                                }
                                SButton{
                                    property bool  isPressed: false
                                    height: 20
                                    name:  "MANUAL MODE"
                                    baseColor:  isPressed ? "blue" : buttonBg
                                    borderColor: buttonBg
                                    implicitWidth:(widthScreen * 0.42)/2
                                    onClicked: {
                                        isPressed = !isPressed
                                        publisher.call_automode(0)
                                        init_crawler(0)
                                        stopCrawler()
                                        camera_runner.startJoystick();
                                    }
                                }
                                SButton{
                                    height: 20
                                    name:  "RESET"
                                    baseColor:  buttonBg
                                    borderColor: buttonBg
                                     implicitWidth:(widthScreen * 0.42)/2
                                    onClicked: {
                                    }
                                }

                                SButton{
                                    height: 20
                                    name: "SHUTDOWN"
                                    baseColor: "#FF2E2E"
                                    borderColor: "#911911"
                                     implicitWidth:(widthScreen * 0.42)/2
                                    onClicked: {
                                        publisher.shd_crawler(1)
                                    }
                                }
                            }
                        }
                        RowLayout{
                            implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                            implicitWidth: widthScreen * 0.60
                            Rectangle{
                                implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                                implicitWidth: ((widthScreen * 0.60)/3)-5/3
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                ColumnLayout{
                                    anchors.fill: parent
                                    anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("Tripmeter")
                                        font.family: "Tahoma"
                                        font.bold: true
                                        font.pixelSize: 24
                                         color: textColor
                                        verticalAlignment: Text.AlignVCenter
                                        horizontalAlignment: Text.AlignHCenter
                                    }
                                    Text {
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                            textFormat: Text.RichText
                                            text: publisher.tripValue + "<b style='font-size: 20px;'> mtr<b>"
                                            font.family: "Tahoma"
                                            font.bold: true
                                            font.pixelSize: 30
                                             color: textColor
                                            verticalAlignment: Text.AlignVCenter
                                            horizontalAlignment: Text.AlignHCenter
                                        }
                                    Item{
                                        height: (((heightScreen * 0.90)/3 )-5/2)*0.2
                                        Layout.fillWidth: true
                                        SButton{
                                            name:  "RESET"
                                            baseColor:  buttonBg
                                            borderColor: buttonBg
                                            anchors.fill: parent
                                            anchors.leftMargin: 30
                                            anchors.rightMargin: 30
                                            onClicked: {
                                                publisher.call_resetTrip(1)
                                            }
                                        }
                                    }
                                    Item{
                                        height: 16
                                        Layout.fillWidth: true
                                    }


//                                    ColumnLayout{
//                                        anchors.bottom: parent.bottom
//                                        anchors.horizontalCenter: parent.horizontalCenter
//                                        SButton{
//                                            height: 16
//                                            name:  "RESET"
//                                            baseColor:  buttonBg
//                                            borderColor: buttonBg
//                                            Layout.fillHeight: true
//                                            Layout.alignment: Qt.AlignTop
//                                            implicitWidth:(widthScreen * 0.42)/4
//                                            onClicked: {
//                                                publisher.call_resetTrip(1)
//                                            }
//                                        }
//                                        Item {
//                                            height: parent.height * 0.4
//                                        }

//                                    }



//                                    Item {
//                                        height: parent.height * 0.1
//                                    }
                                }
                            }
                            Rectangle{
                                implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                                implicitWidth: ((widthScreen * 0.60)/3)-5/3
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                ColumnLayout{
                                    anchors.fill: parent
                                    anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("Encoder")
                                        font.family: "Tahoma"
                                        font.bold: true
                                        font.pixelSize: 24
                                         color: textColor
                                        verticalAlignment: Text.AlignVCenter
                                        horizontalAlignment: Text.AlignHCenter
                                    }
                                    Text {
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                            textFormat: Text.RichText
                                            text: "30" + "<b style='font-size: 20px;'> mm<b>"
                                            font.family: "Tahoma"
                                            font.bold: true
                                            font.pixelSize: 60
                                             color: textColor
                                            verticalAlignment: Text.AlignVCenter
                                            horizontalAlignment: Text.AlignHCenter
                                        }
                                    Item {
                                        height: parent.height * 0.1
                                    }
                                }

                            }
                            Rectangle{
                                implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                                implicitWidth: ((widthScreen * 0.60)/3)-5/3
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                ColumnLayout{
                                    anchors.fill: parent
                                    anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("Odometer")
                                        font.family: "Tahoma"
                                        font.bold: true
                                         font.pixelSize: Math.min(parent.width, parent.height) * 0.1
                                         color: textColor
                                        verticalAlignment: Text.AlignVCenter
                                        horizontalAlignment: Text.AlignHCenter
                                    }
                                    Text {
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                            textFormat: Text.RichText
                                            text: publisher.odomValue + "<b style='font-size: 20px;'> mtr<b>"
                                            font.family: "Tahoma"
                                            font.bold: true
                                            font.pixelSize: 30
                                             color: textColor
                                            verticalAlignment: Text.AlignVCenter
                                            horizontalAlignment: Text.AlignHCenter
                                        }
                                    Item {
                                        height: parent.height * 0.1
                                    }
                                }

                            }
                        }
                        Rectangle{
                            id:emergencyBox
                            implicitWidth: widthScreen * 0.60
                            implicitHeight: ((heightScreen * 0.90)/3 )-5/2
                            border.color: borderSecondBg
                            color: secondBg
                            radius: 15
                            ColumnLayout{
                                anchors.fill: parent
                                anchors.topMargin: 10
                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Emergency STOP")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                     color: textColor
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }

                                Item {
                                    height: emergencyBox.height*0.30
                                    Layout.fillWidth: true
                                    SButton{
                                        anchors.centerIn: parent
                                        height: parent.height
                                        width: parent.width * 0.5
                                        name:  "STOP"
                                        baseColor:  "#FF2E2E"
                                        borderColor: "#911911"
                                        onClicked: {
                                           alaramEffect.play()
                                           stopCrawler()
                                           init_crawler(0)

                                            //add logic
                                        }
                                    }
                                }

                                Item {
                                    height: parent.height * 0.1
                                }
                            }

                        }



                        //                        TabView{
                        //                            id: g1
                        //                            implicitWidth: widthScreen * 0.42
                        //                            implicitHeight: ((heightScreen * 0.90)/2 ) - 5/2


                        //                            Tab{
                        //                                title: " Cam 2  "
                        //                                id: t1
                        //                                active:true

                        //                                Rectangle{
                        //                                    id:screen2
                        //                                    width: widthScreen * 0.42
                        //                                    height: ((heightScreen * 0.90)/2 ) - 5/2
                        //                                    border.color: "#6fda9c"
                        //                                    border.width: 2
                        //                                    color: "#344955"
                        //                                    radius: 15
                        //                                    property alias videoPlayer1: videoPlayer1


                        //                                    MediaPlayer {
                        //                                        id: videoPlayer1

                        //                                        muted: true
                        //                                        autoPlay: true
                        //                                        playlist: Playlist {
                        //                                            PlaylistItem { source: "rtsp://10.223.240.0:8554/cam2" }
                        //                                            PlaylistItem { source: "rtsp://10.223.240.0:8554/cam1" }
                        //                                            PlaylistItem { source: "rtsp://10.223.240.0:8554/cam3" }
                        //                                        }
                        //                                        //                                        playlist: Playlist {
                        //                                        //                                            PlaylistItem { source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4" }
                        //                                        //                                            PlaylistItem { source: "http://212.67.236.61/mjpg/video.mjpg?camera=1&timestamp=1561621294984"}
                        //                                        //                                            PlaylistItem { source: "http://195.196.36.242/mjpg/video.mjpg" }
                        //                                        //                                        }
                        //                                    }

                        //                                    VideoOutput {
                        //                                        id: camera1
                        //                                        anchors.fill: parent
                        //                                        source: videoPlayer1
                        //                                        fillMode: VideoOutput.PreserveAspectCrop
                        //                                        function save() {
                        //                                            fullScreenRect.visible = true
                        //                                            fullScreenView.enabled = true
                        //                                            full_cam=arrange_cam[1]
                        //                                            fullScreenView.sourceItem = camera1
                        //                                            fullScreenView.save()
                        //                                            fullScreenRect.visible = false
                        //                                            fullScreenView.enabled = false
                        //                                            publisher.call_capImg(arrange_cam[1])

                        //                                        }
                        //                                    }
                        //                                    Component.onCompleted: {
                        //                                        videoPlayer1.playlist.currentIndex = 1;
                        //                                        videoPlayer1.play();
                        //                                    }
                        //                                    Rectangle{
                        //                                        id:videoToolBar2
                        //                                        anchors.bottom: parent.bottom
                        //                                        width: parent.width
                        //                                        height: parent.height*0.1
                        //                                        opacity: 0.5
                        //                                    }
                        //                                    RowLayout{
                        //                                        anchors.fill:videoToolBar2
                        //                                        Item {
                        //                                            width: 50
                        //                                        }
                        //                                        Item{
                        //                                            Layout.fillHeight: true
                        //                                            width: 30

                        //                                            Button {
                        //                                                id: btnON3
                        //                                                text : "Record"
                        //                                                width : 100
                        //                                                height : 25
                        //                                                anchors.centerIn: parent

                        //                                                background: Rectangle {
                        //                                                    color:"#6fda9c"
                        //                                                    radius: 8
                        //                                                }

                        //                                                onClicked: {
                        //                                                    recCams.gstRecord3("Recording...");

                        //                                                    btnON3.text = "recording...";

                        //                                                }
                        //                                            }

                        //                                        }

                        //                                        Item {
                        //                                            width: 100
                        //                                        }
                        //                                        Item{
                        //                                            Layout.fillHeight: true
                        //                                            width: 30

                        //                                            Button {
                        //                                                id: btnSTOP3
                        //                                                text : "Stop"
                        //                                                width : 100
                        //                                                height : 25
                        //                                                anchors.centerIn: parent
                        //                                                background: Rectangle {
                        //                                                    color:"#6fda9c"
                        //                                                    radius: 8
                        //                                                }

                        //                                                onClicked: {

                        //                                                    recCams.gstStop3("Stop");
                        //                                                    btnON3.text = "Record";
                        //                                                }
                        //                                            }


                        //                                        }
                        //                                        Item {
                        //                                            Layout.fillWidth: true
                        //                                        }
                        //                                        Item{
                        //                                            Layout.fillHeight: true
                        //                                            width: 30
                        //                                            Image {
                        //                                                id:swap1
                        //                                                sourceSize.width: 25
                        //                                                sourceSize.height: 25
                        //                                                anchors.centerIn: parent
                        //                                                source: "qrc:/UI/Assets/dashboard/swap.png"
                        //                                            }
                        //                                            MouseArea{
                        //                                                anchors.fill: parent
                        //                                                onClicked: {
                        //                                                    swapCam(1)


                        //                                                }
                        //                                            }
                        //                                        }
                        //                                        Item{
                        //                                            width:5
                        //                                        }

                        //                                        Item{
                        //                                            Layout.fillHeight: true
                        //                                            width: 30
                        //                                            Image {
                        //                                                id:captureIcon2Id
                        //                                                sourceSize.width: 25
                        //                                                sourceSize.height: 25
                        //                                                anchors.centerIn: parent
                        //                                                source: "qrc:/UI/Assets/dashboard/capture.png"
                        //                                            }
                        //                                            MouseArea{
                        //                                                anchors.fill: parent
                        //                                                onClicked: {
                        //                                                    camera1.save()
                        //                                                }
                        //                                            }
                        //                                        }
                        //                                        Item {
                        //                                            width:5
                        //                                        }
                        //                                        Item{
                        //                                            Layout.fillHeight: true
                        //                                            width: 30
                        //                                            Image {
                        //                                                id:screenSizeIcon2Id
                        //                                                sourceSize.width: 25
                        //                                                sourceSize.height: 25
                        //                                                anchors.centerIn: parent
                        //                                                source: "qrc:/UI/Assets/dashboard/expand.png"
                        //                                            }
                        //                                            MouseArea{
                        //                                                anchors.fill: parent
                        //                                                onClicked: {
                        //                                                    fullScreenRect.visible = true
                        //                                                    fullScreenView.enabled = true
                        //                                                    fullScreenView.sourceItem = camera1
                        //                                                    full_cam=2
                        //                                                }
                        //                                            }
                        //                                        }


                        //                                        Item {
                        //                                            width:5
                        //                                        }
                        //                                    }

                        //                                }



                        //                            }
                        //                            Tab{
                        //                                id: t2
                        //                                title: " A Scan "
                        //                                active: true

                        //                                Item {

                        //                                    CustomPlotItem {

                        //                                        id: customPlot
                        //                                        anchors.fill: parent

                        //                                        Component.onCompleted: initCustomPlot()
                        //                                        MouseArea{
                        //                                            anchors.fill: parent
                        //                                            onClicked: {
                        ////                                                customPlot.saveImgk(1)
                        //                                            }
                        //                                        }
                        //                                    }
                        //                                }

                        //                            }
                        //                            style: TabViewStyle {
                        //                                frameOverlap: 1
                        //                                tabOverlap:1
                        //                                tabsAlignment:Qt.AlignLeft
                        //                                tab: Rectangle {
                        //                                    color: styleData.selected ? "green" :"white"
                        //                                    border.color:  "green"
                        //                                    implicitWidth: Math.max(text.width + 4, 80)
                        //                                    implicitHeight: 20
                        //                                    radius: 2
                        //                                    Text {
                        //                                        id: text
                        //                                        anchors.centerIn: parent
                        //                                        text: styleData.title
                        //                                        color: styleData.selected ? "white" : "black"
                        //                                    }
                        //                                }
                        //                                frame: Rectangle { color: "black" }
                        //                            }

                        //                        }
                        //                        Rectangle{
                        //                            id:screen3
                        //                            width: widthScreen * 0.42
                        //                            height: (heightScreen *0.90)/2 - 5/2
                        //                            border.color: "#6fda9c"
                        //                            border.width: 2
                        //                            color: "#344955"
                        //                            radius: 15


                        //                            MediaPlayer {
                        //                                id: videoPlayer2
                        //                                muted: true
                        //                                autoPlay: true

                        //                                playlist: Playlist {
                        //                                    PlaylistItem { source: "rtsp://10.223.240.0:8554/cam2" }
                        //                                    PlaylistItem { source: "rtsp://10.223.240.0:8554/cam1" }
                        //                                    PlaylistItem { source: "rtsp://10.223.240.0:8554/cam3" }
                        //                                }
                        //                                //                                        playlist: Playlist {
                        //                                //                                            PlaylistItem { source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4" }
                        //                                //                                            PlaylistItem { source: "http://212.67.236.61/mjpg/video.mjpg?camera=1&timestamp=1561621294984"}
                        //                                //                                            PlaylistItem { source: "http://195.196.36.242/mjpg/video.mjpg" }
                        //                                //                                        }
                        //                            }

                        //                            VideoOutput {
                        //                                id: camera2
                        //                                anchors.fill: parent
                        //                                source: videoPlayer2
                        //                                fillMode: VideoOutput.PreserveAspectCrop

                        //                                function save() {

                        //                                    fullScreenRect.visible = true
                        //                                    fullScreenView.enabled = true
                        //                                    full_cam=arrange_cam[2]
                        //                                    fullScreenView.sourceItem = camera2
                        //                                    fullScreenView.save()
                        //                                    fullScreenRect.visible = false
                        //                                    fullScreenView.enabled = false
                        //                                    publisher.call_capImg(arrange_cam[2])

                        //                                }
                        //                            }

                        //                            Component.onCompleted: {
                        //                                videoPlayer2.playlist.currentIndex = 2;
                        //                                videoPlayer2.play();
                        //                            }
                        //                            Rectangle{
                        //                                id:videoToolBar3
                        //                                anchors.bottom: parent.bottom
                        //                                width: parent.width
                        //                                height: parent.height*0.1
                        //                                opacity: 0.5
                        //                            }
                        //                            RowLayout{
                        //                                anchors.fill:videoToolBar3
                        //                                Item {
                        //                                    width: 50
                        //                                }

                        //                                Item{
                        //                                    Layout.fillHeight: true
                        //                                    width: 30
                        //                                    Button {
                        //                                        id: btnON2
                        //                                        text : "Record"
                        //                                        width : 100
                        //                                        height : 25
                        //                                        anchors.centerIn: parent

                        //                                        background: Rectangle {
                        //                                            color:"#6fda9c"
                        //                                            radius: 8
                        //                                        }

                        //                                        onClicked: {
                        //                                            demo.gstRecord2("Recording...");

                        //                                            btnON2.text = "recording...";

                        //                                        }
                        //                                    }
                        //                                }
                        //                                Item {
                        //                                    width: 100
                        //                                }
                        //                                Item{
                        //                                    Layout.fillHeight: true
                        //                                    width: 30
                        //                                    Button {
                        //                                        id: btnSTOP2
                        //                                        text : "Stop"
                        //                                        width : 100
                        //                                        height : 25
                        //                                        anchors.centerIn: parent
                        //                                        background: Rectangle {
                        //                                            color:"#6fda9c"
                        //                                            radius: 8
                        //                                        }

                        //                                        onClicked: {

                        //                                            demo.gstStop2("Stop");
                        //                                            btnON2.text = "Record";
                        //                                        }
                        //                                    }
                        //                                }
                        //                                Item {
                        //                                    Layout.fillWidth: true
                        //                                }
                        //                                Item{
                        //                                    Layout.fillHeight: true
                        //                                    width: 30
                        //                                    Image {
                        //                                        id:swap2
                        //                                        sourceSize.width: 25
                        //                                        sourceSize.height: 25
                        //                                        anchors.centerIn: parent
                        //                                        source: "qrc:/UI/Assets/dashboard/swap.png"
                        //                                    }
                        //                                    MouseArea{
                        //                                        anchors.fill: parent
                        //                                        onClicked: {
                        //                                            //swap main and third cam
                        //                                            swapCam(2)


                        //                                        }
                        //                                    }
                        //                                }
                        //                                Item{
                        //                                    width:5
                        //                                }
                        //                                Item{
                        //                                    Layout.fillHeight: true
                        //                                    width: 30
                        //                                    Image {
                        //                                        id:captureIcon3Id
                        //                                        sourceSize.width: 25
                        //                                        sourceSize.height: 25
                        //                                        anchors.centerIn: parent
                        //                                        source: "qrc:/UI/Assets/dashboard/capture.png"
                        //                                    }



                        //                                    MouseArea{
                        //                                        anchors.fill: parent
                        //                                        onClicked: {
                        //                                            camera2.save()


                        //                                        }
                        //                                    }
                        //                                }
                        //                                Item{
                        //                                    width:5
                        //                                }
                        //                                Item{
                        //                                    Layout.fillHeight: true
                        //                                    width: 30
                        //                                    Image {
                        //                                        id:screenSizeIcon3Id
                        //                                        sourceSize.width: 25
                        //                                        sourceSize.height: 25
                        //                                        anchors.centerIn: parent
                        //                                        source: "qrc:/UI/Assets/dashboard/expand.png"
                        //                                    }

                        //                                    MouseArea{
                        //                                        anchors.fill: parent

                        //                                        onClicked: {
                        //                                            fullScreenRect.visible = true
                        //                                            fullScreenView.enabled = true
                        //                                            fullScreenView.sourceItem = camera2
                        //                                            full_cam=3
                        //                                        }
                        //                                    }
                        //                                }

                        //                                Item {
                        //                                    width:5
                        //                                }
                        //                            }

                        //                        }

                    }
                }
            }

            Rectangle{
                id:fullScreenRect
                anchors.fill: parent
                color:secondBg
                visible: false
                ShaderEffectSource {
                    id: fullScreenView
                    enabled: false
                    anchors.fill: parent

                    function save() {
                        console.log('Schedule Save full screen')
                        scheduleUpdate() // explicitly update. grabToImage() will force rendering afterwards.
                        fullScreenView.grabToImage(function(result) {
                            var date = new Date().toLocaleString(Qt.locale(), "dddd"+"."+"MMMMM"+"."+"yyyy"+"_"+"hh"+"_"+"mm"+"_"+"ss"+"_"+"zzz")

                            console.log(result.saveToFile("SCREENSHOT/cam"+full_cam+"_"+date+".png"));
                            console.log("SCREENSHOT/cam"+full_cam+"_"+date+".png");
                        })
                    }

                }
                Rectangle{
                    id:fullsceenViewStatusBar
                    anchors.bottom: parent.bottom
                    width: parent.width
                    height: parent.height*0.05
                    opacity: 0.5
                }
                RowLayout{
                    anchors.fill:fullsceenViewStatusBar
                    Item {
                        width: 5
                    }

                    Item {
                        Layout.fillWidth: true
                    }
                    Item{
                        Layout.fillHeight: true
                        width: 30
                        Image {
                            sourceSize.width: 25
                            sourceSize.height: 25
                            anchors.centerIn: parent
                            source: "qrc:/UI/Assets/dashboard/capture.png"
                        }
                        MouseArea{
                            anchors.fill: parent
                            onClicked: {
                                fullScreenView.save()
                            }
                        }
                    }
                    Item{
                        Layout.fillHeight: true
                        width: 30
                        Image {
                            sourceSize.width: 25
                            sourceSize.height: 25
                            anchors.centerIn: parent
                            source:"qrc:/UI/Assets/dashboard/shrink.png"
                        }

                        MouseArea{
                            anchors.fill: parent

                            onClicked: {
                                fullScreenRect.visible = false
                                fullScreenView.enabled = false
                                //console.log("clicked")
                            }
                        }
                    }

                    Item {
                        width:5
                    }
                }

            }
        }
    }
    //! [timer]
    Timer {
        id:alertTimer
        interval: 800; running: false; repeat: true
        onTriggered: {
            animationOne.start();
        }
        onRunningChanged: {
            if(!running){
                successTimer.start();
            }
        }
    }

    Timer {
        id:successTimer
        interval: 800; running: false; repeat: false
        onTriggered: {
            statusBar.color = "#00695C"
        }
    }
    SoundEffect {
            id: alaramEffect
            source: "qrc:/UI/Assets/alarm.wav"
        }
}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
