#ifndef BASEHANDLER_H
#define BASEHANDLER_H

#include "Handler.h"

class BaseHandler
: public Handler
{
    public:
        BaseHandler(){}
        ~BaseHandler(){}

        virtual void setNext(Handler* nextHandler) override
        {
            this->nextHandler = nextHandler;
        }

        virtual std::string handle(std::string request, bool& success) override
        {
            if(nextHandler != nullptr)
            {
                return this->nextHandler->handle(request, success);
            }
            return {};
        }

    private:
        Handler* nextHandler = nullptr;
};

#endif
