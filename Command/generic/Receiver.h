#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class Receiver
{
    public:
        Receiver(){}
        ~Receiver(){}

        int getState()
        {
            return this->state;
        }

        void setState(int state)
        {
            this->state = state;
            std::cout << "Current Receiver state: " << this->state << std::endl;
        }

        void incrementState()
        {
            this->state++;
            std::cout << "Current Receiver state: " << this->state << std::endl;
        }

        void resetState()
        {
            this->state = 0;
            std::cout << "Current Receiver state: " << this->state << std::endl;
        }

    private:
        int state = 0;
};

#endif
