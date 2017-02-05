#-------------------------------------------------
#
# Project created by QtCreator 2014-05-01T14:24:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET = pcl_gui
TEMPLATE = app


SOURCES += main.cpp\
        pclgui.cpp \
    form_pclfeatureslist.cpp \
    form_pclviewer.cpp \
    form_pclfeatureoptions.cpp \
    form_pclselectedfeatures.cpp

HEADERS  += pclgui.h \
    form_pclfeatureslist.h \
    form_pclviewer.h \
    form_pclfeatureoptions.h \
    form_pclselectedfeatures.h

FORMS    += pclgui.ui \
    form_pclfeatureslist.ui \
    form_pclviewer.ui \
    form_pclfeatureoptions.ui \
    form_pclselectedfeatures.ui
