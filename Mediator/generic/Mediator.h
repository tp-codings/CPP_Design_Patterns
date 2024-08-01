#ifndef MEDIATOR_H
#define MEDIATOR_H

class Colleague;

class Mediator
{
    public:
        Mediator(){}
        virtual ~Mediator(){}

        virtual void notify(Colleague* sender) = 0;
};

#endif
