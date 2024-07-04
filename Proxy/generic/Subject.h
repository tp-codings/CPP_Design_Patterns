#ifndef SUBJECT_H
#define SUBJECT_H

#include "SubjectInterface.h"
#include <iostream>

class Subject
: public SubjectInterface
{
    public: 
        Subject(){}
        ~Subject(){}

        virtual void operation() override
        {
            std::cout << "Subject is doing something!" << std::endl;
        }
};

#endif