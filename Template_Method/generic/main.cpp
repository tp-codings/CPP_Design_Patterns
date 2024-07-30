#include "ConcreteAlgorithmA.h"
#include "ConcreteAlgorithmB.h"

int main()
{
    AbstractAlgorithm* concreteAlgorithmA = new ConcreteAlgorithmA();
    AbstractAlgorithm* concreteAlgorithmB = new ConcreteAlgorithmB();

    concreteAlgorithmA->templateMethod();
    concreteAlgorithmB->templateMethod();

    return 0;
}