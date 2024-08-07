#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"
#include "ConcreteHandlerC.h"

#include <vector>
#include <iostream>

int main()
{
    ConcreteHandlerA* concreteHandlerA = new ConcreteHandlerA();
    ConcreteHandlerB* concreteHandlerB = new ConcreteHandlerB();
    ConcreteHandlerC* concreteHandlerC = new ConcreteHandlerC();

    concreteHandlerA->setNext(concreteHandlerB);
    concreteHandlerB->setNext(concreteHandlerC);

    std::vector<std::string> requests = {"B", "D", "C", "A"};

    std::cout << "Concrete Handlers: A -> B -> C" << std::endl;
    for(auto request : requests)
    {
        bool success = false;
        std::string result = concreteHandlerA->handle(request, success);
        if(success)
        {
            std::cout << "========== S U C C E S S =========="  << std::endl 
            << result << std::endl;
        }
        else
        {
            std::cout << "========== F A I L U R E =========="  << std::endl << 
            "--> Request: " << request << " could not be handled." << std::endl << std::endl;
        }
    }

    delete concreteHandlerA;
    delete concreteHandlerB;
    delete concreteHandlerC;

    concreteHandlerA = new ConcreteHandlerA();
    concreteHandlerC = new ConcreteHandlerC();

    concreteHandlerC->setNext(concreteHandlerA);
    std::cout << "Concrete Handlers: C -> A" << std::endl;

    for(auto request : requests)
    {
        bool success = false;
        std::string result = concreteHandlerC->handle(request, success);
        if(success)
        {
            std::cout << "========== S U C C E S S =========="  << std::endl 
            << result << std::endl;
        }
        else
        {
            std::cout << "========== F A I L U R E =========="  << std::endl << 
            "--> Request: " << request << " could not be handled." << std::endl << std::endl;
        }
    }

    return 0;
}