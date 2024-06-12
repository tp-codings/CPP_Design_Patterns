#ifndef MOUNTAINTROLL_H
#define MOUNTAINTROLL_H

#include "Troll.h"
#include <iostream>
#include <string>

class MountainTroll
: public Troll
{
    public: 
        MountainTroll()
        {
            this->dumpItem += "-------------------- M O U N T A I N   T R O L L -------------------\n";
        }
        ~MountainTroll(){}

        virtual void setSuperPower() override
        {
            std::string superPower = "Rock Rain";
            this->dumpItem += "SUPERPOWER: " + superPower + "\n";
            this->superPower = superPower;
        }

        virtual void uniqueAttack() override
        {
            if(this->superPower != "")
            {
                std::cout << "Mountain Troll \"" << this->name << "\" performs: " << this->superPower << "!" << std::endl;
            }
            else
            {
                std::cout << "Mountain Troll \"" << this->name << "\" punshes!" << std::endl;
            }
        }
    
    private:
        std::string superPower;
};

#endif