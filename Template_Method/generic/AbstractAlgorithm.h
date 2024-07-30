#ifndef ABSTRACTALGORITHM_H
#define ABSTRACTALGORITHM_H

#include <iostream>

class AbstractAlgorithm
{
    public:
        AbstractAlgorithm(){}
        virtual ~AbstractAlgorithm(){}

        virtual void templateMethod() final
        {
            std::cout << "-------- T E M P L A T E    M E T H O D    ->    S T A R T --------" << std::endl;
            this->stepA();
            this->stepB();
            this->stepC();
            this->stepD();
            std::cout << "---------- T E M P L A T E    M E T H O D    ->    E N D ----------" << std::endl << std::endl;
        }
    
    protected:
        virtual void stepA() = 0;
        virtual void stepB() = 0;

        virtual void stepC()
        {
            std::cout << "Common algorithm step C!" << std::endl;
        }

        virtual void stepD()
        {
            std::cout << "Common algorithm step D!" << std::endl;
        }       
};

#endif
