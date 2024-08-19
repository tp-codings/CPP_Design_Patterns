#ifndef VILLAINVISITOR_H
#define VILLAINVISITOR_H

#include "InteractorVisitor.h"
#include <iostream>

class VillainVisitor
: public InteractorVisitor
{
    public:
        VillainVisitor(){}
        ~VillainVisitor(){}

        virtual void visit(Treasure* treasure) override
        {
            std::cout << "Villain interacts with Treasure." << std::endl;
        }

        virtual void visit(Trap* trap) override
        {
            std::cout << "Villain falls into Trap." << std::endl;
        }
};

#endif
