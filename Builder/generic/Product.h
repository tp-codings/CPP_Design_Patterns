#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product
{
    public:
        Product()
        {
            this->dumpResult = "";
        }
        ~Product(){}

        void dump()
        {
            std::cout << "-------------- P R O D U C T --------------" << std::endl 
            << this->dumpResult << std::endl;
        }
        
        void setVariableA(std::string variableA)
        {
            this->dumpResult += variableA + " ";
        }
        void setVariableB(std::string variableB)
        {
            this->dumpResult += variableB + " ";
        }
        void setVariableC(std::string variableC)
        {
            this->dumpResult += variableC + " ";
        }

    private:
        std::string dumpResult;
};

#endif
