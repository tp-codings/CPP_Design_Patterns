#ifndef ABSTRACTPRODUCTA_H
#define ABSTRACTPRODUCTA_H

#include <iostream>

class AbstractProductA 
{
    public:
        AbstractProductA(){}
        ~AbstractProductA(){}

        virtual void dump()
        {
            std::cout << "> AbstractProductA <" << std::endl;
        }
};

#endif