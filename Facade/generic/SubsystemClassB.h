#ifndef SUBSYSTEMCLASSB_H
#define SUBSYSTEMCLASSB_H

#include <iostream>

class SubsystemClassB
{
    public:
        SubsystemClassB(){}
        ~SubsystemClassB(){}

        void complexTaskA()
        {
            std::cout << "Complex Task A executed from SubsystemClass B!" << std::endl;
        }

        void complexTaskB()
        {
            std::cout << "Complex Task B executed from SubsystemClass B!" << std::endl;
        }

        void complexTaskC()
        {
            std::cout << "Complex Task C executed from SubsystemClass B!" << std::endl;
        }

};

#endif
