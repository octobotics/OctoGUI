/*!
 *  \file      connectMasterURI.qml
 *  \brief     This is the code for the ros master connection page of UI
 *  \details   This is the code for the ros master connection page of UI
 *  \author    Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */
import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import "../../UI/Components"
Page {
    id: connectROSPage
    property color backGroundColor : "#356859"
    property color mainAppColor: "#6fda9c"
    property color mainTextCOlor: "#f0f0f0"

    //    Component.onCompleted: {
    //           masterUriId.text = connectROS.masterURI
    //        hostname.text = connectROS.host

    //    }

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
        CButton{
            id:setting1;
            height: 50
            Layout.preferredWidth: connectROSPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Start Camera"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: {
                //connectROS.connectMasterURI(masterUriId.text,hostname.text)
                publisher.call_cameraInit(1)
            }
        }
        CButton{
            id:setting2;
            height: 50
            Layout.preferredWidth: connectROSPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "setting 2"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: {
                //connectROS.connectMasterURI(masterUriId.text,hostname.text)
                showUserInfo()
            }
        }
        CButton{
            id:setting3;
            height: 50
            Layout.preferredWidth: connectROSPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "setting 3"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: {
                //connectROS.connectMasterURI(masterUriId.text,hostname.text)
                showUserInfo()
            }
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
                //connectROS.connectMasterURI(masterUriId.text,hostname.text)
                showUserInfo()
            }
        }
    }
}
