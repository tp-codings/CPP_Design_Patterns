#ifndef CONCRETEELEMENTA_H
#define CONCRETEELEMENTA_H

#include "Element.h"

class ConcreteElementA
: public Element
{
    public:
        ConcreteElementA(){}
        ~ConcreteElementA(){}

        virtual void accept(Visitor* visitor) override
        {
            visitor->visit(this);
        }
};

#endif
