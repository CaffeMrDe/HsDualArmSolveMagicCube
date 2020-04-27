#ifndef GRASPTARGETONDESTOPTASK_H
#define GRASPTARGETONDESTOPTASK_H
#include "taskexcuimpl.h"
#include "hiropsinglehandler.h"

#include "robotmovegroupmanager.h"
//task 任务的不同点是点位 和 轴组
class graspTargetOnDestopTask :taskExcuImpl
{
public:
    graspTargetOnDestopTask();
    void init();
    void startTask();
    void stopTask();
    void resetTask();
    void printError();
private:
    const hiropSingleHandler *hiropSinglePtr;
};

#endif // GRASPTARGETONDESTOPTASK_H
