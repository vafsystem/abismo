#-------------------------------------------------
#
# Project created by QtCreator 2016-09-05T23:58:01
#
#-------------------------------------------------

QT       -= core gui

TARGET = ../../../../lib/AbismoCore
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

SOURCES += core.cpp \
    ObjectBase.cpp \
    Image.cpp \
    Integer.cpp

HEADERS += core.h \
    ObjectBase.h \
    Image.h \
    Version.h \
    Integer.h

headers.path =../../../include/abismo/core/
headers.files += $$HEADERS
INSTALLS += headers

