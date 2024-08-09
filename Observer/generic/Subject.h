#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <set>

class Subject
{
    public:
        Subject(){}
        virtual ~Subject(){}

        virtual void add(Observer* observer)
        {
            this->observers.insert(observer);
        }
        virtual void remove(Observer* observer)
        {
            auto it = this->observers.find(observer);
            if(it != this->observers.end())
            {
                this->observers.erase(it);
            }
        }
        virtual void notify() = 0;

    protected:
        std::set<Observer*> observers;


};

#endif
