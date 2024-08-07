#ifndef HANDLER_H
#define HANDLER_H

#include <string>

class Handler
{
    public:
        Handler(){}
        virtual ~Handler(){}

        virtual void setNext(Handler* nextHandler) = 0;
        virtual std::string handle(std::string request, bool& success) = 0;
};

#endif
