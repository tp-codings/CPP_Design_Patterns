#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H

#include "Decorator.h"

class ConcreteDecoratorB
: public Decorator
{
    public:
        ConcreteDecoratorB(Component* wrappee)
        : Decorator(wrappee){}
        ~ConcreteDecoratorB(){}

        virtual void use() override
        {
            this->wrappee->use();
            std::cout << "Added functionality from ConcreteDecorator B!" << std::endl;
        }
};

#endif
