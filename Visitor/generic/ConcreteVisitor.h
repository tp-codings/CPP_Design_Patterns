#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "Visitor.h"
#include <iostream>

class ConcreteVisitor
: public Visitor
{
    public:
        ConcreteVisitor(){}
        ~ConcreteVisitor(){}

        virtual void visit(ConcreteElementA* concreteElementA) override
        {
            std::cout << "Concrete Visitor visits Concrete Element A." << std::endl;
        }

        virtual void visit(ConcreteElementB* concreteElementB) override
        {
            std::cout << "Concrete Visitor visits Concrete Element B." << std::endl;
        }
};

#endif
