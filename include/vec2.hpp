#ifndef VEC2_HPP
#define VEC2_HPP

#include <string>

class Vec2
{
public:
    float x;
    float y;

    Vec2(float x, float y);
    Vec2 operator + (Vec2& v);
    Vec2 operator - (Vec2& v);
    float operator * (Vec2& v);
    operator std::string() const {
        return std::string("(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")");
    }
    Vec2 rotate(float angle_rad);
    float norm_squared();
};

#endif