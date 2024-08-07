#ifndef CONCRETEHANDLERA_H
#define CONCRETEHANDLERA_H

#include "BaseHandler.h"

class ConcreteHandlerA
: public BaseHandler
{
    public:
        ConcreteHandlerA(){}
        ~ConcreteHandlerA(){}

        virtual std::string handle(std::string request, bool& success) override
        {
            if(request == "A")
            {
                success = true;
                return "--> Concrete Handler A handles request: " + request + "\n";
            }
            else
            {
                success = false;
                return "--> Concrete Handler A cannot handle request: " + request + "\n" + BaseHandler::handle(request, success);
            }
        }
};

#endif
