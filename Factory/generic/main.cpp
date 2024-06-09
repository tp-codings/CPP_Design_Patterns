#include <iostream>
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"
#include <vector>

int main() {
    ConcreteFactoryA factoryA;
    ConcreteFactoryB factoryB; 

    std::vector<AbstractProduct*> products; 

    products.push_back(factoryA.createProduct());
    products.push_back(factoryB.createProduct());

    for(auto &i : products) {
        i->dump(); 
    }
    return 0;
}