#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T15:45:11
#
#-------------------------------------------------

QT       -= gui

TARGET = Communication
TEMPLATE = lib

DEFINES += COMMUNICATION_LIBRARY

SOURCES += \
    SerialPort.cpp \
    UdpSocketPort.cpp

HEADERS += \
    Port.h \
    SerialPort.h \
    UdpSocketPort.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
