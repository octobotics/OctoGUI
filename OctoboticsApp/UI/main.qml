/*!
 *  \file      main.qml
 *  \brief     This is the code for the main screen page of UI
 *  \details   This is the code for the main screen page of the UI. You can edit the username and password here.
 *  \author    Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import "../UI/Page"
import "../UI/Assets"

Window {
    id:windowId
    visible: false
    x: (Screen.width - windowId.width) / 2
    y: (Screen.height - windowId.height) / 2
    property color popupBackGroundColor: "#b44"
    property color popupTextCOlor: "#ffffff"
    property color backGroundColor : "#356859"
    property color mainAppColor: "#6fda9c"
    property color mainTextCOlor: "#f0f0f0"
    property real widthScreen : Screen.width - Screen.width*0.25
    property real heightScreen : Screen.height - Screen.height*0.25
    width: 480
    height: 640

    title: qsTr("Octobotics Tech")
    FontLoader {
        id: fontAwesome
        name: "fontawesome"
        source: "qrc:/UI/Assets/fontawesome-webfont.ttf"
    }
    FontLoader {
        id: fontAwesome1
        name: "fontawesome1"
        source: "qrc:/UI/Assets/Font Awesome 6 Brands-Regular-400.otf"
    }
        StackView{
        id: stackView
        focus: true
        anchors.fill: parent
    }

    // After loading show initial Login Page
    Component.onCompleted: {
        stackView.push("qrc:/UI/Page/Login.qml")
    }

    property var splashWindow: SplashScreen {
        onTimeout: windowId.visible = true
    }

    //Popup to show messages or warnings on the bottom postion of the screen
    Popup {
        id: popup
        property alias popMessage: message.text

        background: Rectangle {
            implicitWidth: windowId.width
            implicitHeight: 60
            color: popupBackGroundColor
        }
        y: (windowId.height - 60)
        modal: true
        focus: true
        closePolicy: Popup.CloseOnPressOutside
        Text {
            id: message
            anchors.centerIn: parent
            font.pointSize: 12
            color: popupTextCOlor
        }
        onOpened: popupClose.start()
    }

    // Popup will be closed automatically in 2 seconds after its opened
    Timer {
        id: popupClose
        interval: 2000
        onTriggered: popup.close()
    }

    // Login users
    // use this if you want to start the app with credentials
    function loginUser(uname, pword)
    {
        //         if(uname === "octo" && pword === "y")
        if(1)
        {

            showConnect()
        }else{
            popup.popMessage =  "User not found!"
            popup.open()
        }
    }


    // Show UserInfo page
    function showUserInfo()
    {
        windowId.visibility = Qt.WindowFullScreen
        stackView.replace("qrc:/UI/Page/Home.qml")
    }


    function showConnect()
    {
        stackView.replace("qrc:/UI/Page/ConnectMasterURI.qml")
    }
//    //Setting Page
//    function showSettings(){
//        stackView.replace("qrc:/UI/Page/SettingsPage.qml")
//    }



}
