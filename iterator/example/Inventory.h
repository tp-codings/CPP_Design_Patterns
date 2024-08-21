#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include "FilteredIterator.h"
#include "EquippedIterator.h"

class Inventory
{
    public:
        void addItem(Item* item) 
        { 
            items.push_back(item); 
        }

        Iterator* createFilteredIterator(const std::function<bool(Item*)>& filter) const 
        {
            return new FilteredIterator(items, filter);
        }

        Iterator* createEquippedIterator() const 
        {
            return new EquippedIterator(items);
        }

    private:
        std::vector<Item*> items;
};

#endif
