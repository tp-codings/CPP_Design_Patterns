#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
    public:
        Observer(){}
        virtual ~Observer(){}

        virtual void update(int state) = 0;
};

#endif
