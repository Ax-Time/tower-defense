#include "s_transform.hpp"

void TransformS::updateSpeed(TransformC& tr, float deltaT) {
    Vec2 temp = tr.acc * deltaT;
    tr.vel = tr.vel + temp;
}

void TransformS::updatePos(TransformC& tr, float deltaT) {
    Vec2 temp = tr.vel * deltaT;
    tr.pos = tr.pos + temp;
}

void TransformS::updateDynamics(TransformC& tr, float deltaT) {
    this->updateSpeed(tr, deltaT);
    this->updatePos(tr, deltaT);
}

void TransformS::update(TransformC& tr, float deltaT) {
    this->updateDynamics(tr, deltaT);
}

void TransformS::update(std::vector<TransformC>& transforms, float deltaT) {
    for(auto tr : transforms) 
        this->update(tr, deltaT);
}
