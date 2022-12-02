#ifndef S_CIRCLE_COLLIDER_HPP
#define S_CIRCLE_COLLIDER_HPP

#include "c_circle_collider.hpp"

#include <queue>
#include <utility>
#include <vector>

typedef std::queue<std::pair<std::string&, std::string&>> CollidersQueue;

class CircleColliderS
{
private:
    CollidersQueue detectCollisions(std::vector<CircleColliderC>& colliders);
    void applyCollisionEffects(CollidersQueue collisions);
public:
    void update(std::vector<CircleColliderC>& colliders);
};


#endif