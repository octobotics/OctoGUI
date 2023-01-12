import QtQuick 2.6
import QtQuick.Controls 2.0

Button {
    id: control1
    text: qsTr("Log In")
    font.pointSize: 10

    property alias name: control1.text
    property color baseColor
    property color borderColor

    contentItem: Text {
        text: control1.text
        font: control1.font
        opacity: enabled ? 1.0 : 0.3
        color: control1.down ? "#ffffff" : "#ffffff"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
//        elide: Text.ElideRight
    }

    background: Rectangle {
        id: bgrect
        implicitWidth: 50
        implicitHeight: 20
        color: baseColor //"#6fda9c"
        opacity: control1.down ? 0.7 : 1
        radius: 5
        border.color: borderColor
    }
}
