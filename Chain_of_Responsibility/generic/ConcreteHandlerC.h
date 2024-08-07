#ifndef CONCRETEHANDLERC_H
#define CONCRETEHANDLERC_H

#include "BaseHandler.h"

class ConcreteHandlerC
: public BaseHandler
{
    public:
        ConcreteHandlerC(){}
        ~ConcreteHandlerC(){}

        virtual std::string handle(std::string request, bool& success) override
        {
            if(request == "C")
            {
                success = true;
                return "--> Concrete Handler C handles request: " + request + "\n";
            }
            else
            {
                success = false;
                return "--> Concrete Handler C cannot handle request: " + request + "\n" + BaseHandler::handle(request, success);
            }
        }
};

#endif
