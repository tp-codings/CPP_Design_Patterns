#include "Component.h"
#include "Laptop.h"
#include "Handy.h"
#include "Box.h"

#include <iostream>


//wie geil ist das denn 
int main(){

    Component* handy_1 = new Handy("Samsung", 850);
    Component* handy_2 = new Handy("Apple", 1100);

    Component* laptop_1 = new Laptop("Acer", 1400);

    Box* handyBox = new Box();
    Box* package = new Box();

    handyBox->add(handy_1);
    handyBox->add(handy_2);

    package->add(handyBox);
    package->add(laptop_1);

    std::cout << std::to_string(package->calculatePrize()) << std::endl;

    return 0;
}