import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import "../../UI/Components"
Page {
    id: connectROSPage
    property color backGroundColor : "black"
    property color mainAppColor: "#6fda9c"
    property color mainTextCOlor: "#f0f0f0"

    Component.onCompleted: {
           masterUriId.text = connectROS.masterURI
        hostname.text = connectROS.host

    }

    background: Rectangle {
        color: backGroundColor
    }

    Rectangle {
        id: iconRect
        width: parent.width
        height: parent.height / 3
        color: backGroundColor
    }

    ColumnLayout {
        width: parent.width
        anchors.top: iconRect.bottom
        spacing: 15
        Keys.onPressed: (event)=> {
                if (event.key === Qt.Key_Return) {
                  connectROS.connectMasterURI(masterUriId.text,hostname.text)

                }
                        }
        TextField {
            id: masterUriId
            placeholderText: qsTr("Master URI")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"

                Text {
                    text: "\uf007"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }

        TextField {
            id: hostname
            placeholderText: qsTr("Master URI")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            Keys.onPressed: (event)=> {
                    if (event.key === Qt.Key_Return) {
                      connectROS.connectMasterURI(masterUriId.text,hostname.text)

                    }
                            }
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"

                Text {
                    text: "\uf007"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }


        Item {
            height: 20
        }

        CButton{
            id:connectBtn;
            height: 50
            Layout.preferredWidth: connectROSPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Connect"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: {
                connectROS.connectMasterURI(masterUriId.text,hostname.text)
            }
        }
    }
    Connections{
        target: connectROS

        onRetry:{
            popup.popMessage =  "Connection error!"
            popup.open()
            connectBtn.name="Retry connection"
        }
        onConnectSuccess : {
            showUserInfo();
            publisher.initRosThread();
//            cst.initRt();
        }
    }
}
