#ifndef CONCRETEITERATORA_H
#define CONCRETEITERATORA_H

#include "Iterator.h"
#include <iostream>

class ConcreteIteratorA
: public Iterator
{
    public:
        ConcreteIteratorA(CommonDataTypes::LinkedList* head)
        : currentPosition(head){}
        ~ConcreteIteratorA(){}

        virtual int getNext() override
        {
            while(this->hasNext())
            {
                currentPosition = currentPosition->next;
                if(!(currentPosition->value%2))
                {
                    return currentPosition->value;
                }
            }
            std::cout << "No next even element found!" << std::endl;
            return -1;
        }

        virtual bool hasNext() override
        {
            if(currentPosition != nullptr)
            {
                return currentPosition->next != nullptr;
            }
            return false;
        }

    private:
        CommonDataTypes::LinkedList* currentPosition = nullptr;
};

#endif
