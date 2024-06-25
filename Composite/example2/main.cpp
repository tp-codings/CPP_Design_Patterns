#include "Component.h"
#include "Laptop.h"
#include "Handy.h"
#include "Earphones.h"
#include "Box.h"

#include <iostream>


//wie geil ist das denn 
int main(){

    Box* package = new Box("Package");
    Box* handyBox = new Box("Handy Box");
    Box* samsungBox = new Box("Samsung Box");
    Component* handy_1 = new Handy("Samsung", 850);
    Component* earphones_1 = new Earphones("Basic", 15);

    Component* handy_2 = new Handy("Apple", 1100);

    Component* laptop_1 = new Laptop("Acer", 1400);

    samsungBox->add(handy_1);
    samsungBox->add(earphones_1);

    handyBox->add(samsungBox);
    handyBox->add(handy_2);

    package->add(handyBox);
    package->add(laptop_1);


    for(auto i: package->getPackageInfo()){
        std::cout << i << std::endl;
    }

    std::cout << "Sum prize: " << std::to_string(package->calculatePrize()) << "Euro" << std::endl;

    return 0;
}