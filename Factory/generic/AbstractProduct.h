#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

class AbstractProduct
{
    public: 
        AbstractProduct(){}
        virtual ~AbstractProduct(){}

        virtual void dump() = 0;
};

#endif