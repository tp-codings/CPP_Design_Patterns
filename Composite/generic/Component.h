#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>
#include <string>

class Component
{
    public:
        Component() = default;
        virtual ~Component() = default;

        virtual std::string execute() = 0;
};

#endif