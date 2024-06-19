#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include <iostream>

class Service
{
    public:
        Service(){}
        ~Service(){}

        void serviceMethod(std::string data)
        {
            std::cout << "------------ S E R V I C E ------------" << std:: endl <<
            "DATA: " << data << std::endl << std::endl;
        }
};

#endif