QT += core network

TEMPLATE = subdirs



UI_DIR = uics
MOC_DIR = mocs
OBJECTS_DIR = objs

CONFIG += c++11 ordered


SUBDIRS += Core
SUBDIRS += Connection


