#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
    public:
        Item(){}
        virtual ~Item(){}

        virtual std::string getType() const = 0;
        virtual void showDetail() const = 0;

        bool isEquipped() const 
        { 
            return equipped; 
        }

        void equip() 
        { 
            equipped = true; 
        }

        void unequip() 
        { 
            equipped = false; 
        }

    private:
        bool equipped = false;
};

#endif
