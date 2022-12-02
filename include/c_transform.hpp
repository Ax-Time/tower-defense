#ifndef POSITION_C_HPP
#define POSITION_C_HPP

#include "component.hpp"
#include "vec2.hpp"

class TransformC : public Component
{
public:
    Vec2 pos;
    Vec2 vel;
    Vec2 acc;
    Vec2 scale;
    float rotation;  // in radians

    TransformC(std::string& entity_id, Vec2& pos, Vec2& vel, Vec2& acc, Vec2& scale, float rotation) 
        : Component(entity_id), pos(pos), vel(vel), acc(acc), scale(scale), rotation(rotation) {}

    TransformC(std::string& entity_id, Vec2& pos, Vec2& vel, Vec2& acc, Vec2& scale) 
        : Component(entity_id), pos(pos), vel(vel), acc(acc), scale(scale), rotation(0.0) {}

    TransformC(std::string& entity_id, Vec2& pos, Vec2& vel, Vec2& acc) 
        : Component(entity_id), pos(pos), vel(vel), acc(acc), scale(Vec2(1.0, 1.0)), rotation(0.0) {}

    TransformC(std::string& entity_id, Vec2& pos) 
        : Component(entity_id), pos(pos), vel(Vec2(0.0, 0.0)), acc(Vec2(0.0, 0.0)), scale(Vec2(1.0, 1.0)), rotation(0.0) {}

    void rotate(float angle);
    void translate(Vec2& tr);
    void rescale(float factor);
    void rescale(Vec2& factors);
};

#endif