#-------------------------------------------------
#
# Project created by QtCreator 2016-09-05T23:58:01
#
#-------------------------------------------------

QT       += core network

TARGET = ../../../../lib/AbismoConnection
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11 install

SOURCES += \
    ConnectionClient.cpp \
    ConnectionServer.cpp


HEADERS += \
    ConnectionClient.h \
    ConnectionServer.h \
    ConnectionMessage.h


headers.path =../../../include/abismo/connection
headers.files += $$HEADERS
INSTALLS += headers


