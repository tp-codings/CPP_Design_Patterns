#ifndef COMMONDATATYPES_H
#define COMMONDATATYPES_H

namespace CommonDataTypes
{
    struct LinkedList
    {
        int value;
        LinkedList* next;

        LinkedList(int value) : value(value), next(nullptr){}
    }; 
} 

#endif

