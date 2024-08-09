#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "Subject.h"

class ConcreteSubject
: public Subject
{
    public:
        ConcreteSubject(){}
        ~ConcreteSubject(){}

        void updateState(int newState)
        {
            this->state = newState;
            this->notify();
        }

    private:
        int state = 0;

        virtual void notify() override
        {
            for(auto observer : this->observers)
            {
                observer->update(this->state);
            }
        }
};

#endif
