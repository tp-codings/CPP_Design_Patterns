#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf
: public Component
{
    public:
        Leaf(std::string value)
        : member(value){}
        ~Leaf(){}

        virtual std::string execute() override
        {
            return "Leaf: " + this->member + "\n";
        }

    private:
        std::string member;
};

#endif