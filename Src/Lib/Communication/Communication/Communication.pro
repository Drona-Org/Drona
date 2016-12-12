#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T15:45:11
#
#-------------------------------------------------

QT       -= gui

TARGET = Communication
TEMPLATE = lib

DEFINES += COMMUNICATION_LIBRARY

SOURCES += communication.cpp

HEADERS += communication.h\
        communication_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
