#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"

class ConcreteMediator
: public Mediator
{
    public:
        ConcreteMediator(ConcreteColleagueA* concreteColleagueA, ConcreteColleagueB* concreteColleagueB)
        : concreteColleagueA(concreteColleagueA), concreteColleagueB(concreteColleagueB)
        {
            this->concreteColleagueA->setMediator(this);
            this->concreteColleagueB->setMediator(this);
        }
        ~ConcreteMediator(){}

        virtual void notify(Colleague* sender) override
        {
            if(sender == this->concreteColleagueA)
            {
                std::cout << "Mediator reacts on Concrete Colleague A and triggers operation B from Concrete Colleague B." << std::endl;
                this->concreteColleagueB->operationB();
            }
            else if(sender == this->concreteColleagueB)
            {
                std::cout << "Mediator reacts on Concrete Colleague B and triggers operation B from Concrete Colleague A." << std::endl;
                this->concreteColleagueA->operationB();
            }
            else
            {
                std::cout << "Sender not known." << std::endl;
            }
        }

    private:
        ConcreteColleagueA* concreteColleagueA;
        ConcreteColleagueB* concreteColleagueB;
};

#endif
