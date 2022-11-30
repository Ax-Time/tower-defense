#ifndef CIRCLE_COLLIDER_C_HPP
#define CIRCLE_COLLIDER_C_HPP

#include <vec2.hpp>

class CircleColliderC
{
public:
    float   radius;
    Vec2    pos;

    CircleColliderC(float radius, Vec2 pos)
        : radius(radius), pos(pos) {}

    bool isColliding(CircleColliderC& cc);
};


#endif