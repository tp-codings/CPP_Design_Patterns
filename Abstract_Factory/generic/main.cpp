#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main()
{

    int choice = 0;

    AbstractFactory* abstractFactory;

    if(choice == 1)
    {
        abstractFactory = new ConcreteFactoryA();
    }
    else
    {
        abstractFactory = new ConcreteFactoryB();
    }

    AbstractProductA* abstractProductA = abstractFactory->createProductA();
    AbstractProductB* abstractProductB = abstractFactory->createProductB();

    abstractProductA->dump();
    abstractProductB->dump();

    return 0;

}