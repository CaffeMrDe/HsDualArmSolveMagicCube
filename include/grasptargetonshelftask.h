#ifndef GRASPTARGETONSHELFTASK_H
#define GRASPTARGETONSHELFTASK_H
#include "hiropsinglehandler.h"
#include "graspbaseimpl.h"
#include "taskexcuimpl.h"
class graspTargetOnShelfTask  :taskExcuImpl
{
public:
    graspTargetOnShelfTask();
    void init();
    void startTask(); // 开一个多线程执行任务
    void stopTask();
    void resetTask();
    void printError();
private:
    const hiropSingleHandler *hiropSinglePtr;
};

#endif // GRASPTARGETONSHELFTASK_H
