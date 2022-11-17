import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import "../Assets/"
//! [splash-properties]
Window {
    id: splash
    color: "transparent"
    title: "Splash Window"
    modality: Qt.ApplicationModal
    flags: Qt.SplashScreen
    property int timeoutInterval: 8000
    property real progressValue: 0
    property int count: 0
    signal timeout
    x: (Screen.width - splashImage.width) / 2
    y: (Screen.height - splashImage.height) / 2
    width: splashImage.width
    height: splashImage.height
     Image {
          id: splashImage;
          sourceSize.width: 480
          sourceSize.height: 480
          source: "qrc:/UI/Assets/octobotics_logo.png"
      }

      Item {
          id: progressBarId
          z:99
          anchors{
              right: parent.right
              left: parent.left
              bottom: parent.bottom
              bottomMargin:10
          }
          ProgressBar {
              id: control
              value : progressValue
              background: Rectangle {
                  implicitWidth: progressBarId.width
                  implicitHeight: 10
                  color: "transparent"
              }

              contentItem: Item {
                  implicitWidth: 200
                  implicitHeight: 10

                  Rectangle {
                      width: control.visualPosition * parent.width
                      height: parent.height
                      color: "#2db300"
                  }
              }
              onPositionChanged: {
              }
          }
      }


    //! [timer]
    Timer {
        interval: 100; running: true; repeat: true
        onTriggered: {
            count = count + 100
            progressValue = (count/4000)

            if(progressValue > 1){

                visible = false
                splash.timeout()

            }
        }
    }
    //! [timer]
    Component.onCompleted: visible = true
}
