/*!
 *  \file      IButton.qml
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
    font.pointSize: 16

    property string defaultImage:""
    property string clickedImage: ""
    property real sourceRot: 0

    background: Image {
        id: imageBtn
        rotation: sourceRot
        source:  control.down ? clickedImage:defaultImage
    }
}
