#ifndef CONCRETEHANDLERB_H
#define CONCRETEHANDLERB_H

#include "BaseHandler.h"

class ConcreteHandlerB
: public BaseHandler
{
    public:
        ConcreteHandlerB(){}
        ~ConcreteHandlerB(){}

        virtual std::string handle(std::string request, bool& success) override
        {
            if(request == "B")
            {
                success = true;
                return "--> Concrete Handler B handles request: " + request + "\n";
            }
            else
            {
                success = false;
                return "--> Concrete Handler B cannot handle request: " + request + "\n" + BaseHandler::handle(request, success);
            }
        }
};

#endif
