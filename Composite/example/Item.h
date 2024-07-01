#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
    public:
        Item(int value, int weight)
        : value(value), weight(weight){}
        virtual ~Item(){}

        virtual int getValue() = 0;
        virtual int getWeight() = 0;

        virtual void  getItemInfo(std::string &rItemInfo) = 0;

    protected:
        int value;
        int weight;
};

#endif