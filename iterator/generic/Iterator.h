#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>

class Iterator
{
    public:
        Iterator(){}
        virtual ~Iterator(){}

        virtual int getNext() = 0;
        virtual bool hasNext() = 0;
};

#endif
