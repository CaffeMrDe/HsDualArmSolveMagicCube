#pragma once
#include "hiropservernode.h"
#include "hiroptopicnode.h"
#include <memory>
class hiropSingleHandler{
private:
    hiropSingleHandler();
public:
     static std::shared_ptr<hiropTopicNode>  getTopicInstance(){
        if(hiropTopicNodePtr == nullptr)
            hiropTopicNodePtr = std::make_shared<hiropTopicNode>();
        return hiropTopicNodePtr;
     }

     static std::shared_ptr<hiropServerNode>  getServiceInstance(){
        if(hiropServerNodePtr == nullptr)
            hiropServerNodePtr = std::make_shared<hiropServerNode>();
        return hiropServerNodePtr;
     }

private:
    static std::shared_ptr<hiropTopicNode> hiropTopicNodePtr;
    static std::shared_ptr<hiropServerNode> hiropServerNodePtr;
};

