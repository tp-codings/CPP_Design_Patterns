#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context
{
    public:
        Context(State* state)
        : state(state)
        {
            this->state->setContext(this);
        }
        ~Context(){}

        void setState(State* state)
        {
            this->state = state;
        }

        bool execute(int a, int b)
        {
            return this->state->execute(a, b);
        }

    private:
        State* state = nullptr;
};

#endif
