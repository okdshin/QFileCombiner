#-------------------------------------------------
#
# Project created by QtCreator 2013-02-16T16:36:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QFileCombiner
TEMPLATE = app
QMAKE_CXXFLAGS += -std=gnu++11

INCLUDEPATH += C:\MinGW\msys\1.0\home\okada\boost_1_52_0
LIBS += -LC:\MinGW\msys\1.0\home\okada\boost_1_52_0\stage\lib -lboost_filesystem-mgw47-mt-sd-1_52 -lboost_system-mgw47-mt-sd-1_52

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    FileCombiner/FileCombiner.h

FORMS    += mainwindow.ui
