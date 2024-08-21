#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include <iostream>

class Weapon
: public Item
{
    public:
        Weapon(const std::string& name) 
        : name(name) {}
        ~Weapon(){}

        std::string getType() const override 
        { 
            return "Weapon"; 
        }

        void showDetail() const override 
        { 
            std::cout << "Weapon Name: " << name << std::endl; 
        }

    private:
        std::string name;
};

#endif
