QT += quick multimedia opengl
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Refer to the documentation for the
# deprecated API to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Source/connectros.cpp \
        Source/publisher.cpp \
        Source/rosthread.cpp \
#        Source/test.cpp \
        main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += $$PWD/ros_lib/include
INCLUDEPATH += $$PWD/ros_custom_service/include
LIBS += -L$$PWD/ros_lib/lib -lcpp_common -lroscpp -lroslib -lrosconsole -lroscpp_serialization -lrostime -lxmlrpcpp -lrosconsole_log4cxx -lrosconsole_backend_interface
#INCLUDEPATH += /opt/ros/noetic/include
#INCLUDEPATH += /home/zeutec/vijay-octobotics/ui_ws-main/devel/include
#LIBS += -L/opt/ros/noetic/lib -lroscpp -lroslib -lrosconsole -lroscpp_serialization -lrostime

HEADERS += \
    Source/connectros.h \
    Source/publisher.h \
    Source/rosthread.h \
#    Source/test.h

