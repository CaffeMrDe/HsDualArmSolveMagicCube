#ifndef GRASPBASEFUNC_H
#define GRASPBASEFUNC_H

#include "graspbaseimpl.h"
class graspBaseFunc:graspBaseImpl
{
public:
    graspBaseFunc();
    void initCameraPose();
    void SetPickTarget();
    void setPlaceTarget();
    int runPick();
    int runPlace();
};

#endif // GRASPBASEFUNC_H
