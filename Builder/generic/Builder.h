#ifndef BUILDER_H
#define BUILDER_H

class Builder
{
    public:
        Builder(){}
        virtual ~Builder(){}

        virtual void reset() = 0;
        virtual void buildStepA() = 0;
        virtual void buildStepB() = 0;
        virtual void buildStepC() = 0;

    protected:

};

#endif