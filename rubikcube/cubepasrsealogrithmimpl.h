#ifndef CUBEPASRSEALOGRITHMIMPL_H
#define CUBEPASRSEALOGRITHMIMPL_H
/**
 * @brief The cubePasrseAlogrithmImpl class 魔方复原的虚接口
 */
class cubePasrseAlogrithmImpl{
public:
    virtual void setInputGird(int* data,int index) = 0;
    virtual void parse()= 0;
    virtual void getResult()= 0;
};

#endif // CUBEPASRSEALOGRITHMIMPL_H
