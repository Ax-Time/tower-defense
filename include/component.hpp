#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

class Component
{
private:
    std::string entity_id;
public:
    Component(std::string& entity_id);
};


#endif