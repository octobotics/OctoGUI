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
import HelloCpp 1.0
import "../../UI/Components"
import CustomPlot 1.0

Rectangle{
    color: "white"
    property int iconSize: 32

    property variant armStatus: publisher.armStatus
    onArmStatusChanged: {
        console.log("armStatus")
        console.log("base",armStatus.base)
        console.log("shoulder",armStatus.shoulder)
        console.log("elbow",armStatus.elbow)
        console.log("tool",armStatus.tool)
    }

    property variant crawlStatus: publisher.crawlStatus
    onCrawlStatusChanged: {
        console.log("crawlStatus")
        console.log("frontLeft",crawlStatus.frontLeft)
        console.log("frontRight",crawlStatus.frontRight)
        console.log("backrRight",crawlStatus.backrRight)
        console.log("backLeft",crawlStatus.backLeft)
    }


    property variant velocityValue: publisher.velocityValue
    onVelocityValueChanged:  {
        console.log("velocity status")
        console.log("current_vel_linear",velocityValue.current_vel_linear)
        console.log("current_vel_angular",velocityValue.current_vel_angular)
        console.log("max_linear",velocityValue.max_linear)
        console.log("max_angular",velocityValue.max_angular)
    }
    property variant armTool: publisher.armToolStatus
    onArmToolChanged: {
        if(armTool == 2){
            pumpStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 1){
            pumpStatus.source =  "qrc:/UI/Assets/dashboard/tick.png"
        }

        if(armTool == 4){
            magnetStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 3){
            magnetStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
        if(armTool == 6){
            grinderStatus.source = "qrc:/UI/Assets/dashboard/remove.png"
        }else if(armTool == 5){
            grinderStatus.source = "qrc:/UI/Assets/dashboard/tick.png"
        }
    }

    function displaybatterStatus(level)
    {
        var percentage = ((level - 44)*100) / (50 - 44);
        console.log("percentage",percentage)
        if (percentage < 20)
            return "qrc:/UI/Assets/battery-status/battery-empty-solid.svg" // fa-battery-empty
        else if (percentage > 20 && percentage < 40)
            return "qrc:/UI/Assets/battery-status/battery-quarter-solid.svg" // fa-battery-quarter
        else if (percentage > 40 && percentage < 60)
            return "qrc:/UI/Assets/battery-status/battery-half-solid.svg" // fa-battery-half
        else if (percentage > 60 && percentage < 80)
            return "qrc:/UI/Assets/battery-status/battery-three-quarters-solid.svg" // fa-battery-three-quarters
        else if (percentage > 80)
            return "qrc:/UI/Assets/battery-status/battery-full-solid.svg" // fa-battery-full
        else
            return "qrc:/UI/Assets/battery-status/battery-empty-solid.svg" // fa-battery-empty
    }
    function displayConnectionStatus(status){
        if(status === 0){
            return "qrc:/UI/Assets/signal-status/no-wifi-signal.png" // fa-battery-full
        }else
        {
            return "qrc:/UI/Assets/signal-status/wifi-signal.png" // fa-battery-full

        }
    }

    ColumnLayout{
        anchors.fill: parent
        spacing: 0
        Rectangle{
            id:statusBar
            Layout.fillWidth: true
            height: parent.height*0.1
            color: "#00695C"
            PropertyAnimation { id: animationOne; target: statusBar;alwaysRunToEnd: true; property: "color"; to: "#fec1c1"; duration: 500
                onStopped: animationTwo.start()}
            PropertyAnimation { id: animationTwo; target: statusBar;alwaysRunToEnd: true; property: "color"; to: "#9b0000"; duration: 300 }
            Item {
                id: logo
                width: 80
                height: 80
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left

            Image {
                sourceSize.width: 80
                sourceSize.height: 80
                anchors.centerIn: parent
                source: "qrc:/UI/Assets/octobotics_logo.png"
            }
            }
            Item {
                id: connectionStatus
                width: 40
                height: 40
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: logo.right
                anchors.leftMargin: 20

                Image {
                    id: connectionStatusImg
                    anchors.fill: connectionStatus
                    source:displayConnectionStatus(publisher.comStatus)
                    onSourceChanged: {
                        if(publisher.comStatus){
                            alertTimer.stop();
                            alertTimer.running = false

                        }else{

                            alertTimer.start();
                        }


                    }
                }
            }
Item{
//    anchors.right:  parent.right
//    anchors.rightMargin: 100
//    anchors.centerIn: parent.Center
//    anchors.verticalCenter: 100
    x: 1600
    anchors.top: parent.top
    anchors.topMargin: 5
    Text {
        id: textId
        text: "Crawler"
        font.pixelSize: 24
        color: "black"
        y:parent.height / 2+ height/2
        //        anchors.
        leftPadding: -control.indicator.width - 5*control.spacing+ 5
    }
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
            font.pixelSize: 24
            verticalAlignment: Text.AlignVCenter
            color: "black"
            leftPadding: control.indicator.width + control.spacing
        }
    }



}

            Item {
                id: batteryStatusId
                width: 60
                height: parent.height*0.95
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                anchors.rightMargin: 10

                Image {
                    id: batteryStatus
                    anchors.fill: parent
                    source:displaybatterStatus(publisher.batteryValue)

                }
                Text {
                    id: batteryStatusValue
//                    text: parseInt(((publisher.batteryValue - 44)*100) / (50 - 44)) + "%"
                    text: parseFloat((Math.round((publisher.batteryValue)*100))/100)

                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    anchors.fill: parent
                    font.pointSize: 8
                    color: "white"
                }
            }

        }

        Rectangle {
            id:dashboardId
            Layout.fillWidth: true
            Layout.fillHeight: true
            color:"#232F34"
            RowLayout{
                anchors.right:  parent.right
                anchors.top: parent.top
                anchors.topMargin: 5
//                Text {
//                    id: textId
//                    text: "Crawler"
//                    font.pixelSize: 24
//                    color: "#FFFFFF"
//                    leftPadding: control.indicator.width + control.spacing
//                }
//                Switch {
//                    id: control
//                    text: qsTr("Arm")
//                    checked:publisher.toggleValue
//                    enabled: false
//                    width: 60
//                    height: 58
//                    indicator: Rectangle {
//                        implicitWidth: 58
//                        implicitHeight: 28
//                        x: control.leftPadding
//                        y: parent.height / 2 - height / 2
//                        radius: 13
//                        color: control.checked ? "#17a81a" : "red"
//                        border.color: "#17a81a"//control.checked ? "#17a81a" : "#cccccc"

//                        Rectangle {
//                            x: control.checked ? parent.width - width : 0
//                            width: 28
//                            height: 28
//                            radius: 13
//                            color: control.down ? "#cccccc" : "#ffffff"
//                            border.color: "#232F34"//control.checked ? (control.down ? "#17a81a" : "#21be2b") : "#999999"
//                        }
//                    }

//                    contentItem: Text {
//                        text: control.text
//                        font.pixelSize: 24
//                        verticalAlignment: Text.AlignVCenter
//                        color: "#FFFFFF"
//                        leftPadding: control.indicator.width + control.spacing
//                    }
//                }
            }

            ColumnLayout{
                anchors.centerIn: parent
                RowLayout {

                    Rectangle{
                        width: widthScreen * 0.28
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            spacing: 0
                            RowLayout{
                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Tool")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                    color: "#FFFFFF"
                                    horizontalAlignment: Text.AlignHCenter
                                    verticalAlignment: Text.AlignVCenter
                                }
                            }
                            RowLayout{
                                Layout.fillHeight: true
                                width: parent.width

                                Item{
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true
                                    ColumnLayout{
                                        anchors.centerIn: parent
                                        RowLayout{
                                            anchors.fill: parent
//                                                   spacing: 30

                                                   // lets have some left and right margins
//                                                   anchors.leftMargin: 20
//                                                   anchors.rightMargin: 20

                                            Image {
                                                id:magnetStatus
                                                sourceSize.width: 35
                                                sourceSize.height: 35
                                                source: "qrc:/UI/Assets/dashboard/remove.png"
                                            }

                                            Button {
                                                id: magnet
                                                text : "Magnet"
                                                implicitWidth : 70
                                                implicitHeight : 30

                                                background: Rectangle {
                                                    color:"#6fda9c"
                                                    radius: 5
                                                    opacity: magnet.down ? 0.5 : 1

                                                }

                                                onClicked: {
//                                                    magnet.text = "Done";
                                                    publisher.toolToggle = "7"

                                                }
                                            }

                                            Item{
                                            width: 8
                                            }


                                            Image {
                                                id:pumpStatus
                                                sourceSize.width: 35
                                                sourceSize.height: 35
                                                source: "qrc:/UI/Assets/dashboard/remove.png"
                                            }

                                            Button {
                                                id: pump
                                                text : "Pump"
                                                implicitWidth : 70
                                                implicitHeight : 30
//                                                anchors.centerIn: parent

                                                background: Rectangle {
                                                    color:"#6fda9c"
                                                    radius: 5
                                                    opacity: pump.down ? 0.5 : 1

                                                }

                                                onClicked: {
                                                    publisher.toolToggle = "4"

                                                }
                                            }
                                        Item{
                                        width: 8
                                        }
                                            Image {
                                                id:grinderStatus
                                                sourceSize.width: 35
                                                sourceSize.height: 35
                                                source: "qrc:/UI/Assets/dashboard/remove.png"
                                            }

                                            Button {
                                                id: grinder
                                                text : "Grinder"
                                                implicitWidth : 70
                                                implicitHeight : 30

                                                background: Rectangle {
                                                    color:"#6fda9c"
                                                    radius: 5
                                                    opacity: grinder.down ? 0.5 : 1

                                                }

                                                onClicked: {
                                                    publisher.toolToggle = "0"
                                                    popup.open()

                                                }
                                            }
                                        }
                                        Item {
                                            height:20
                                        }
                                        RowLayout{

                                            Image {
                                                id:flightImg
                                                sourceSize.width: 35
                                                sourceSize.height: 35
                                                source: "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Button {
                                                id: flight
                                                text : "Upper Light"
                                                implicitWidth : 120
                                                implicitHeight : 30

                                                background: Rectangle {
                                                    color:"#6fda9c"
                                                    radius: 5
                                                    opacity: flight.down ? 0.5 : 1

                                                }

                                                onClicked: {
                                                    publisher.toolToggle = "6"

                                                }
                                            }
                                            Item {
                                                width:30
                                            }



                                            Image {
                                                id:blightImg
                                                sourceSize.width: 35
                                                sourceSize.height: 35
                                                source: "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Button {
                                                id: blight
                                                text : "Bottom Light"
                                                implicitWidth : 120
                                                implicitHeight : 30

                                                background: Rectangle {
                                                    color:"#6fda9c"
                                                    radius: 5
                                                    opacity: blight.down ? 0.5 : 1

                                                }

                                                onClicked: {
                                                    publisher.toolToggle = "5"

                                                }
                                            }


                                        }

                                    }

                                }
                            }

                        }

                    }
                    Rectangle{
                        width: widthScreen * 0.16
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            RowLayout{
                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Linear")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                    color: "#ffffff"
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }
                            }
                            Item{
                                Layout.fillHeight: true
                                width: parent.width

                                CircularGauge {
                                    id:circularGaugeBar
                                    anchors.fill: parent
                                    antialiasing: true
                                    value: publisher.velocityValue.current_vel_linear === undefined ? 0 :publisher.velocityValue.current_vel_linear
                                    maximumValue: publisher.velocityValue.max_linear === undefined ? 100 :publisher.velocityValue.max_linear
                                    anchors.centerIn: parent
                                    Component.onCompleted: forceActiveFocus()
                                    property bool accelerating: false
                                    Behavior on value {
                                        NumberAnimation {
                                            duration: 1000
                                        }
                                    }
                                }
                            }

                        }

                    }
                    Rectangle{
                        width: widthScreen * 0.16
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            RowLayout{
                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Angular")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                    color: "#ffffff"
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }
                            }
                            Item{
                                Layout.fillHeight: true
                                width: parent.width

                                CircularGauge {
                                    id:circularGauge2Bar
                                    anchors.fill: parent
                                    antialiasing: true
                                    value: publisher.velocityValue.current_vel_angular === undefined ? 0 :publisher.velocityValue.current_vel_angular
                                    maximumValue: publisher.velocityValue.max_angular === undefined ? 100 :publisher.velocityValue.max_angular
                                    anchors.centerIn: parent
                                    Component.onCompleted: forceActiveFocus()
                                    property bool accelerating: false
                                    Behavior on value {
                                        NumberAnimation {
                                            duration: 1000
                                        }
                                    }
                                }
                            }

                        }

                    }
                    Rectangle{
                        id: crawlerr
                        width: widthScreen * 0.16
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            id:cr


                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Crawler")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                    color: "#ffffff"
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                }


                            RowLayout{


                                SButton{
                                    Layout.leftMargin: widthScreen * 0.16/4.5
                                    Layout.topMargin: 15
                                    property bool init: false

                                    function init_crawler(ccw){

                                          publisher.call_crawlerinit(ccw)


                                    }

                                   id: initCrawler
                                   height: 20
                                   name: init ?  "Stop" : "Initialize"
                                   baseColor: init ?  "red" : mainAppColor
                                   borderColor: mainAppColor
                                   implicitWidth: 80
                                   Audio {
                                        id: playMusic
                                        source: "qrc:/UI/Assets/err.mp3"
                                    }
                                   onClicked: {
                                       init =!init
//                                       playMusic.play()

                                       init_crawler(init)
                                       popup.open()
                                       console.error(Math.round((dashboardId.width - 500) / 2))

                                   }
                           }

                                Popup {
                                        id: popup

                                        width: 500
                                        height: 300
                                        x: -width/2
                                        y: height
                                        modal: true
                                        focus: true
                                        closePolicy: Popup.CloseOnEscape


//                                        color: "#344955"
                                            Rectangle{
                                            color: "green"
                                            anchors.fill: parent

                                            }
//                                          ColumnLayout{

//Rectangle

//                                          }

                                    }
                                SButton{

                                    Layout.topMargin: 15
                                    id: resetCrawler
                                    height: 20
                                    implicitWidth: 80

                                    name: "Reset"
                                    baseColor: mainAppColor
                                    borderColor: mainAppColor
                                    onClicked: {
                                        resetCrawler.name = "Done"
                                        publisher.rst_crawler(1)
                                    }

                            }
                        }


                            Item{
                                Layout.fillHeight: true
//                                Layout.alignment: parent.Center
//                                Layout.vertica
                                width: parent.width

                                Rectangle{
                                    id:rectId
                                    anchors.centerIn: parent
                                    anchors.verticalCenterOffset: 5
                                    width: widthScreen * 0.08
                                    height: heightScreen * 0.10
                                    color: "#232F34"
                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x - width
                                    y:rectId.y - height+25
                                    Image {
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.frontLeft ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x + rectId.width
                                    y:rectId.y - height+25
                                    Image {
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
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.backLeft  ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

                                Item {
                                    width: 25
                                    height: 25
                                    x:rectId.x - width
                                    y:rectId.y + rectId.height-25
                                    Image {
                                        anchors.centerIn: parent
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        source: publisher.crawlStatus.backrRight ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                    }

                                }

}



                    }
                    }
                    Rectangle{
                        width: widthScreen * 0.14
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            RowLayout{


                                Text {
                                    Layout.fillWidth: true
                                    text: qsTr("Arm")
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 24
                                    color: "#FFFFFF"
                                    horizontalAlignment: Text.AlignHCenter
                                    verticalAlignment: Text.AlignVCenter
                                }

                            }

                            RowLayout{
                                Layout.fillHeight: true
                                width: parent.width
                                Item{
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true
                                    ColumnLayout{
                                        anchors.centerIn: parent
                                        RowLayout{
                                            Image {
                                                sourceSize.width: 20
                                                sourceSize.height: 20
                                                source: publisher.armStatus.base ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                text: qsTr("Base")
                                            }
//                                            CButton{
//                                                height: 26
//                                                name: "Crawler"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {
////
//                                                    publisher.call_crawlerinit()
//                                                }


//                                            }
                                        }
                                        RowLayout{
                                            Image {
                                                sourceSize.width: 20
                                                sourceSize.height: 20
                                                source:  publisher.armStatus.shoulder? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                text: qsTr("Shoulder")
                                            }
//                                            CButton{
//                                                height: 26
//                                                name: "Arm"
//                                                baseColor: mainAppColor
//                                                borderColor: mainAppColor
//                                                onClicked: {
//                                                    publisher.call_arminit()
//                                                }


                                            }
//                                        }

                                        RowLayout{
                                            Image {
                                                sourceSize.width: 20
                                                sourceSize.height: 20
                                                source: publisher.armStatus.elbow ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                text: qsTr("Elbow")
                                            }
                                        }
                                        RowLayout{
                                            Image {
                                                sourceSize.width: 20
                                                sourceSize.height: 20
                                                source: publisher.armStatus.tool  ? "qrc:/UI/Assets/dashboard/tick.png" : "qrc:/UI/Assets/dashboard/remove.png"
                                            }
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                text: qsTr("Tool")
                                            }
                                        }

                                        RowLayout{

                                            SButton{
//                                                Layout.topMargin: 15
                                                property bool arm_init: false
                                                function init_arm(am){

                                                           publisher.call_arminit(am)

                                                }


                                               id: initArm
                                               height: 20
                                               name: arm_init ?  "Stop" : "Initialize"
                                               baseColor: arm_init ?  "red" : mainAppColor
                                               borderColor: mainAppColor
                                               implicitWidth: 80
                                               onClicked: {
                                                   arm_init =!arm_init
                                               }
                                       }


                                            SButton{
//                                                Layout.leftMargin: widthScreen * 0.16/4.5

//                                                Layout.topMargin: 15
                                                id: resetArm
                                                height: 20
                                                implicitWidth: 80

                                                name: "Reset"
                                                baseColor: mainAppColor
                                                borderColor: mainAppColor
                                                onClicked: {

                                                    publisher.rst_arm(1)
                                                }

                                        }



                                        }


                                    }

                                }
                            }

                        }

                    }
                    Rectangle{
                        width: widthScreen * 0.24
                        height: heightScreen * 0.25
                        border.color: "#6fda9c"
                        border.width: 2
                        color: "#344955"
                        radius: 15

                        ColumnLayout{
                            anchors.fill: parent
                            spacing: 0
                            RowLayout{
                                Text {
                                    Layout.fillWidth: true
                                    font.family: "Tahoma"
                                    font.bold: true
                                    font.pixelSize: 50
                                    color: "#6fda9c"
                                    verticalAlignment: Text.AlignVCenter
                                    horizontalAlignment: Text.AlignHCenter
                                    topPadding: 5

                                        function calcThick()
                                        {
//                                                    var k = 0.0
//                                                     k = publisher.thickness.thickness.toFixed(2)
                                            var u= publisher.thickness.unit
                                            var un ="NAN"
                                            if(u===1)
                                                 un= "mm"
                                            else if(u===0)
                                                 un= "in"
                                            else
                                                un ="NAN"
                                         return(" "+ un)

                                        }
                                        text:   publisher.thickness.unit === -1 ? "-----" : publisher.thickness.thickness.toFixed(2) + calcThick()
                                    }



                            }
                            RowLayout{
                                Layout.fillHeight: true
                                width: parent.width
                                Item{
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true
                                    ColumnLayout{
                                        anchors.left : parent
                                        RowLayout{
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 12
                                                text: qsTr("Velocity :")
                                                leftPadding: 10
                                            }
                                            Text {
                                                color: "#6fda9c"

                                                font.pixelSize: 12
                                                text: publisher.utstatus.vel === undefined ? "NAN" : publisher.utstatus.vel + " " + "m/s"
                                            }
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 12
                                                leftPadding: 10

                                                text: qsTr("DeepCoat :")
                                            }
                                            Text {
                                                color: "#6fda9c"

                                                font.pixelSize: 12
                                                text: publisher.utstatus.deepcoat === undefined ? "NAN" : publisher.utstatus.deepcoat
                                            }

                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 12
                                                leftPadding: 10
                                                text: qsTr("Echoes :")
                                            }
                                            Text {
                                                color: "#6fda9c"

                                                font.pixelSize: 12
                                                text: publisher.utstatus.echo === undefined ? "NAN" : publisher.utstatus.echo
                                            }


                                        }
                                        RowLayout{
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                text: qsTr("Velocity   :")
                                                leftPadding: 10
                                            }

                                            TextField {
                                                id: sendVel
                                                Layout.preferredWidth: 80
                                                Layout.alignment: Qt.AlignHCenter
                                                color: mainTextColor
                                                font.pointSize: 14
                                                font.family: "fontawesome"
                                                leftPadding: 5
                                                activeFocusOnPress: true
                                                Keys.onPressed: (event)=> {
                                                        if (event.key === Qt.Key_Return) {
                                                            publisher.utVel = text

                                                        }}
                                                background: Rectangle {
                                                    implicitWidth:  30
                                                    implicitHeight: 30
                                                    radius: implicitHeight / 2
                                                    color: "transparent"

                                                    Rectangle {
                                                        width: 80
                                                        height: 1
                                                        anchors.horizontalCenter: parent.horizontalCenter
                                                        anchors.bottom: parent.bottom
                                                        color: mainAppColor
                                                    }
                                                }
                                            }
                                            SButton{
                                                height: 15
                                                name: "Send"
                                                baseColor: mainAppColor
                                                borderColor: mainAppColor
                                                onClicked: {
//
                                                    publisher.utVel = sendVel.text
                                                }


                                            }
                                        }
                                        RowLayout{

                                                Layout.fillHeight: true
                                                width: parent.width/2
                                            Text {
                                                Layout.alignment: Qt.AlignCenter

                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                leftPadding: 10

                                                text: qsTr("DeepCoat :")
                                            }

                                            TextField {
                                                id: sendDC
                                                Layout.preferredWidth: 80
                                                Layout.alignment: Qt.AlignHCenter
                                                color: mainTextColor
                                                font.pointSize: 14
                                                font.family: "fontawesome"
                                                leftPadding: 5
                                                activeFocusOnPress: true
                                                Keys.onPressed: (event)=> {
                                                        if (event.key === Qt.Key_Return) {
                                                            publisher.utData = sendDC.text

                                                        }}
                                                background: Rectangle {
                                                    implicitWidth:  30
                                                    implicitHeight: 30
                                                    radius: implicitHeight / 2
                                                    color: "transparent"

                                                    Rectangle {
                                                        width: 80
                                                        height: 1
                                                        anchors.horizontalCenter: parent.horizontalCenter
                                                        anchors.bottom: parent.bottom
                                                        color: mainAppColor
                                                    }
                                                }
                                            }
                                            SButton{
                                                height: 15
                                                name: "Send"
                                                baseColor: mainAppColor
                                                borderColor: mainAppColor
                                                onClicked: {
//
                                                    publisher.utData = sendDC.text
                                                }


                                            }
                                        }
                                        RowLayout{
                                            Text {
                                                color: "#6fda9c"
                                                font.pixelSize: 20
                                                leftPadding: 10
                                                text: qsTr("XRange :")
                                            }

                                            TextField {
                                                id: sendXR
                                                Layout.preferredWidth: 80
                                                Layout.alignment: Qt.AlignHCenter
                                                color: mainTextColor
                                                font.pointSize: 14
                                                font.family: "fontawesome"
                                                leftPadding: 5
                                                activeFocusOnPress: true
                                                Keys.onPressed: (event)=> {
                                                        if (event.key === Qt.Key_Return) {
                                                            publisher.utData = sendXR.text

                                                        }}
                                                background: Rectangle {
                                                    implicitWidth:  30
                                                    implicitHeight: 30
                                                    radius: implicitHeight / 2
                                                    color: "transparent"

                                                    Rectangle {
                                                        width: 80
                                                        height: 1
                                                        anchors.horizontalCenter: parent.horizontalCenter
                                                        anchors.bottom: parent.bottom
                                                        color: mainAppColor
                                                    }
                                                }
                                            }
                                            SButton{
                                                height: 15
                                                name: "Send"
                                                baseColor: mainAppColor
                                                borderColor: mainAppColor
                                                onClicked: {
//
                                                    publisher.utData = sendXR.text
                                                }


                                            }
                                        }
                                        Item {
                                            height: 2
                                        }
                                    }

                                }
                            }

                        }

                    }
                }

                RowLayout{
                    spacing: 2
                    Rectangle {
                        id:screen1
                        width: (widthScreen * 0.42) * 2
                        height: (heightScreen * 0.90)
                        border.color: "#6fda9c"
                        border.width: 2
                        color: "#344955"
                        radius: 15
//                        layer.enabled: true
//                        layer.effect: OpacityMask {
//                            maskSource: Item {
//                                width: screen1.width
//                                height: screen1.height
//                                Rectangle {
//                                    anchors.centerIn: parent
//                                    width:  screen1.width
//                                    height: screen1.height
//                                    border.width: 2
//                                    color: "#344955"
//                                    radius: 15

//                                }
//                            }
//                        }
                        MediaPlayer {
                            id: videoPlayer
                            //source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
                            source: "rtsp://10.223.240.0:8554/cam2"
                            muted: true
                            autoPlay: true
                        }
                            HelloCpp {
                                id: demo
                            }


                        VideoOutput {
                            id: camera
                            anchors.fill: parent
                            source: videoPlayer
                            fillMode:VideoOutput.PreserveAspectCrop


                            function save() {
                                    console.log('Schedule Save1')
                                    camera.grabToImage(function(result) {
                                         var date = new Date().toLocaleString(Qt.locale(), "dddd"+"."+"MMMMM"+"."+"yyyy"+"_"+"hh"+"_"+"mm"+"_"+"ss"+"_"+"zzz")

                                                    console.log(result.saveToFile("SCREENSHOT/cam1.png_"+date+".png"));
                                        update()
                                                })
                                }
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

//                                Image {
//                                    id:record1Id
//                                    sourceSize.width: 25
//                                    sourceSize.height: 25
//                                    anchors.centerIn: parent
//                                    source: "qrc:/UI/Assets/dashboard/record.png"

//                                }
//                                MouseArea{
//                                    anchors.fill: parent
//                                    onClicked: {
////                                        record.play()
//                                        demo.gstRecord("Recording...");

//                                    }

//                                }
                                    Button {
                                        id: btnON1
                                        text : "Record"
                                        width : 100
                                        height : 25
                                        anchors.centerIn: parent

                                        background: Rectangle {
                                            color:"#6fda9c"
                                            radius: 8
                                        }

                                        onClicked: {
                                            demo.gstRecord("Recording...");

                                            btnON1.text = "recording...";

                                        }
                                    }

//                                Image {
//                                    id:stop
//                                    sourceSize.width: 25
//                                    sourceSize.height: 25
//                                    anchors.centerIn: parent
//                                    source: "qrc:/UI/Assets/dashboard/record.png"

//                                }
//                                MouseArea{
//                                    anchors.fill: parent
//                                    onClicked: {
//                                        record.stop()
//                                    }

//                                }

                            }

                            Item {
                                width: 100
                            }
                            Item{
                                Layout.fillHeight: true
                                width: 30
//                                Image {
//                                    id:record4Id
//                                    sourceSize.width: 25
//                                    sourceSize.height: 25
//                                    anchors.centerIn: parent
//                                    source: "qrc:/UI/Assets/dashboard/record.png"

//                                }
//                                MouseArea{
//                                    anchors.fill: parent
//                                    onClicked: {
//                                                    demo.gstStop("Stop");
//                                    }
                                    Button {
                                        id: btnSTOP1
                                        text : "Stop"
                                        width : 100
                                        height : 25
                                        anchors.centerIn: parent
                                        background: Rectangle {
                                            color:"#6fda9c"
                                            radius: 8
                                        }

                                        onClicked: {

                                            demo.gstStop("Stop");
                                            btnON1.text = "Record";
                                        }
                                    }


//                                Image {
//                                    id:stop
//                                    sourceSize.width: 25
//                                    sourceSize.height: 25
//                                    anchors.centerIn: parent
//                                    source: "qrc:/UI/Assets/dashboard/record.png"

//                                }
//                                MouseArea{
//                                    anchors.fill: parent
//                                    onClicked: {
//                                        record.stop()
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
                                    }
                                }
                            }


                            Item {
                                width:5
                            }
                        }


                    }
                    ColumnLayout{
                        width: widthScreen * 0.42
                        height: heightScreen * 0.90

                   TabView{
                        //    width: widthScreen * 0.42
                        //    height: ((heightScreen * 0.90)/2 ) - 5/2
                        implicitWidth: widthScreen * 0.42
                        implicitHeight: ((heightScreen * 0.90)/2 ) - 5/2


                   Tab{
                       title: " Cam 2  "

                       Rectangle{
                           id:screen2
                           width: widthScreen * 0.42
                           height: ((heightScreen * 0.90)/2 ) - 5/2
                           border.color: "#6fda9c"
                           border.width: 2
                           color: "#344955"
                           radius: 15
//                            layer.enabled: true
//                            layer.effect: OpacityMask {
//                                maskSource: Item {
//                                    width: screen2.width
//                                    height: screen2.height
//                                    Rectangle {
//                                        anchors.centerIn: parent
//                                        width:  screen2.width
//                                        height: screen2.height
//                                        border.width: 2
//                                        color: "#344955"
//                                        radius: 15

//                                    }
//                                }
//                            }

                           MediaPlayer {
                               id: videoPlayer1
                               //source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
                               source: "rtsp://10.223.240.0:8554/cam1"
                               muted: true
                               autoPlay: true
                           }

                           VideoOutput {
                               id: camera1
                               anchors.fill: parent
                               source: videoPlayer1
                               fillMode: VideoOutput.PreserveAspectCrop
                               function save() {
                                       console.log('Schedule Save')
                                       camera1.grabToImage(function(result) {
                                            var date = new Date().toLocaleString(Qt.locale(), "dddd"+"."+"MMMMM"+"."+"yyyy"+"_"+"hh"+"_"+"mm"+"_"+"ss"+"_"+"zzz")

                                                       console.log(result.saveToFile("SCREENSHOT/cam2.png_"+date+".png"));
                                           update()
                                                   })
                                   }
                           }

                           Rectangle{
                               id:videoToolBar2
                               anchors.bottom: parent.bottom
                               width: parent.width
                               height: parent.height*0.1
                               opacity: 0.5
                           }
                           RowLayout{
                               anchors.fill:videoToolBar2
                               Item {
                                   width: 50
                               }
                               Item{
                                   Layout.fillHeight: true
                                   width: 30
//                                   Image {
//                                       id:record2Id
//                                       sourceSize.width: 25
//                                       sourceSize.height: 25
//                                       anchors.centerIn: parent
//                                       source: "qrc:/UI/Assets/dashboard/record.png"
//                                   }
//                                   MouseArea{
//                                       anchors.fill: parent
//                                       onClicked: {

//                                       }
//                                   }

                                   Button {
                                       id: btnON2
                                       text : "Record"
                                       width : 100
                                       height : 25
                                       anchors.centerIn: parent

                                       background: Rectangle {
                                           color:"#6fda9c"
//                                           border.color: "black"
                                           radius: 8
                                       }

                                       onClicked: {
                                           demo.gstRecord2("Recording...");

                                           btnON2.text = "recording...";

                                       }
                                   }
                               }
                               Item {
                                   width: 100
                               }
                               Item{
                                   Layout.fillHeight: true
                                   width: 30
                                   Button {
                                       id: btnSTOP2
                                       text : "Stop"
                                       width : 100
                                       height : 25
                                       anchors.centerIn: parent
                                       background: Rectangle {
                                           color:"#6fda9c"
                                           radius: 8
                                       }

                                       onClicked: {

                                           demo.gstStop2("Stop");
                                           btnON2.text = "Record";
                                       }
                                   }
                               }
                               Item {
                                   Layout.fillWidth: true
                               }
                               Item{
                                   Layout.fillHeight: true
                                   width: 30
                                   Image {
                                       id:captureIcon2Id
                                       sourceSize.width: 25
                                       sourceSize.height: 25
                                       anchors.centerIn: parent
                                       source: "qrc:/UI/Assets/dashboard/capture.png"
                                   }
                                   MouseArea{
                                       anchors.fill: parent
                                       onClicked: {
camera1.save()
                                       }
                                   }
                               }
                               Item{
                                   Layout.fillHeight: true
                                   width: 30
                                   Image {
                                       id:screenSizeIcon2Id
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
                                           fullScreenView.sourceItem = camera1
                                       }
                                   }
                               }


                               Item {
                                   width:5
                               }
                           }

                       }



                   }
                   Tab{
                       title: " A Scan "
//                       Rectangle{
//                           id:screen4
//                           width: widthScreen * 0.42
//                           height: (heightScreen *0.90)/2 - 5/2
//                           border.color: "#6fda9c"
//                           border.width: 2
//                           color: "red"
//                           radius: 15

                           Item {

                           CustomPlotItem {

                               id: customPlot
                               anchors.fill: parent

                               Component.onCompleted: initCustomPlot()
                               MouseArea{
                                   anchors.fill: parent
                                   onClicked: {
                                           customPlot.saveImg()
                                   }
                               }
                           }
                           }

//                   }


                   }


                   }
                        Rectangle{
                            id:screen3
                            width: widthScreen * 0.42
                            height: (heightScreen *0.90)/2 - 5/2
                            border.color: "#6fda9c"
                            border.width: 2
                            color: "#344955"
                            radius: 15
//                            layer.enabled: true
//                            layer.effect: OpacityMask {
//                                maskSource: Item {
//                                    width: screen3.width
//                                    height: screen3.height
//                                    Rectangle {
//                                        anchors.centerIn: parent
//                                        width:  screen3.width
//                                        height: screen3.height
//                                        border.width: 2
//                                        color: "#344955"
//                                        radius: 15

//                                    }
//                                }
//                            }

                            MediaPlayer {
                                id: videoPlayer2
//                                source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
                                source: "rtsp://10.223.240.0:8554/cam3"

                                muted: true
                                autoPlay: true

                            }


                            VideoOutput {
                                id: camera2
                                anchors.fill: parent
                                source: videoPlayer2
                                fillMode: VideoOutput.PreserveAspectCrop

                                function save() {
                                        console.log('Schedule Save')

                                        camera2.grabToImage(function(result) {
                                              var date = new Date().toLocaleString(Qt.locale(), "dddd"+"."+"MMMMM"+"."+"yyyy"+"_"+"hh"+"_"+"mm"+"_"+"ss"+"_"+"zzz")

                                                        console.log(result.saveToFile("SCREENSHOT/cam3_"+date+".png"));
                                            update()
                                                    })
                                    }
                            }

                            Rectangle{
                                id:videoToolBar3
                                anchors.bottom: parent.bottom
                                width: parent.width
                                height: parent.height*0.1
                                opacity: 0.5
                            }
                            RowLayout{
                                anchors.fill:videoToolBar3
                                Item {
                                    width: 5
                                }
                                Item{
                                    Layout.fillHeight: true
                                    width: 30
                                    Image {
                                        id:record3Id
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        anchors.centerIn: parent
                                        source: "qrc:/UI/Assets/dashboard/record.png"
                                    }
                                    MouseArea{
                                        anchors.fill: parent
                                        onClicked: {

                                        }
                                    }
                                }
                                Item {
                                    Layout.fillWidth: true
                                }
                                Item{
                                    Layout.fillHeight: true
                                    width: 30
                                    Image {
                                        id:captureIcon3Id
                                        sourceSize.width: 25
                                        sourceSize.height: 25
                                        anchors.centerIn: parent
                                        source: "qrc:/UI/Assets/dashboard/capture.png"
                                    }
                                    MouseArea{
                                        anchors.fill: parent
                                        onClicked: {
                                            camera2.save()
                                        }
                                    }
                                }
                                Item{
                                    Layout.fillHeight: true
                                    width: 30
                                    Image {
                                        id:screenSizeIcon3Id
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
                                            fullScreenView.sourceItem = camera2
                                            console.log("clicked")
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
            }

            Rectangle{
                id:fullScreenRect
                anchors.fill: parent
                color:"#232F34"
                visible: false
                ShaderEffectSource {
                    id: fullScreenView
                    enabled: false
                    anchors.fill: parent

                    function save() {
                            console.log('Schedule Save')
                            scheduleUpdate() // explicitly update. grabToImage() will force rendering afterwards.
                            fullScreenView.grabToImage(function(result) {
                                            console.log(result.saveToFile("fullscreenView.png"));
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
                    Item{
                        Layout.fillHeight: true
                        width: 30
                        Image {
                            sourceSize.width: 25
                            sourceSize.height: 25
                            anchors.centerIn: parent
                            source: "qrc:/UI/Assets/dashboard/record.png"
                        }
                        MouseArea{
                            anchors.fill: parent
                            onClicked: {

                            }
                        }
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
                                console.log("clicked")
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
}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
