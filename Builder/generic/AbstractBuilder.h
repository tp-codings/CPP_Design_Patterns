#ifndef ABSTRACTBUILDER_H
#define ABSTRACTBUILDER_H

class AbstractBuilder
{
    public:
        AbstractBuilder(){}
        virtual ~AbstractBuilder(){}

        virtual void reset() = 0;
        virtual void buildStepA() = 0;
        virtual void buildStepB() = 0;
        virtual void buildStepC() = 0;
};

#endif