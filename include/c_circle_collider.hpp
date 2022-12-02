#ifndef CIRCLE_COLLIDER_C_HPP
#define CIRCLE_COLLIDER_C_HPP

#include "component.hpp"
#include "vec2.hpp"

class CircleColliderC : public Component
{
public:
    float   radius;
    Vec2    pos;

    CircleColliderC(std::string& entity_id, float radius, Vec2 pos)
        : Component(entity_id), radius(radius), pos(pos) {}

    bool isColliding(CircleColliderC& cc);
};


#endif