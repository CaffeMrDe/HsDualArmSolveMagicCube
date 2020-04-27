#pragma once
#include "hiropservernode.h"
#include "hiroptopicnode.h"
#include <memory>
class hiropSingleHandler{
private:
    hiropSingleHandler();
public:
     static hiropSingleHandler  *getInstance(){
        if(hiropSingleHandlerPtr == nullptr)
            hiropSingleHandlerPtr = new hiropSingleHandler();
        return hiropSingleHandlerPtr;
    }

private:
    std::shared_ptr<hiropTopicNode> hiropTopicNodePtr;
    std::shared_ptr<hiropServerNode> hiropServerNodePtr;
    static hiropSingleHandler *hiropSingleHandlerPtr;
};

