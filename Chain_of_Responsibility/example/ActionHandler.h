#ifndef ACTIONHANDLER_H
#define ACTIONHANDLER_H

#include <string>
#include "CommonDataTypes.h"

class ActionHandler
{
    public:
        ActionHandler(){}
        virtual ~ActionHandler(){}

        virtual void setNext(ActionHandler* nextActionHandler) = 0;
        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) = 0;
};

#endif
