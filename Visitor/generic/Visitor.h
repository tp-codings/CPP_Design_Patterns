#ifndef VISITOR_H
#define VISITOR_H

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
    public:
        Visitor(){}
        virtual ~Visitor(){}

        virtual void visit(ConcreteElementA* concreteElementA) = 0;
        virtual void visit(ConcreteElementB* concreteElementB) = 0;
};

#endif
