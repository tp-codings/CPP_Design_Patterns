#ifndef TROLL_H
#define TROLL_H

#include <string>
#include <iostream>

class Troll 
{
    public:
        Troll()
        {
            this->dumpItem = ""; 
        }
        ~Troll(){}

        virtual void setSuperPower(){} 
        virtual void uniqueAttack(){}
        
        void dump()
        {
            std::cout << this->dumpItem << std::endl;
        }

        void setName(std::string name)
        {
            this->dumpItem += "NAME: " + name + "\n";
            this->name = name;
        }
        void setArmour(std::string armourType)
        {
            this->dumpItem += "ARMOUR: " + armourType + "\n";
            this->armour = armourType;
        }
        void setWeapon(std::string weaponType)
        {
            this->dumpItem += "WEAPON: " + weaponType + "\n";
            this->weapon = weaponType;
        }
        void setCanThrowRocks(bool canThrowRocks)
        {
            this->dumpItem += "CANTHROWROCKS: " + std::to_string(canThrowRocks) + "\n";
            this->canThrowRocks = canThrowRocks;
        }
        void setIsPeaceful(bool isPeaceful)
        {
            this->dumpItem += "ISPEACEFUL: " + std::to_string(isPeaceful) + "\n";
            this->isPeaceful = isPeaceful;
        }
        void setStrength(int strength)
        {
            this->dumpItem += "STRENGTH: " + std::to_string(strength) + "\n";
            this->strength = strength;
        }
        void setHeight(int height)
        {
            this->dumpItem += "HEIGHT: " + std::to_string(height) + "\n";
            this->height = height;
        }
        void setHealth(int health)
        {
            this->dumpItem += "HEALTH: " + std::to_string(health) + "\n";
            this->health = health;
        }

    protected:
        std::string dumpItem;
        std::string name;
        std::string armour;
        std::string weapon;
        bool canThrowRocks;
        bool isPeaceful;
        int strength;
        int height;
        int health;
};

#endif