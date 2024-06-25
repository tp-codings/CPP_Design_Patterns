#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Component.h"
#include <vector>

class Composite
: public Component
{
    public:
        Composite(std::string value)
        : member(value){}
        ~Composite(){}

        virtual std::string execute() override
        {
            std::string result = "----------- C O M P O S I T E -----------\nLevel: " + this->member + "\n";
            for(auto* i : this->children)
            {
                result += i->execute();
            }
            return result;
        }

        void add(Component* component)
        {
            this->children.push_back(component);
        }
        void remove()
        {
            this->children.pop_back();
        }

    private:
        std::vector<Component*> children;
        std::string member;
};

#endif