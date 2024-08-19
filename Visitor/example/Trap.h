#ifndef TRAP_H
#define TRAP_H

#include "Interactable.h"

class Trap
: public Interactable
{
    public:
        Trap(){}
        ~Trap(){}

        virtual void accept(InteractorVisitor* interactorVisitor) override
        {
            interactorVisitor->visit(this);
        }
};

#endif
