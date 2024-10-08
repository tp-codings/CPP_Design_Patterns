#ifndef ITERATOR_H
#define ITERATOR_H

#include "Item.h"

class Iterator
{
    public:
        Iterator(){}
        virtual ~Iterator(){}

        virtual bool hasNext() const = 0;
        virtual Item* getNext() = 0;
};

#endif
