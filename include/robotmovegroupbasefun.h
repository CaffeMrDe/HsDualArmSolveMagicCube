#ifndef GRASPBASEFUNC_H
#define GRASPBASEFUNC_H
//#include "glog.h"
#include "robotmovegroupbaseimpl.h"
#include <iostream>
//#TODO 司 完成实现抓取接口
class robotMoveGroupBaseFun:public robotMoveGroupBaseImpl
{
public:
    robotMoveGroupBaseFun(std::string robotName);
    virtual void initCameraPose();
    virtual void SetPickTarget();
    virtual void setPlaceTarget();
    virtual int runPick();
    virtual int runPlace();
    virtual void moveTo();
    virtual void moveToLinear();
public:
    void getErrorMessage();
    void setGroupVectory();
    void setGroupAccelate();
 private:
    std::string robotName;
};



#endif // GRASPBASEFUNC_H
