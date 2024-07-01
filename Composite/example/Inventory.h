#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

class Inventory
: public Item
{
    public: 
        Inventory(int value, int weight, int level)
        : Item(value, weight), level(level){}

        ~Inventory(){}

        virtual int getValue() override
        {
            int totalValue = this->value;
            for(auto* i: this->children)
            {
                totalValue += i->getValue();
            }
            return totalValue;
        }

        virtual int getWeight() override
        {
            int totalWeight = this->weight;
            for(auto* i: this->children)
            {
                totalWeight += i->getWeight();
            }
            return totalWeight;
        }

        virtual void getItemInfo(std::string& rItemInfo) override
        {
            rItemInfo += "=================== I N V E N T O R Y   L E V E L: " + std::to_string(this->level) + " ===================\nITEM COUNT: " +
                         std::to_string(this->children.size()) + "\n";

            rItemInfo += "TOTAL VALUE: " + std::to_string(this->getValue()) + "\nTOTAL WEIGHT: " + std::to_string(this->getWeight()) + "\n";
            if(this->level != 0)
            {
                rItemInfo += "Value: " + std::to_string(this->value) + "\nWeight: " + std::to_string(this->weight) + "\n";
            }
            rItemInfo += "\n";
            for(auto* i : this->children)
            {
                i->getItemInfo(rItemInfo);
            }
        }

        void appendItem(Item* newItem)
        {
            this->children.push_back(newItem);
        }

    private:
        std::vector<Item*> children;
        int level;
};

#endif