#ifndef FILTEREDITERATOR_H
#define FILTEREDITERATOR_H

#include "Iterator.h"
#include <vector>
#include <functional>

class FilteredIterator
: public Iterator
{
    public:
        FilteredIterator(const std::vector<Item*>& items, std::function<bool(Item*)> filter)
            : items(items), filter(filter), position(0) {}

        bool hasNext() const override 
        {
            while (position < items.size() && !filter(items[position])) 
            {
                ++position;
            }
            return position < items.size();
        }

        Item* getNext() override 
        {
            return hasNext() ? items[position++] : nullptr;
        }

    private:
        const std::vector<Item*>& items;
        std::function<bool(Item*)> filter;
        mutable size_t position;
};

#endif
