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
//        console.log("crawler",crawler)
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
        console.log("Battery Status Changed: ", battStatus, " Count: ", battCnt);
        if (battStatus<=36 && battStatus>35 && battCnt<=3){
            console.log("Showing Battery Low Dialog");
            battDialog.text = "\n\n         Battery LOW         \n\n"
            battDialog.icon = StandardIcon.Critical
            battDialog.open()
            battCnt++
        }
        else if((battStatus<= 35))
        {
            console.log("Showing Battery Critically Low Dialog");
            battDialog.text = "\n\n         Battery Critically LOW DD        \n         Change Batteries ASAP         \n\n"
            battDialog.icon = StandardIcon.Critical
            battDialog.open()
        }
    }

    /*!
     * \brief  armStatus: ge ts arm error and temperature from ros and gives a popup if any issue
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

    }



    /*!
     * \brief  velocityValue: gets crawler velocity  from ros - not using now
     */
    property variant velocityValue: publisher.velocityValue
    onVelocityValueChanged:  {

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

    /*!
     * \brief  crawlerTemp: gets crawler motors temp value from ros and gives a popup on temp error
     * \todo   make a variable for temperature value
     */
    property variant crawlerTemp: publisher.tempValue
    onCrawlerTempChanged:  {

        if(crawlerTemp[0]>125 || crawlerTemp[0]>125 || crawlerTemp[0]>125 || crawlerTemp[0]>125){
            crawlerDialog.text =  cMotors[0]+" : Temperature greater than "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : Temperature greater than "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : Temperature greater than "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : Temperature greater than "+crawlerTemp[0]+" deg"+"\n"
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

//        console.log("batt level",level)
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
                anchors.leftMargin: 5
            }

            ColumnLayout{
                anchors.centerIn: parent
                spacing: rectBox1.height * 0.1
                RowLayout {
                    Rectangle{
                        id:rectBox1
                        width: widthScreen * 0.14
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
//                                       
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
                                    SButton {
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name: "Bot power off "
                                        baseColor: isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.6
                                        Layout.alignment: Qt.AlignCenter

                                        Text {
                                            anchors.centerIn: parent
                                            text: isPressed ? "On" : "Off"
                                            color: isPressed ? "white" : "black"  // Change text color depending on isPressed
                                        }

                                        onClicked: {
                                            isPressed = !isPressed;
                                            if (isPressed) {
                                                publisher.call_botservice(2);  // Joystick On
                                            } 
                                              // Toggle the isPressed state
                                        }
                                    }

                                   
                                }
                                RowLayout{
                                    spacing: rectBox1.width * 0.05

                                    SButton{
                                        property bool isPressed: false
                                        height: rectBox1.width * 0.1
                                        name:  "Motor"
                                        baseColor:  isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.25
                                        onClicked: {
                                            isPressed = !isPressed
                                            publisher.toolToggle = "1"
                                        }
                                    }

                                    SButton {
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name: "Bot Reboot "
                                        baseColor: isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.6
                                        Layout.alignment: Qt.AlignCenter

                                        Text {
                                            anchors.centerIn: parent
                                            text: isPressed ? "On" : "Off"
                                            color: isPressed ? "white" : "black"  // Change text color depending on isPressed
                                        }

                                        onClicked: {
                                            isPressed = !isPressed;
                                            if (isPressed) {
                                                publisher.call_botservice(1);  // Joystick On
                                            } //else {
//                                                 // console.log("Donothig");
// \                                            }
                                              // Toggle the isPressed state
                                        }
                                    }





                                }
                                RowLayout{
                                    spacing: rectBox1.width * 0.08
                                    Item {
                                            Layout.fillWidth: true
                                        }

                                    SButton {
                                        property bool isPressed: false
                                        height: rectBox1.height * 0.0987
                                        name: "JoyStick"
                                        baseColor: isPressed ? "green" : buttonBg
                                        borderColor: buttonBg
                                        implicitWidth: rectBox1.width * 0.65
                                        Layout.alignment: Qt.AlignCenter

                                        Text {
                                            anchors.centerIn: parent
                                            text: isPressed ? "On" : "Off"
                                            color: isPressed ? "white" : "black"  // Change text color depending on isPressed
                                        }

                                        onClicked: {
                                            if (isPressed) {
                                                publisher.call_joystickonoff(0);  // Joystick On
                                            } else {
                                                publisher.call_joystickonoff(1);  // Joystick Off
                                            }
                                            isPressed = !isPressed;  // Toggle the isPressed state
                                        }
                                    }
                                    


                                }

                                

                            }
                        

                        }


                    }

                    Rectangle{
                        id:rectBox3
                        width: widthScreen * 0.15
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
                                text: qsTr("Raster Speed ")
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




                    Rectangle{
                        id: crawlerr
                        width: widthScreen * 0.22
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

                                            crawlerDialog.text =  "\n\nErrors:\n\n"+cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n"+cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n"+cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n"+cMotors[0]+" : "+cErr[crawlerErr[0]]+"\n\n\n"+
                                                    "\n\nTemperature:\n\n" +cMotors[0]+" : "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : "+crawlerTemp[0]+" deg"+"\n"+cMotors[0]+" : "+crawlerTemp[0]+" deg"+"\n"
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
                     Rectangle {
                                width: (widthScreen * 0.15)
                                height: heightScreen * 0.25
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                ColumnLayout{
                                    anchors.fill: parent
                                    anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("Forward")
                                        font.family: "Tahoma"
                                        font.bold: true
                                        font.pixelSize: 24
                                         color: textColor
                                        verticalAlignment: Text.AlignVCenter
                                        horizontalAlignment: Text.AlignHCenter
                                    }

                                
                                        TextField {
                                                id: angleTextField
                                                font.family: "Tahoma"
                                                font.bold: true
                                                font.pixelSize: 25
                                                color: "orange"
                                                verticalAlignment: TextInput.AlignVCenter
                                                horizontalAlignment: TextInput.AlignHCenter
                                                placeholderText: "(10-100)"
                                                validator: IntValidator { bottom: 10; top: 100 } // Ensure input is between 10 and 100
                                                inputMethodHints: Qt.ImhFormattedNumbersOnly // Accept only numbers
                                                anchors.horizontalCenter: parent.horizontalCenter

                                                background: Rectangle {
                                                    color: "#2C3E50" // Set background color (dark blue-gray)
                                                    radius: 5 // Rounded corners
                                                    border.color: "white" // Border color
                                                }

                                                

                                                onAccepted: {
                                                    // Lock the TextField when Enter is pressed
                                                    readOnly = true; // Make it read-only
                                                }
                                            }

                                            // Button for setting the angle
                                            SButton {
                                                id: setDiaButton
                                                property bool isPressed: false
                                                width: parent.width * 0.5
                                                height: parent.height * 0.27
                                                name:  isPressed ? "Reset" : "Set Dia"
                                                baseColor: isPressed ? "red" : "#c792ea"  // Green when pressed, blue otherwise
                                                borderColor: "#2980B9" // Button border color
                                                anchors.horizontalCenter: parent.horizontalCenter

                                                // Smooth transition for the color and scaling effect
                                                transitions: [
                                                    Transition {
                                                        from: "*"
                                                        to: "*"
                                                        reversible: true
                                                        ParallelAnimation {
                                                            NumberAnimation { target: setDiaButton; property: "scale"; to: isPressed ? 1.05 : 1.0; duration: 200 }
                                                            ColorAnimation { target: setDiaButton; property: "baseColor"; duration: 300 }
                                                            ColorAnimation { target: setDiaButton; property: "borderColor"; duration: 300 }
                                                        }
                                                    }
                                                ]

                                                // When clicked, toggle the state and update the TextField's readOnly property
                                                    onClicked: {
                                                            isPressed = !isPressed;

                                                            // Access forward_dis from the TextField via its ID
                                                            const forward_dis = parseInt(angleTextField.text);
                                                            if (!isNaN(forward_dis) && forward_dis >= 1 && forward_dis <= 100) {
                                                                if (isPressed) {
                                                                    publisher.posval = forward_dis;  // Set the forward_dis value
                                                                    angleTextField.readOnly = true; 
                                                                    
                                                                } else {
                                                                    isPressed = false;
                                                                    angleTextField.text = "";
                                                                    angleTextField.readOnly = false; 
                                                                    angleTextField.focus = true;
                                                    
                                                                }
                                                            } else {
                                                                
                                                                 isPressed = false;
                                                                 angleTextField.text = "";
                                                                 angleTextField.readOnly = false; 
                                                                 angleTextField.focus = true;
                                                                // console.log("Invalid angleTextField value: ", angleTextField.text);
                                                            }
                                                        }
                                            }

                              
                                }
                            }

                          Rectangle{
                                implicitHeight: heightScreen * 0.25
                                implicitWidth: (widthScreen * 0.10)-10
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                ColumnLayout{
                                    anchors.fill: parent
                                    anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("UtThickness")
                                        font.family: "Tahoma"
                                        font.bold: true
                                        font.pixelSize: 18
                                         color: textColor
                                        verticalAlignment: Text.AlignVCenter
                                        horizontalAlignment: Text.AlignHCenter
                                    }
                                    Text {
                                    Layout.fillWidth: true
                                    Layout.fillHeight: true
                                    textFormat: Text.RichText
                                    text:Number(publisher.ut_thicknessValue).toFixed(2)
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 50
                                    color: "orange"
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }
                                    Item {
                                        height: parent.height * 0.1
                                    }
                                }

                            }

                         Rectangle {
                                  implicitWidth: ((widthScreen * 0.60)/4)-5/3 +50-10
                                  implicitHeight: heightScreen * 0.25
                                  border.color: borderSecondBg
                                  color: secondBg
                                  radius: 15
                                  ColumnLayout{
                                    anchors.fill: parent
                                    // anchors.topMargin: 10
                                    Text {
                                        Layout.fillWidth: true
                                        text: qsTr("Manual Mode")
                                        font.family: "Tahoma"
                                        font.bold: true
                                        font.pixelSize: 24
                                         color: textColor
                                        verticalAlignment: Text.AlignTop
                                        horizontalAlignment: Text.AlignHCenter
                                    }

                                    RowLayout{
                                     Layout.fillHeight: true
                                        Item{
                                            Layout.fillHeight: true
                                            Layout.fillWidth: true
                                            ColumnLayout{
                                                Layout.fillHeight: true
                                                anchors.fill: parent

                                               

                                                RowLayout{
                                                    Layout.fillWidth: true
                                                    
                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: isPressed ? "Stop Raster" : "Raster Scan"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                            isPressed = !isPressed;
                                                            if (isPressed) {
                                                                console.log("Start Raster scan");
                                                                publisher.call_raster_scan(1);
                                                            } else {
                                                                publisher.call_raster_scan(0);
                                                                console.log("Stop Raster scan");
                                                            }
                                                        }

                                
                                                        }

                                                

                                                }
                                                RowLayout{
                                                    Layout.fillWidth: true
                                                    
                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: isPressed ? "Stop Grid" : "Grid Scan"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                                isPressed = !isPressed;

                                                                if (isPressed) {
                                                                console.log("start Grid scan");
                                                                publisher.call_grid_scan(1);                                                           
                                                                } else {
                                                                console.log("Stop Grid scan");
                                                                publisher.call_grid_scan(0);
                                                                }
                                                            }

                                
                                                    }

                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 50
                                                        Layout.bottomMargin: 5
                                                        anchors.right : parent.right
                                                        name: "Export Csv"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                                console.log("Export CSV");
                                                                publisher.call_save_CSV(1);

                                                                    
                                                                
                                                            }

                                
                                                    }
                                                }
                                                RowLayout{
                                                    Layout.fillWidth: true
                                                    
                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: "Electromagnet"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                        isPressed = !isPressed;

                                                        if (isPressed) {

                                                            publisher.toolToggle = "5"
                                                        } else {
                                                            publisher.toolToggle = "5"
                                                        }
                                                    }

                                
                                                        }

                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: "Pump"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                        isPressed = !isPressed;

                                                        if (isPressed) {
                                                            publisher.toolToggle = "3"
                                                        } else {
                                                            publisher.toolToggle = "3"
                                                        }
                                                    }

                                
                                                        }

                                                }
                                                RowLayout{
                                                    Layout.fillWidth: true
                                                    
                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: "Grinder"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                        isPressed = !isPressed;

                                                        if (isPressed) {
                                                            // publisher.toolToggle = ""
                                                        } else {
                                                        }
                                                    }

                                
                                                        }

                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 10
                                                        Layout.bottomMargin: 5
                                                        name: "Pause_BTree"
                                                        baseColor: isPressed ? "green" : buttonBg
                                                        borderColor: buttonBg
                                                        onClicked: {
                                                        isPressed = !isPressed;

                                                        if (isPressed) {
                                                            const angle = 10; 
                                                            publisher.negval = angle;
                                                        } else {
                                                            publisher.negval = 0;
                                                        }
                                                    }

                                
                                                        }

                                                }


                                            }






                                        }
                              }



                                }  

                           




                              }    

                        Rectangle {
                              implicitWidth:( widthScreen * 0.15)
                              implicitHeight: heightScreen * 0.25
                              border.color: borderSecondBg
                              color: secondBg
                              radius: 15

                              ColumnLayout{
                                  anchors.fill: parent
                                  anchors.topMargin: 10
                                  Text {
                                      Layout.fillWidth: true
                                      text: qsTr("Set")
                                      font.family: "Tahoma"
                                      font.bold: true
                                      font.pixelSize: 24
                                       color: textColor
                                      verticalAlignment: Text.AlignVCenter
                                      horizontalAlignment: Text.AlignHCenter
                                  }
                                    RowLayout{
                                            Layout.fillHeight: true
                                            Item{
                                            Layout.fillHeight: true
                                            Layout.fillWidth: true
                                            ColumnLayout{
                                                Layout.fillHeight: true
                                                anchors.fill: parent

                                                    TextField {
                                                        id:gridSizeTextField
                                                        width: 10    // Specify width
                                                        height: 30 
                                                        Layout.topMargin:30
                                                        

                                                        font.family: "Tahoma"
                                                        font.bold: true
                                                        font.pixelSize: 25
                                                        color: "orange"
                                                        verticalAlignment: TextInput.AlignVCenter
                                                        horizontalAlignment: TextInput.AlignHCenter
                                                        placeholderText: "1x1"
                                                        validator: IntValidator { bottom: 2; top:12  } // Ensure input is between 0 and 360
                                                        inputMethodHints: Qt.ImhFormattedNumbersOnly // Accept only numbers
                                                        anchors.horizontalCenter: parent.horizontalCenter

                                                        background: Rectangle {
                                                            color: "#2C3E50" // Set the background color (e.g., dark blue-gray)
                                                            radius: 5 // Optional: rounded corners for the background
                                                            border.color: "white" // Optional: border color around the text field
                                                        }
                                                        // Optional: Handle text change to update the publisher's gridSize value
                                                        onTextChanged: {
                                                            const gridSize = parseInt(text);
                                                            if (!isNaN(gridSize) && gridSize >= 2 && gridSize <= 12) {
                                                                
                                                                // Additional logic to handle the gridSize value change
                                                            }
                                                        }
                                                        onAccepted: {
                                                            // Lock the TextField when Enter is pressed
                                                            readOnly = true; // Make the TextField read-only instead of disabling it to keep the text visible and styled
                                                            // Additional logic to handle the acceptance of the entered value
                                                        }

                                                    }


                                                    SButton {
                                                        property bool isPressed: false
                                                        Layout.leftMargin: 100
                                                        Layout.bottomMargin: 5
                                                        name: isPressed ? "Reset" : "Grid Size"
                                                        baseColor: isPressed ? "red" : buttonBg
                                                        borderColor: buttonBg
                                                        anchors.horizontalCenter: parent.horizontalCenter

                                                        
                                                        onClicked: {
                                                            isPressed = !isPressed;

                                                            // Access gridSize from the TextField via its ID
                                                            const gridSize = parseInt(gridSizeTextField.text);
                                                            if (!isNaN(gridSize) && gridSize >= 2 && gridSize <= 12) {
                                                                if (isPressed) {
                                                                    publisher.cyclesval = gridSize;  // Set the gridSize value
                                                                    console.log("Button clicked: gridSize set to", gridSize);
                                                                } else {
                                                                    isPressed = false;
                                                                    publisher.cyclesval = 0;
                                                                    gridSizeTextField.text = "";
                                                                    gridSizeTextField.readOnly = false; 
                                                                    gridSizeTextField.focus = true;
                                                                }
                                                            } else {
                                                                
                                          
                                                                    isPressed = false;
                                                                    publisher.cyclesval = 0;
                                                                    gridSizeTextField.text = "";
                                                                    gridSizeTextField.readOnly = false; 
                                                                    gridSizeTextField.focus = true;
                                                            }
                                                        }
                                                    }

                                                    

                                

                                                    TextField {
                                                            id: secondTextField
                                                            width: parent.width // Set width to match the parent Item
                                                            height: 30
                                                            Layout.leftMargin: 10
                                                            Layout.bottomMargin: 10
                                                            font.family: "Tahoma"
                                                            font.bold: true
                                                            font.pixelSize: 20
                                                            color: "orange"
                                                            verticalAlignment: TextInput.AlignVCenter
                                                            horizontalAlignment: TextInput.AlignHCenter
                                                            anchors.bottom: parent.bottom

                                                            placeholderText: "(10-480)"
                                                            validator: IntValidator { bottom: 10; top: 450 }
                                                            inputMethodHints: Qt.ImhFormattedNumbersOnly
                                                            background: Rectangle {
                                                                color: "#2C3E50"
                                                                radius: 5
                                                                border.color: "white"
                                                                                }
                                                            
                                                    
                                                            onAccepted: {
                                                                readOnly = true;
                                                            }
                                                        }
                                                    SButton {
                                                        property bool isPressed: false
                                                        width: parent.width * 0.45
                                                        height: 130
                                                        Layout.leftMargin: 130 // Space to the left of the button
                                                        name: isPressed ? "Reset" : "Set Stroke"
                                                        baseColor: isPressed ? "red" : buttonBg
                                                        borderColor: buttonBg
                                                        // anchors.horizontalCenter: parent.horizontalCenter
                                                        anchors.bottom: parent.bottom
                                                        anchors.right: parent.right 
                                                        //anchors.right: parent.right

                                                        onClicked: {
                                                            isPressed = !isPressed;
                                                            

                                                            // Access stroke from the TextField via its ID
                                                                            const stroke = parseInt(secondTextField.text);
                                                                            if (!isNaN(stroke) && stroke >= 1 && stroke <= 100) {
                                                                                if (isPressed) {
                                                                                    publisher.negval = stroke;  // Set the stroke value
                                                                                    secondTextField.readOnly = true; 
                                                                                    
                                                                                } else {
                                                                                    isPressed = false;
                                                                                    secondTextField.text = "";
                                                                                    secondTextField.readOnly = false; 
                                                                                    secondTextField.focus = true;
                                                                    
                                                                                }
                                                                            } else {
                                                                                
                                                                                isPressed = false;
                                                                                secondTextField.text = "";
                                                                                secondTextField.readOnly = false; 
                                                                                secondTextField.focus = true;
                                                                            }
                                                        }
                                                    }

                                   
                                
                                             }

                                            }
                                       }

                                }

                        }

                        Rectangle {
                              implicitWidth:( widthScreen * 0.15)
                              implicitHeight: heightScreen * 0.25
                              border.color: borderSecondBg
                              color: secondBg
                              radius: 15

                              ColumnLayout{
                                  anchors.fill: parent
                                  anchors.topMargin: 10
                                  Text {
                                      Layout.fillWidth: true
                                      text: qsTr("Set Velocity")
                                      font.family: "Tahoma"
                                      font.bold: true
                                      font.pixelSize: 24
                                       color: textColor
                                      verticalAlignment: Text.AlignVCenter
                                      horizontalAlignment: Text.AlignHCenter
                                  }
                                  Text {
                                      Layout.fillWidth: true
                                      text: "Linear " +Math.round(publisher.speedsetting) + "<b style='font-size: 18px;'> mm/s<b>"
                                      font.family: "Tahoma"
                                      font.bold: true
                                      font.pixelSize: 18
                                       color: textColor
                                      verticalAlignment: Text.AlignVCenter
                                      horizontalAlignment: Text.AlignHCenter
                                  }
                                  Text {
                                      Layout.fillWidth: true
                                      text: "Angular " + publisher.anglesetting + "<b style='font-size: 18px;'> Deg/s<b>"
                                      font.family: "Tahoma"
                                      font.bold: true
                                      font.pixelSize: 18
                                       color: textColor
                                      verticalAlignment: Text.AlignVCenter
                                      horizontalAlignment: Text.AlignHCenter
                                  }
                                //    Text {
                                //     width: parent.width * 0.8
                                //     height: parent.height
                                //     textFormat: Text.RichText
                                //     text:publisher.velocityValue + "<b style='font-size: 20px;'> mm/s<b>"
                                //     font.family: "Tahoma"
                                //     font.bold: true
                                //     font.pixelSize: 60
                                //     color: textColor
                                //     verticalAlignment: Text.AlignVCenter
                                //     horizontalAlignment: Text.AlignHCenter
                                // }


                                 }

                        }


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
                        playlist: Playlist {
                            PlaylistItem {
                                source: "gst-pipeline: udpsrc port=5000 ! application/x-rtp,encoding-name=H264,payload=96 ! rtph264depay ! avdec_h264 ! videoconvert ! videoflip method=0 ! videoscale ! video/x-raw, width=(int)1280, height=(int)720 ! autovideosink"
                            }
                        }
                    }


                        VideoOutput {
                            id: camera
                            anchors.fill: parent
                            source: videoPlayer
                            fillMode: VideoOutput.PreserveAspectCrop

                            function save() {
                                fullScreenRect.visible = true
                                fullScreenView.enabled = true
                                full_cam = arrange_cam[0]
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
 
                            
                            Rectangle {
                                id: gridRectangle
                                implicitHeight: heightScreen * 0.90
                                implicitWidth: (widthScreen * 0.60)
                                
                                border.color: borderSecondBg
                                color: secondBg
                                radius: 15
                                // Grid container (GridLayout for a grid of items)
    //                             Grid {
    //                                 id: gridid
    //                                 anchors.fill: parent
    //                                 columns: publisher.cyclesval
    //                                 rows: publisher.cyclesval
                                    
    //                                 spacing: 1
                               

    //                                 Repeater {
    //                                     model: publisher.cyclesval * publisher.cyclesval // Total number of items
                                       

    //                                     Rectangle {
    //                                        width: parent.width / publisher.cyclesval 
    //                                        height: parent.height / publisher.cyclesval 
    //                                        color: Qt.rgba(0, 0, 0.5, 1)
    //                                        border.color: "black" 

    //                                      Text {
    //                                       anchors.centerIn: parent
                                          
    //                                       text: {
    //                                         var words = publisher.ut_arrayValue.split(" ").filter(function(item) { return item.trim() !== ""; });
    //                                         return words[index] !== undefined ? words[index] : ""; // Return word at the current index, or empty string if not found
    //                                          }
    //                                         color: "white" // Set text color
    //                                         font.pixelSize: parent.width*0.45 // Set text size dynamically based on the rectangle width
    //                                       }
    // }
    //                                 }
    //                              }
                                    Grid {
                                        id: gridid
                                        anchors.fill: parent
                                        columns: publisher.cyclesval
                                        rows: publisher.cyclesval
                                        spacing: 1

                                        Repeater {
                                            model: publisher.cyclesval * publisher.cyclesval // Total number of items

                                            Rectangle {
                                                width: parent.width / publisher.cyclesval
                                                height: parent.height / publisher.cyclesval
                                                color: {
                                                    // Retrieve the corresponding value from the publisher array (assuming the array is a string of space-separated values)
                                                    var words = publisher.ut_arrayValue.split(" ").filter(function(item) { return item.trim() !== ""; });
                                                    var value = words[index]; // Get the value at the current index
                                                    
                                                    // Check if the value is "0.00"
                                                    if (value === "0.00") {
                                                        return "red";  // Set color to red if the value is 0.00
                                                    } else {
                                                        return "green"; // Otherwise, set the color to green
                                                    }
                                                }
                                                border.color: "black" // Set border color

                                                Text {
                                                    anchors.centerIn: parent
                                                    text: {
                                                        var words = publisher.ut_arrayValue.split(" ").filter(function(item) { return item.trim() !== ""; });
                                                        return words[index] !== undefined ? words[index] : ""; // Return word at the current index, or empty string if not found
                                                    }
                                                    color: "white" // Set text color
                                                    font.pixelSize: parent.width * 0.45 // Set text size dynamically based on the rectangle width
                                                }
                                            }
                                        }
                                    }

                     
                            }

                        // }
                        // }
                    
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
