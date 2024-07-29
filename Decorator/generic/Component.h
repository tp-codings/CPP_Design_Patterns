#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
    public:
        Component(){}
        ~Component(){}

        virtual void use() = 0;
};

#endif
