#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"
#include <iostream>

class Context
{
    public:
        Context(){}
        ~Context(){}

        void setStrategy(Strategy* strategy)
        {
            this->strategy = strategy;
        }

        void executeStrategy()
        {
            if(this->strategy)
            {
                this->strategy->execute();
            }
            else
            {
                std::cout << "Strategy not defined!" << std::endl;
            }
        }

    private:
        Strategy* strategy = nullptr;
};

#endif
