#ifndef COMPONENT_H
#define COMPONENT_H

#include "Mediator.h"

class Component
{
    public:
        Component(Mediator* mediator = nullptr)
        : mediator(mediator){}
        ~Component(){}

        void setMediator(Mediator* mediator)
        {
            this->mediator = mediator;
        }

    protected:
        Mediator* mediator;
};

#endif
