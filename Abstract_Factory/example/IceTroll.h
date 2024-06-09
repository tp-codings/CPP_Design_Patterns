#ifndef ICETROLL_H
#define ICETROLL_H

#include "Troll.h"
#include <iostream>

class IceTroll
: public Troll
{
    public: 
        IceTroll(){}
        ~IceTroll(){}

        void uniqueAttack()
        {
            std::cout << "IceTroll throws ice!" << std::endl;
        }
};

#endif