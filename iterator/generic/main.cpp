#include "Iterator.h"
#include "ConcreteCollection.h"

int main()
{
    ConcreteCollection* linkedList = new ConcreteCollection();

    int last = 0;
    int current = 1;
    int limit = 20;
    linkedList->append(0);
    for(int i = 1; i < limit; i++)
    {
        int fibonacci = last + current;
        last = current;
        current = fibonacci;
        linkedList->append(fibonacci);
    }

    Iterator* linkedListIteratorEven = linkedList->createIteratorA();

    std::cout << "All even Fibonacci in first " << limit << ":" << std::endl;
    while(linkedListIteratorEven->hasNext())
    {
        int nextEvenFibonacci = linkedListIteratorEven->getNext();
        std::cout << "Next even Fibonacci: " << nextEvenFibonacci << std::endl;
    }
    delete linkedListIteratorEven;

    Iterator* linkedListIteratorOdd = linkedList->createIteratorB();
    std::cout << "-------------------------" 
    << std::endl << "All odd Fibonacci in first " << limit << ":" << std::endl;
    while(linkedListIteratorOdd->hasNext())
    {
        int nextOddFibonacci = linkedListIteratorOdd->getNext();
        std::cout << "Next odd Fibonacci: " << nextOddFibonacci << std::endl;
    }
    delete linkedListIteratorOdd;
}