#ifndef EQUIPPEDITERATOR_H
#define EQUIPPEDITERATOR_H

#include "Iterator.h"
#include <vector>

class EquippedIterator
: public Iterator
{
    public:
        EquippedIterator(const std::vector<Item*>& items) 
        : items(items), position(0) {}

        bool hasNext() const override 
        {
            while (position < items.size() && !items[position]->isEquipped()) 
            {
                ++position;
            }
            return position < items.size();
        }

        Item* next() override 
        {
            return hasNext() ? items[position++] : nullptr;
        }

    private:
        const std::vector<Item*>& items;
        mutable size_t position;
};

#endif
