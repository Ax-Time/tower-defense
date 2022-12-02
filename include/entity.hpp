#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

enum class EntityType {
    Tower, Minion
};

class Entity
{
private:
    std::string     id;     // 64-char string
    EntityType      type;   // entity's type
public:
    Entity(EntityType type);
    std::string getId();

    operator std::string() const;
};

#endif