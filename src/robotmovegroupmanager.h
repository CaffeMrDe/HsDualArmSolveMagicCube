#ifndef ROBOTMOVEGROUPMANAGER_H
#define ROBOTMOVEGROUPMANAGER_H
#include "robotmovegroupbasefun.h"
#include <memory>


class robotMoveGroupManager
{
private:
    robotMoveGroupManager(){
    }
public:
    static std::shared_ptr<robotMoveGroupBaseImpl> getLeftArmInstance(){
        if(leftArmPtr == nullptr)
            leftArmPtr = std::make_shared<robotMoveGroupBaseFun>("arm1");
        return leftArmPtr;
    }

    static std::shared_ptr<robotMoveGroupBaseImpl> getRightArmInstance(){
        if(rightArmPtr == nullptr)
            rightArmPtr = std::make_shared<robotMoveGroupBaseFun>("arm2");
        return rightArmPtr;
    }

private:
    static std::shared_ptr<robotMoveGroupBaseImpl> leftArmPtr,rightArmPtr;
};
//std::shared_ptr<robotMoveGroupBaseImpl> robotMoveGroupManager::leftArmPtr =nullptr;
//std::shared_ptr<robotMoveGroupBaseImpl> robotMoveGroupManager::rightArmPtr =nullptr;

#endif // ROBOTMOVEGROUPMANAGER_H
