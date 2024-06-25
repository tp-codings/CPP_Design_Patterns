#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <vector>

class Component{
    public:
        virtual float calculatePrize() = 0;
        virtual std::vector<std::string> getPackageInfo() = 0;
};

#endif