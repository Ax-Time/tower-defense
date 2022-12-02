#include "../include/s_circle_collider.hpp"

CollidersQueue CircleColliderS::detectCollisions(std::vector<CircleColliderC>& colliders) {
    CollidersQueue queue;

    for(int i = 0; i < colliders.size() - 1; i++)
        for(int j = i + 1; j < colliders.size(); j++) {
            auto c1 = colliders[i];
            auto c2 = colliders[j];
            if(c1.isColliding(c2))
                queue.push(std::pair<std::string&, std::string&>(c1.entity_id, c2.entity_id));
        }

    return queue;
}

void CircleColliderS::update(std::vector<CircleColliderC>& colliders) {
    auto collisions = this->detectCollisions(colliders);
    this->applyCollisionEffects(collisions);
}

void CircleColliderS::applyCollisionEffects(CollidersQueue collisions) {
    while(!collisions.empty()) {
        auto collision = collisions.front();
        collisions.pop();

        // collision logic here
    }
}