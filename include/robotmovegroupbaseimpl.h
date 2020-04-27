#pragma once
 class robotMoveGroupBaseImpl{
public:
    virtual void initCameraPose()=0;
    virtual void SetPickTarget() =0;
    virtual void setPlaceTarget()=0;
    virtual int  runPick()=0;
    virtual int  runPlace()=0;
    virtual void moveTo() = 0;
    virtual void moveToLinear() = 0;
};
