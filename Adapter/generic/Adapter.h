#ifndef ADAPTER_H
#define ADAPTER_H

#include "TargetInterface.h"
#include "Service.h"

class Adapter
: public TargetInterface
{
    public:
        Adapter()
        {
            this->adaptee = new Service();
        }
        ~Adapter(){}

        virtual void method(int data)
        {
            this->adaptee->serviceMethod(std::to_string(data));
        }

    private:
        Service* adaptee;
};

#endif