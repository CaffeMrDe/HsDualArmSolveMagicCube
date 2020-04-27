
# opencv
OPENCV_ROOT = /opt/ros/kinetic
INCLUDEPATH += $$OPENCV_ROOT/include/opencv-3.3.1-dev
LIBS+= -L$$OPENCV_ROOT/lib/x86_64-linux-gnu -lopencv_core3

SUBDIRS += \
    fileCfg.pro
