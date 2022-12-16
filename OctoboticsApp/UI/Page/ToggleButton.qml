// Contents of ToggleButton.qml
import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.4

Button {
    onClicked: {
        isActive = !isActive;
    }

    style: ButtonStyle {
        background: Rectangle {
            border.width: control.activeFocus ? 2 : 1
            border.color: "black"
            radius: 4
            color:  isActive ? "red" : "gray";
        }
    }
}
