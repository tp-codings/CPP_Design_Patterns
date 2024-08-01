#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "Mediator.h"

class Colleague
{
    public:
        Colleague(Mediator* mediator = nullptr)
        : mediator(mediator){}
        ~Colleague(){}

        void setMediator(Mediator* mediator)
        {
            this->mediator = mediator;
        }
    protected:
        Mediator* mediator;

};

#endif
