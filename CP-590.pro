#-------------------------------------------------
#
# Project created by QtCreator 2018-01-27T12:11:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CP-590
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    hamlib/rig.h \
    hamlib/rig_dll.h \
    hamlib/riglist.h

FORMS    += mainwindow.ui

LIBS += c:/ZOWN/CP-590/hamlib/libhamlib-2.lib
