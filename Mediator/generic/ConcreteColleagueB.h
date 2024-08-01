#ifndef CONCRETECOLLEAGUEB_H
#define CONCRETECOLLEAGUEB_H

#include "Colleague.h"
#include <iostream>

class ConcreteColleagueB
: public Colleague
{
    public:
        ConcreteColleagueB(Mediator* mediator = nullptr)
        : Colleague(mediator){}
        ~ConcreteColleagueB(){}

        void operationA()
        {
            std::cout << "Concrete Colleague B performs operation A and notifies Mediator." << std::endl;
            this->mediator->notify(this);
        }

        void operationB()
        {
            std::cout << "Concrete Colleague B performs operation B." << std::endl;
        }
};

#endif
