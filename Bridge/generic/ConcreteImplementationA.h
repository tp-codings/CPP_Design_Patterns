#ifndef CONCRETEIMPLEMENTATIONA_H
#define CONCRETEIMPLEMENTATIONA_H

#include "Implementation.h"
#include <iostream>

class ConcreteImplementationA 
: public Implementation 
{
    public:
        ConcreteImplementationA(){}
        ~ConcreteImplementationA(){}
        
        void operation() override 
        {
            std::cout << "Performing operation A." << std::endl;
        }
};

#endif 