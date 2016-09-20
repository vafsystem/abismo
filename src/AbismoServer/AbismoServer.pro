QT += core
QT += network
QT -= gui

TARGET = ../../../../bin/AbismoServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

UI_DIR = uics
MOC_DIR = mocs
OBJECTS_DIR = objs

CONFIG += c++11 ordered

#LIBS += -L../../../../lib -lAbismoConnection -lAbismoCore
#INCLUDEPATH += ../../../../include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../lib/release/ -lAbismoCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../lib/debug/ -lAbismoCore
else:unix: LIBS += -L$$PWD/../../lib/ -lAbismoCore

INCLUDEPATH += $$PWD/../../include
DEPENDPATH += $$PWD/../../include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/release/libAbismoCore.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/debug/libAbismoCore.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/release/AbismoCore.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/debug/AbismoCore.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../lib/libAbismoCore.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../lib/release/ -lAbismoConnection
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../lib/debug/ -lAbismoConnection
else:unix: LIBS += -L$$PWD/../../lib/ -lAbismoConnection

INCLUDEPATH += $$PWD/../../include
DEPENDPATH += $$PWD/../../include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/release/libAbismoConnection.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/debug/libAbismoConnection.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/release/AbismoConnection.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../lib/debug/AbismoConnection.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../lib/libAbismoConnection.a
