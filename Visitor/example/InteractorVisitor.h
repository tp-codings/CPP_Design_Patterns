#ifndef INTERACTORVISITOR_H
#define INTERACTORVISITOR_H

class Treasure;
class Trap;

class InteractorVisitor
{
    public:
        InteractorVisitor(){}
        virtual ~InteractorVisitor(){}

        virtual void visit(Treasure* treasure) = 0;
        virtual void visit(Trap* trap) = 0;
};

#endif
