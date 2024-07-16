#ifndef SUBSYSTEMCLASSA_H
#define SUBSYSTEMCLASSA_H

#include <iostream>

class SubsystemClassA
{
    public:
        SubsystemClassA(){}
        ~SubsystemClassA(){}

        void complexTaskA()
        {
            std::cout << "Complex Task A executed from SubsystemClass A!" << std::endl;
        }

        void complexTaskB()
        {
            std::cout << "Complex Task B executed from SubsystemClass A!" << std::endl;
        }

        void complexTaskC()
        {
            std::cout << "Complex Task C executed from SubsystemClass A!" << std::endl;
        }
};

#endif
