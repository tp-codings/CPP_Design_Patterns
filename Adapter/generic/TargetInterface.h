#ifndef TARGETINTERFACE_H
#define TARGETINTERFACE_H

class TargetInterface
{
    public:
        TargetInterface(){}
        virtual ~TargetInterface(){}

        virtual void method(int data) = 0;
};

#endif