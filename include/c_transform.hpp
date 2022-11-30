#ifndef POSITION_C_HPP
#define POSITION_C_HPP

#include <vec2.hpp>

class TransformC
{
private:
    
public:
    Vec2 pos;
    Vec2 vel;
    Vec2 acc;
    Vec2 scale;

    TransformC(Vec2& pos, Vec2& vel, Vec2& acc, Vec2& scale) 
        : pos(pos), vel(vel), acc(acc), scale(scale) {}
};

#endif