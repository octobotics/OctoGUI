import QtQuick 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
import QtQuick.Extras 1.4

Rectangle {
    width: 80
    height: 200
    color: "transparent"
    property alias minimumValue: gauge.minimumValue
    property alias value: gauge.value
    property alias maximumValue: gauge.maximumValue

    Gauge {
        id: gauge
        anchors.fill: parent
        anchors.margins: 10

        value: 5
        Behavior on value {
            NumberAnimation {
                duration: 1000
            }
        }

        style: GaugeStyle {
            valueBar: Rectangle {
                implicitWidth: 16
                color: value < 15 ? "#cc3300" : "#c792ea"
            }
        }
    }
}
