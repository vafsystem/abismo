#-------------------------------------------------
#
# Project created by QtCreator 2016-09-05T23:58:01
#
#-------------------------------------------------

QT       += core network

TARGET = ../../../../../lib/AbismoConnection
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11 install

SOURCES += Connection.cpp \
    Client.cpp \
    Server.cpp \
    Message.cpp


HEADERS += Connection.h \
    Server.h \
    Client.h \
    Message.h


headers.path =../../../include/abismo/connection
headers.files += $$HEADERS
INSTALLS += headers


