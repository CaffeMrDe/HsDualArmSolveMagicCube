#ifndef TASKEXCUFACTORY_H
#define TASKEXCUFACTORY_H
#include "taskexcuimpl.h"
#include <memory>
#include "grasptargetondestoptask.h"
#include "grasptargetonshelftask.h"
enum Scense{
    Destop,
    Shelf,
    Magic,
};


class taskExcuFactory
{
public:
    const taskExcuFactory* getInstance(){
        if(ptr==nullptr)
            ptr = std::make_shared<taskExcuFactory>();
    }

    std::shared_ptr<taskExcuImpl> createTaskHandler(Scense scense){
        std::shared_ptr<taskExcuImpl> ptr = nullptr;
        switch (scense) {
        case Destop:
            ptr = std::make_shared<graspTargetOnDestopTask>();
            break;
        case Shelf:
            ptr = std::make_shared<graspTargetOnShelfTask>();
            break;
        default:
            throw -1;
            break;
        }
    }

private:
    taskExcuFactory();

    std::shared_ptr<taskExcuFactory> *ptr;
};
#endif // TASKEXCUFACTORY_H
