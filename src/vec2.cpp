#include "vec2.hpp"

#include <cmath>

Vec2::Vec2(float x, float y) {
    this->x = x;
    this->y = y;
}

Vec2 Vec2::operator + (Vec2& v) {
    return Vec2(this->x + v.x, this->y + v.y);
}

Vec2 Vec2::operator - (Vec2& v) {
    return Vec2(this->x - v.x, this->y - v.y);
}

float Vec2::operator * (Vec2& v) {
    return this->x * v.x + this->y * v.y;
}

Vec2 Vec2::operator * (float k) {
    return Vec2(this->x * k, this->y * k);
}

Vec2 Vec2::rotate(float angle_rad) {
    float sin = std::sin(angle_rad);
    float cos = std::cos(angle_rad);

    return Vec2(cos * this->x + sin * this->y, -sin * this->x + cos * this->y);
}

float Vec2::norm_squared() {
    return this->x * this->x + this->y * this->y;
}

Vec2 Vec2::hadamard(Vec2& v) {
    return Vec2(this->x * v.x, this->y * v.y);
}
