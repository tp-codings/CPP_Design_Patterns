#ifndef CONCRETECOLLECTION_H
#define CONCRETECOLLECTION_H

#include "Collection.h"
#include "CommonDataTypes.h"
#include "ConcreteIteratorA.h"
#include "ConcreteIteratorB.h"

class ConcreteCollection
: public Collection
{
    public:

        ConcreteCollection(){}
        ~ConcreteCollection(){}

        virtual Iterator* createIteratorA() override
        {
            return new ConcreteIteratorA(this->head);
        }

        virtual Iterator* createIteratorB() override
        {
            return new ConcreteIteratorB(this->head);
        }


        void append(int value)
        {
            CommonDataTypes::LinkedList* newEntry = new CommonDataTypes::LinkedList(value);

            if (head == nullptr) 
            {
                head = newEntry;
            } 
            else 
            {
                CommonDataTypes::LinkedList* temp = head;
                while (temp->next != nullptr) 
                {
                    temp = temp->next;
                }
                temp->next = newEntry;
            }
        }

    private:
        CommonDataTypes::LinkedList* head = nullptr;
};

#endif
