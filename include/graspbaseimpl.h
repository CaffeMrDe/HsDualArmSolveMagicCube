#ifndef GRASPBASEIMPL_H
#define GRASPBASEIMPL_H
class robotMoveGroupBaseImpl{
public:
    virtual void initCameraPose()=0;
    virtual void SetPickTarget() =0;
    virtual void setPlaceTarget()=0;
    virtual int runPick()=0;
    virtual int runPlace()=0;
};
#endif // GRASPBASEIMPL_H
