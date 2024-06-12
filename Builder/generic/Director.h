#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "AbstractBuilder.h"

class Director
{
    public:
        Director(){}
        ~Director(){}

        void buildProductA(AbstractBuilder* builder)
        {
            builder->buildStepA();
            builder->buildStepB();
        }

        void buildProductB(AbstractBuilder* builder)
        {
            builder->buildStepC();
        }
};

#endif