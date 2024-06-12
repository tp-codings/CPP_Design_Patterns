#ifndef ICETROLL_H
#define ICETROLL_H

#include "Troll.h"
#include <iostream>
#include <string>

class IceTroll
: public Troll
{
    public: 
        IceTroll()
        {
            this->dumpItem += "-------------------- I C E   T R O L L -------------------\n";
        }
        ~IceTroll(){}

        virtual void setSuperPower() override
        {
            std::string superPower = "Ice Storm";
            this->dumpItem += "SUPERPOWER: " + superPower + "\n";
            this->superPower = superPower;
        }

        virtual void uniqueAttack() override
        {
            if(this->superPower != "")
            {
                std::cout << "Ice Troll \"" << this->name << "\" performs: " << this->superPower << "!" << std::endl;
            }
            else
            {
                std::cout << "Ice Troll \"" << this->name << "\" throws ice!" << std::endl;
            }
        }
    
    private:
        std::string superPower;
};

#endif