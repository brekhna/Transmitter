#-------------------------------------------------
#
# Project created by QtCreator 2016-09-19T15:01:24
#
#-------------------------------------------------

QT       += core gui

INCLUDEPATH += /usr/local/qwt-6.1.3/include
LIBS += -L/usr/local/qwt-6.1.3/lib -lqwt
#greaterThan(QT_MAJOR_VERSION, 4): QT += webenginewidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Transmitter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcgaugewidget.cpp

HEADERS  += mainwindow.h \
    qcgaugewidget.h

FORMS    += mainwindow.ui
