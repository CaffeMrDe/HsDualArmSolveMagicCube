#ifndef RUBIKCUBEPASRSE_H
#define RUBIKCUBEPASRSE_H
#include "cubeimageprocessimpl.h"
#include "cubepasrsealogrithmimpl.h"
#include <memory>
/**
 * @brief The rubikCubePasrse class 魔法解算的实现组合类
 */
class rubikCubePasrse
{
public:
    rubikCubePasrse();
private:
    std::shared_ptr<cubeImageProcessImpl> processPtr;
    std::shared_ptr<cubePasrseAlogrithmImpl> pasrsePtr;
};

#endif // RUBIKCUBEPASRSE_H
