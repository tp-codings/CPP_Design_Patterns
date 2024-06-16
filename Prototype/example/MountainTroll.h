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
            this->dumpItem += "ID: " + std::to_string(this->id) + "\n";
            this->id++;
        }
        MountainTroll(const MountainTroll& mountainTroll)
        : Troll(mountainTroll), superPower(mountainTroll.superPower)
        {
            this->id++;
            this->dumpItem += "ID: " + std::to_string(this->id);
        }

        ~MountainTroll()
        {
            this->id--;
        }

        virtual MountainTroll* clone() override
        {
            return new MountainTroll(*this);
        }

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
        static int id;
};

int MountainTroll::id = 0;

#endif