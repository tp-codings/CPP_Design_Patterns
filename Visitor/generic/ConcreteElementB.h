#ifndef CONCRETEELEMENTB_H
#define CONCRETEELEMENTB_H

#include "Element.h"

class ConcreteElementB
: public Element
{
    public:
        ConcreteElementB(){}
        ~ConcreteElementB(){}

        virtual void accept(Visitor* visitor) override
        {
            visitor->visit(this);
        }
};

#endif
