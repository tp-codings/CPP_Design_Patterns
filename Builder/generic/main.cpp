#include "ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"

int main()
{
    Director* director = new Director();
    ConcreteBuilder* concreteBuilder = new ConcreteBuilder();
    Product* productA;
    Product* productB;
    Product* productC;

    director->buildProductA(concreteBuilder);
    productA = concreteBuilder->getResult();

    concreteBuilder->reset();

    director->buildProductB(concreteBuilder);
    productB = concreteBuilder->getResult();

    concreteBuilder->reset();

    concreteBuilder->buildStepC();
    concreteBuilder->buildStepA();
    productC = concreteBuilder->getResult();

    productA->dump();
    productB->dump();
    productC->dump();
}