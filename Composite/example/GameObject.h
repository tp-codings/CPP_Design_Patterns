#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Item.h"

class GameObject
: public Item
{
    public:
        GameObject(int value, int weight, std::string description)
        : Item(value, weight), description(description){}

        virtual int getValue() override
        {
            return this->value;
        }

        virtual int getWeight() override
        {
            return this->weight;
        }

        virtual void getItemInfo(std::string& rItemInfo) override
        {
            rItemInfo += "------ G A M E  O B J E C T ------\nKIND: " + 
            this->description + "\nValue: " + std::to_string(this->value) + 
            "\nWeight: " + std::to_string(this->weight) + "\n\n";
        }

    private:
        std::string description;
};

#endif