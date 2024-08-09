#ifndef DAYNIGHTCYCLE_H
#define DAYNIGHTCYCLE_H

#include "Publisher.h"
#include "DayNightContext.h"

class DayNightCycle
: public Publisher
{
    public:
        DayNightCycle(){}
        ~DayNightCycle(){}

        void updateContext(DayNightContext* dayNightContext)
        {
            this->dayNightContext = dayNightContext;

            bool lastState = this->isDay;
            this->isDay = this->dayNightContext->getIsDay();

            if(lastState != this->isDay)
            {
                this->notify();
            }
        }

    private:
        DayNightContext* dayNightContext = nullptr;

        bool isDay = true;

        virtual void notify() override
        {
            for(auto subscriber : this->subscribers)
            {
                subscriber->update(this->dayNightContext);
            }
        }
};

#endif
