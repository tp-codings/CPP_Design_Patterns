#ifndef FACADE_H
#define FACADE_H

#include "SubsystemClassA.h"
#include "SubsystemClassB.h"

class Facade
{
    public:
        Facade()
        {
            this->subsystemA = new SubsystemClassA();
            this->subsystemB = new SubsystemClassB();
        }
        ~Facade(){}

        void subsystemOperationA()
        {
            std::cout << "------------- S U B S Y S T E M   C L A S S   A -------------" << std::endl 
            << "--> Complex Tasks: " << std:: endl;
            this->subsystemA->complexTaskA();
            this->subsystemA->complexTaskB();
            this->subsystemA->complexTaskC();
        }
        void subsystemOperationB()
        {
            std::cout << "------------- S U B S Y S T E M   C L A S S   B -------------" << std::endl
            << "--> Complex Tasks: " << std:: endl;          
            this->subsystemB->complexTaskA();
            this->subsystemB->complexTaskB();
            this->subsystemB->complexTaskC();
        }

    private:
        SubsystemClassA* subsystemA;
        SubsystemClassB* subsystemB;
};

#endif
