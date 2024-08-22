#ifndef CONCRETEITERATORB_H
#define CONCRETEITERATORB_H

#include "Iterator.h"
#include <iostream>

class ConcreteIteratorB
: public Iterator
{
    public:
        ConcreteIteratorB(CommonDataTypes::LinkedList* head)
        : currentPosition(head){}
        ~ConcreteIteratorB(){}

        virtual int getNext() override
        {
            while(this->hasNext())
            {
                currentPosition = currentPosition->next;
                if(currentPosition->value%2)
                {
                    return currentPosition->value;
                }
            }
            std::cout << "No next odd element found!" << std::endl;
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
