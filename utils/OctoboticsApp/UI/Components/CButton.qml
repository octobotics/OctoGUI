/*!
 *  \file      CButton.qml
 *  \brief     This is the code for a custom button in UI
 *  \details   This is the code for a custom button in UI
 *  \author    Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */
import QtQuick 2.6
import QtQuick.Controls 2.0

Button {
    id: control
    text: qsTr("Log In")
    font.pointSize: 16

    property alias name: control.text
    property color baseColor
    property color borderColor

    contentItem: Text {
        text: control.text
        font: control.font
        opacity: enabled ? 1.0 : 0.3
        color: control.down ? "#ffffff" : "#ffffff"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: Rectangle {
        id: bgrect
        implicitWidth: 100
        implicitHeight: 50
        color: baseColor //"#6fda9c"
        opacity: control.down ? 0.7 : 1
        radius: height/2
        border.color: borderColor
    }
}
