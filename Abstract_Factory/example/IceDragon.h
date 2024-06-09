#ifndef ICEDRAGON_H
#define ICEDRAGON_H

#include "Dragon.h"
#include <iostream>

class IceDragon
: public Dragon
{
    public: 
        IceDragon(){}
        ~IceDragon(){}

        void uniqueAttack()
        {
            std::cout << "IceDragon spits ice!" << std::endl;
        }
};

#endif