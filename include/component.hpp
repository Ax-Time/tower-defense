#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

class Component
{
public:
    std::string entity_id;
    
    Component(std::string& entity_id);
};


#endif