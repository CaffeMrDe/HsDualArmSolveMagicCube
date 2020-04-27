#-------------------------------------------------
#
# Project created by QtCreator 2020-04-26T09:26:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HsDualArmSolveMagicCube
TEMPLATE = app
CONFIG +=c++11
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include \
               ros \
                ui     \
                src     \
                usr/local/include/glog \
                rubikcube \


include(env/env.pro)

SOURCES += \
        main.cpp \
        ros/hiropservernode.cpp \
        ros/hiroptopicnode.cpp \
        src/grasptargetonshelftask.cpp \
        src/grasptargetondestoptask.cpp \
        rubikcube/rubikcubepasrse.cpp \
    HsRobot/hsrobotfunproxy.cpp \
    rubikcube/rubikcubeopertask.cpp \
    src/robotmovegroupbasefun.cpp \
    tools/safecontrol.cpp

HEADERS += \
        ros/hiropservernode.h \
        ros/hiroptopicnode.h \
        ros/hiropsinglehandler.h \
        include/grasptargetonshelftask.h \
        include/grasptargetondestoptask.h \
        include/taskexcuimpl.h \
        include/taskexcufactory.h \
        rubikcube/cubeimageprocessimpl.h \
        rubikcube/cubepasrsealogrithmimpl.h \
        rubikcube/cameracontrol.h \
        rubikcube/rubikcubepasrse.h \
    rubikcube/rubikcubeexcu.h \
    HsRobot/hsrobotfunproxy.h \
    rubikcube/rubikcubeopertask.h \
    include/robotmovegroupbaseimpl.h \
    include/robotmovegroupbasefun.h \
    src/robotmovegroupmanager.h \
    include/glocalvar.h \
    tools/safecontrol.h \
    HsRobot/hsrobotdualsinglemanager.h

SOURCES += \
        ui/hsmainwindow.cpp \

HEADERS += \
        ui/hsmainwindow.h \

FORMS += \
        ui/hsmainwindow.ui

include(env/fileCfg.pro)

DISTFILES += \
    README.md

SUBDIRS += \
    env/env.pro
