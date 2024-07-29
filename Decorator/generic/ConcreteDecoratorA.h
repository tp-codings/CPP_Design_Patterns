#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Decorator.h"

class ConcreteDecoratorA
: public Decorator
{
    public:
        ConcreteDecoratorA(Component* wrappee)
        : Decorator(wrappee){}
        ~ConcreteDecoratorA(){}

        virtual void use() override
        {
            this->wrappee->use();
            std::cout << "Added functionality from ConcreteDecorator A!" << std::endl;
        }
};

#endif
