#ifndef SUBCONCRETEPROTOTYPE_H
#define SUBCONCRETEPROTOTYPE_H

#include "ConcretePrototype.h"

class SubConcretePrototype
: public ConcretePrototype
{
    public:
        SubConcretePrototype(int initValue)
        : ConcretePrototype(initValue)
        {
            this->subMember = initValue;
        }

        SubConcretePrototype(SubConcretePrototype* subConcretePrototype)
        : ConcretePrototype(subConcretePrototype)
        {
            this->subMember = subConcretePrototype->subMember;
        }

        virtual SubConcretePrototype* clone() override
        {
            return new SubConcretePrototype(this);
        }

        virtual void incrementMember() override
        {
            this->subMember++;
        }

        virtual void dump() override
        {
            std::cout << "SubMember value: " << this->subMember << std::endl;
        }

    private:
        int subMember;
};

#endif