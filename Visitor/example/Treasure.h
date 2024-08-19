#ifndef TREASURE_H
#define TREASURE_H

#include "Interactable.h"

class Treasure
: public Interactable
{
    public:
        Treasure(){}
        ~Treasure(){}

        virtual void accept(InteractorVisitor* interactorVisitor) override
        {
            interactorVisitor->visit(this);
        }
};

#endif
