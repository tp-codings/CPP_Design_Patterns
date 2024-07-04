#ifndef PROXY_H
#define PROXY_H

#include "SubjectInterface.h"
#include "Subject.h"
#include <iostream>

class Proxy
: public SubjectInterface
{
    public: 
        Proxy(Subject* subject)
        : subject(subject), access(false){}
        ~Proxy(){}

        virtual void operation() override
        {
            if(this->access)
            {
                this->subject->operation();
            }
            else
            {
                std::cout << "Access denied!" << std::endl;
            }
        }

        void setAccess(bool access)
        {
            this->access = access;
        }

    private:
        Subject* subject;
        bool access;
};

#endif