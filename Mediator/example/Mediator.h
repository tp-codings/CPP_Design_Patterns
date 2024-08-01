#ifndef MEDIATOR_H
#define MEDIATOR_H

class Component;

class Mediator
{
    public:
        Mediator(){}
        virtual ~Mediator(){}

        virtual void notify(Component* sender) = 0;
};

#endif
