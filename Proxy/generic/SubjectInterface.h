#ifndef SUBJECTINTERFACE_H
#define SUBJECTINTERFACE_H

class SubjectInterface
{
    public: 
        SubjectInterface() = default;
        virtual ~SubjectInterface() = default;

        virtual void operation() = 0;
};

#endif