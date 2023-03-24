import QtQuick 2.12
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
    function loginUser(uname, pword)
    {
        //if(uname === "octobotics" && pword === "octobotics@2022")
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
//        windowId.width = Screen.width - Screen.width*0.15
//        windowId.height = Screen.height - Screen.height*0.15
        windowId.visibility = Qt.WindowFullScreen
        stackView.replace("qrc:/UI/Page/Home.qml")
    }

    function showConnect()
    {
        stackView.replace("qrc:/UI/Page/ConnectMasterURI.qml")
    }


}
