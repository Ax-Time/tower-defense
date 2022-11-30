#include <c_circle_collider.hpp>

bool CircleColliderC::isColliding(CircleColliderC& cc) {
    float radius_sum = this->radius + cc.radius;
    return (this->pos - cc.pos).norm_squared() <= radius_sum * radius_sum;
}