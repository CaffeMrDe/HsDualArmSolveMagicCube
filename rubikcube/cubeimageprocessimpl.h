#ifndef CUBEIMAGEPROCESSIMPL_H
#define CUBEIMAGEPROCESSIMPL_H
/**
 * @brief The cubeImageProcessImpl class 魔法的图像处理接口
 */
class cubeImageProcessImpl
{
public:
    cubeImageProcessImpl() {}
public:
    virtual void setImage();
    virtual int detection();
    virtual void getResult();

};
#endif // CUBEIMAGEPROCESSIMPL_H
