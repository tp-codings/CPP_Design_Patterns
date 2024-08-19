#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "InteractorVisitor.h"

class Interactable
{
    public:
        Interactable(){}
        virtual ~Interactable(){}

        virtual void accept(InteractorVisitor* interactorVisitor) = 0;
};

#endif
