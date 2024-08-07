#ifndef BASEACTIONHANDLER_H
#define BASEACTIONHANDLER_H

#include "ActionHandler.h"

class BaseActionHandler
: public ActionHandler
{
    public:
        BaseActionHandler(){}
        ~BaseActionHandler(){}

        virtual void setNext(ActionHandler* nextActionHandler) override
        {
            this->nextActionHandler = nextActionHandler;
        }

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            if(this->nextActionHandler != nullptr)
            {
                return this->nextActionHandler->handle(spellMetaInfo);
            }
            return {};
        }

    private:
        ActionHandler* nextActionHandler = nullptr;
};

#endif
