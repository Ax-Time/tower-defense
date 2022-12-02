#ifndef S_TRANSFORM_HPP
#define S_TRANSFORM_HPP

#include "c_transform.hpp"

#include <vector>

class TransformS
{
private:
    void updateSpeed(TransformC& tr, float deltaT);
    void updatePos(TransformC& tr, float deltaT);
    void updateDynamics(TransformC& tr, float deltaT);
    void update(TransformC& tr, float deltaT);
public:
    void update(std::vector<TransformC>& transforms, float deltaT);
};



#endif