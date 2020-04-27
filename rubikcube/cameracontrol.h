#ifndef CAMERACONTROL_H
#define CAMERACONTROL_H
/**
 * @brief The cameraControl class 相机控制类
 */
class cameraControl{
    virtual void initCamera();
    virtual void softTrrigger();
    virtual void getImage();
};

#endif // CAMERACONTROL_H
