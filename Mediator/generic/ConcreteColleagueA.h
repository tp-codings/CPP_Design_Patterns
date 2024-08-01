#ifndef CONCRETECOLLEAGUEA_H
#define CONCRETECOLLEAGUEA_H

#include "Colleague.h"
#include <iostream>

class ConcreteColleagueA
: public Colleague
{
    public:
        ConcreteColleagueA(Mediator* mediator = nullptr)
        : Colleague(mediator){}
        ~ConcreteColleagueA(){}

        void operationA()
        {
            std::cout << "Concrete Colleague A performs operation A and notifies Mediator." << std::endl;
            this->mediator->notify(this);
        }

        void operationB()
        {
            std::cout << "Concrete Colleague A performs operation B." << std::endl;
        }
};

#endif
