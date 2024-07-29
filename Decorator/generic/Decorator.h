#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"
#include <iostream>

class Decorator
: public Component
{
    public:
        Decorator(Component* wrappee)
        : wrappee(wrappee){}
        ~Decorator(){}

    protected:
        Component* wrappee;
};

#endif
