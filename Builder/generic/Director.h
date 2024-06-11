#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director
{
    public:
        Director(){}
        ~Director(){}

        void buildProductA(Builder* builder)
        {
            builder->buildStepA();
            builder->buildStepB();
        }

        void buildProductB(Builder* builder)
        {
            builder->buildStepC();
        }
};

#endif