#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Subscriber.h"
#include <set>

class Publisher
{
    public:
        Publisher(){}
        ~Publisher(){}

        virtual void add(Subscriber* subscriber)
        {
            this->subscribers.insert(subscriber);
        }
        virtual void remove(Subscriber* subscriber)
        {
            auto it = this->subscribers.find(subscriber);
            if(it != this->subscribers.end())
            {
                this->subscribers.erase(it);
            }
        }

    protected:
        std::set<Subscriber*> subscribers;
        
        virtual void notify() = 0;
};

#endif
