#ifndef CONCRETEALGORITHMA_H
#define CONCRETEALGORITHMA_H

#include "AbstractAlgorithm.h"

class ConcreteAlgorithmA
: public AbstractAlgorithm
{
    public:
        ConcreteAlgorithmA(){}
        ~ConcreteAlgorithmA(){}

        virtual void stepA() override
        {
            std::cout << "Specific algorithm step A for Concrete Algorithm A" << std::endl;
        }

        virtual void stepB() override
        {
            std::cout << "Specific algorithm step B for Concrete Algorithm A" << std::endl;
        }
};

#endif
