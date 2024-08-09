#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "Context.h"

class Subscriber
{
    public:
        Subscriber(){}
        virtual~Subscriber(){}

        virtual void update(Context* context) = 0;
};

#endif
