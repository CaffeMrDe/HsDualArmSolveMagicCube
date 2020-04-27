#ifndef RUBIKCUBEOPERTASK_H
#define RUBIKCUBEOPERTASK_H

#include "taskexcuimpl.h"
class rubikCubeOperTask :taskExcuImpl
{
public:
   rubikCubeOperTask();
   void init();
   void startTask();
   void stopTask();
   void resetTask();
   void printError();
};

#endif // RUBIKCUBEOPERTASK_H
