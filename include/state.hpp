#ifndef STATE_HPP
#define STATE_HPP

#include <vector>

#include "entity.hpp"
#include "component.hpp"
#include "c_circle_collider.hpp"
#include "c_transform.hpp"

class State
{
private:
    std::vector<Entity> entities;
    
    std::vector<CircleColliderC> colliders;
    std::vector<TransformC> transforms;
public:
    State() {};
};


#endif