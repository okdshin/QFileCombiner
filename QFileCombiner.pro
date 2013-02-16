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

LIBS += -lboost_filesystem -lboost_system

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    FileCombiner/FileCombiner.h

FORMS    += mainwindow.ui
