#-------------------------------------------------
#
# Project created by QtCreator 2016-09-05T23:58:01
#
#-------------------------------------------------

QT       -= core gui

TARGET = ../../../../lib/AbismoConnection
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

SOURCES += Connection.cpp \


HEADERS += Connection.h \


INSTALLS += includes

#INSTALLS += target

unix {
    target.path = /usr/lib
    INSTALLS += target
}
