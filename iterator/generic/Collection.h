#ifndef COLLECTION_H
#define COLLECTION_H

#include "Iterator.h"

class Collection
{
    public:
        Collection(){}
        virtual ~Collection(){}

        virtual Iterator* createIteratorA() = 0;
        virtual Iterator* createIteratorB() = 0;
};

#endif
