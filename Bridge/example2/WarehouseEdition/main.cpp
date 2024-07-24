#include "EUWarehouse.h"
#include "USWarehouse.h"
#include "Package.h"

#include <iostream>


int main(){

    Package* StarDestroyer = new Package(3495309.20);
    Package* DeathStar = new Package(937483728.0);

    EUWarehouse* euWarehouse = new EUWarehouse();
    USWarehouse* usWarehouse = new USWarehouse();


    std::cout << "Star Destroyer stored in US costs: " << StarDestroyer->calculatePrice(usWarehouse) << std::endl;
    std::cout << "Star Destroyer stored in EU costs: " << StarDestroyer->calculatePrice(euWarehouse) << std::endl;
    std::cout << "Death Star stored in US costs: " << DeathStar->calculatePrice(usWarehouse) << std::endl;
    std::cout << "Death Star stored in EU costs: " << DeathStar->calculatePrice(euWarehouse) << std::endl;

    std::cout << "Star Destroyer can be shipped to Germany from US: " << StarDestroyer->isShippingAvailable("Germany", usWarehouse) << std::endl;
    std::cout << "Star Destroyer can be shipped to Germany from EU: " << StarDestroyer->isShippingAvailable("Germany", euWarehouse) << std::endl;


    return 0;
}