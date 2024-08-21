#ifndef POTION_H
#define POTION_H

#include "Item.h"
#include <iostream>

class Potion
: public Item
{
    public:
        Potion(const std::string& name) 
        : name(name) {}
        ~Potion(){}

        std::string getType() const override 
        { 
            return "Potion"; 
        }

        void showDetail() const override 
        { 
            std::cout << "Potion Name: " << name << std::endl; 
        }

    private:
        std::string name;
};

#endif
