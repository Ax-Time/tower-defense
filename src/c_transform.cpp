#include "../include/c_transform.hpp"

void TransformC::rotate(float angle) {
    this->rotation += angle;
}

void TransformC::translate(Vec2& tr) {
    this->pos = this->pos + tr;
}

void TransformC::rescale(float factor) {
    this->scale = this->scale * factor;
}

void TransformC::rescale(Vec2& factors) {
    this->scale = this->scale.hadamard(factors);
}