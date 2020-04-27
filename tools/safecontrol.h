#ifndef SAFECONTROL_H
#define SAFECONTROL_H
#include "HsRobot/hsrobotdualsinglemanager.h"

class safeControl
{
public:
    safeControl();
public:
    void allStop();
    bool connect();
    bool allResetWarn();
};

#endif // SAFECONTROL_H
