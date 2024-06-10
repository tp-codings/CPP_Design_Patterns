#ifndef ABSTRACTPRODUCTB_H
#define ABSTRACTPRODUCTB_H

#include <iostream>

class AbstractProductB 
{
    public:
        AbstractProductB(){}
        ~AbstractProductB(){}

        virtual void dump()
        {
            std::cout << "> AbstractProductB <" << std::endl;
        }
};

#endif