#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "AbstractBuilder.h"
#include "Product.h"

class ConcreteBuilder
: public AbstractBuilder
{
    public:
        ConcreteBuilder()
        {
            this->reset();
        }
        ~ConcreteBuilder(){}

        virtual void reset() override
        {
            this->result = new Product();
        }

        virtual void buildStepA() override
        {
            this->result->setVariableA("Variable A set!");
        }

        virtual void buildStepB() override
        {
            this->result->setVariableB("Variable B set!");

        }
        
        virtual void buildStepC() override
        {
            this->result->setVariableC("Variable C set!");
        }

        Product* getResult()
        {
            return this->result;
        }

    private:
        Product* result;
};

#endif