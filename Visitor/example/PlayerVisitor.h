#ifndef PLAYERVISITOR_H
#define PLAYERVISITOR_H

#include "InteractorVisitor.h"
#include <iostream>

class PlayerVisitor
: public InteractorVisitor
{
    public:
        PlayerVisitor(){}
        ~PlayerVisitor(){}
        
        virtual void visit(Treasure* treasure) override
        {
            std::cout << "Player interacts with Treasure." << std::endl;
        }

        virtual void visit(Trap* trap) override
        {
            std::cout << "Player falls into Trap." << std::endl;
        }
};

#endif
