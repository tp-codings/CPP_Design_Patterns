#ifndef CONCRETEALGORITHMB_H
#define CONCRETEALGORITHMB_H

#include "AbstractAlgorithm.h"

class ConcreteAlgorithmB
: public AbstractAlgorithm
{
    public:
        ConcreteAlgorithmB(){}
        ~ConcreteAlgorithmB(){}

        virtual void stepA() override
        {
            std::cout << "Specific algorithm step A for Concrete Algorithm B" << std::endl;
        }

        virtual void stepB() override
        {
            std::cout << "Specific algorithm step B for Concrete Algorithm B" << std::endl;
        }

        virtual void stepC() override
        {
            std::cout << "Common algorithm step C with slight variation for Concrete Algorithm B" << std::endl;
        }
};

#endif
