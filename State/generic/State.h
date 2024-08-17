#ifndef STATE_H
#define STATE_H

class Context;

class State
{
    public:
        State(){}
        ~State(){}

        virtual bool execute(int a, int b) = 0;

        void setContext(Context* context)
        {
            this->context = context;
        }

    protected:
        Context* context = nullptr;
};

#endif
