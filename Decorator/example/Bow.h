#ifndef BOW_H
#define BOW_H

#include "Weapon.h"
#include <iostream>

class Bow 
: public Weapon 
{
    public:
        Bow(){}
        ~Bow(){}

        void use() override 
        {
            std::cout << "Using a Bow: " << std::endl;
        }
};

#endif 
