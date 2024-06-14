#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "AbstractPrototype.h"
#include <iostream>

class ConcretePrototype
: public AbstractPrototype
{
    public:
        ConcretePrototype(int initValue)
        {
            this->member = initValue;
        }
        ConcretePrototype(ConcretePrototype* concretePrototype)
        {
            this->member = concretePrototype->member;
        }

        virtual ConcretePrototype* clone() override
        {
            return new ConcretePrototype(this);
        }

        virtual void incrementMember()
        {
            this->member++;
        }

        virtual void dump()
        {
            std::cout << "Member value: " << this->member << std::endl;
        }
    private:
        int member;
};

#endif