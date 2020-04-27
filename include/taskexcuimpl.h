#ifndef TASKEXCUIMPL_H
#define TASKEXCUIMPL_H
class taskExcuImpl{
    virtual void init()= 0;
    virtual void startTask()= 0; // 开一个多线程执行任务
    virtual void stopTask()= 0;  //关闭线程
    virtual void resetTask()= 0;
    virtual void printError()= 0;
};

#endif // TASKEXCUIMPL_H
