#ifndef DAYNIGHTCONTEXT_H
#define DAYNIGHTCONTEXT_H

#include "Context.h"

class DayNightContext
: public Context
{
    public:
        DayNightContext(){}
        ~DayNightContext(){}

        int getTime()
        {
            return this->time;
        }

        void setTime(int newTime)
        {
            this->time = newTime;
            this->isDay = !(this->time > 22 || this->time < 6);
        }

        bool getIsDay()
        {
            return this->isDay;
        }

        bool getIsFullMoon()
        {
            return this->isFullMoon;
        }

        void setIsFullMoon(bool isFullMoon)
        {
            this->isFullMoon = isFullMoon;
        }

    private:
        int time = 0;
        bool isDay = false;
        bool isFullMoon = false;
};

#endif
