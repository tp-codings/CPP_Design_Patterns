#include "Component.h"
#include "Composite.h"
#include "Leaf.h"
#include <iostream>

int main()
{
    Composite* rootNode = new Composite("Root");
    Leaf* rootLeaf = new Leaf("42");

    Composite* firstLevelNode = new Composite("First");
    Leaf* firstLevelLeaf1 = new Leaf("4711");
    Leaf* firstLevelLeaf2 = new Leaf("815");

    Composite* secondLevelNode = new Composite("Second");
    Leaf* secondLevelLeaf = new Leaf("1234");

    secondLevelNode->add(secondLevelLeaf);

    firstLevelNode->add(firstLevelLeaf1);
    firstLevelNode->add(firstLevelLeaf2);
    firstLevelNode->add(secondLevelNode);

    rootNode->add(rootLeaf);
    rootNode->add(firstLevelNode);

    std::cout << rootNode->execute() << std::endl;
}