#ifndef HSROBOTFUNPROXY_H
#define HSROBOTFUNPROXY_H

#include <string>
class hsRobotFunProxy
{
public:
    hsRobotFunProxy(std::string ip,std::string socketId);
    void setEnable();
    void setdisEnable();
    void reConnect();
    void resetWarn();
    void printErrorMessage();
    void MoveToLinear();
private:
    std::string ip,socketId;
};

#endif // HSROBOTFUNPROXY_H
