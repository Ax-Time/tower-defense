#include "../include/entity.hpp"

#include <ctime>

Entity::Entity(EntityType type) {
    this->type = type;

    srand(time(NULL));

    static const char allowed[] = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890zxcvbnmasdfghjklqwertyuiop";
    int len = 63;

    std::string s = "";
    for(int i = 0; i < 64; i++)
        s += allowed[rand() % len];

    this->id = s;
}

std::string Entity::getId() {
    return this->id;
}

Entity::operator std::string() const {
    return std::string("id: " + this->id);
}