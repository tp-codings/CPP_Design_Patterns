#ifndef CONCRETEIMPLEMENTATIONB_H
#define CONCRETEIMPLEMENTATIONB_H

#include "Implementation.h"
#include <iostream>

class ConcreteImplementationB
: public Implementation 
{
    public:
        ConcreteImplementationB(){}
        ~ConcreteImplementationB(){}
        
        void operation() override 
        {
            std::cout << "Performing operation B." << std::endl;
        }
};

#endif 