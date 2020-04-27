#ifndef GRASPBASEFUNC_H
#define GRASPBASEFUNC_H
//#include "glog.h"
#include "graspbaseimpl.h"
#include <iostream>
//#TODO 司 完成实现抓取接口
class graspBaseFunc:graspBaseImpl
{
public:
    graspBaseFunc(std::string &robotName);
    void initCameraPose();
    void SetPickTarget();
    void setPlaceTarget();
    int runPick();
    int runPlace();

    std::string& getErrorMessage();
    void setGroupVectory();
    void setGroupAccelate();
 private:
    std::string robotName;
};

#endif // GRASPBASEFUNC_H
