#ifndef PACKAGE_H
#define PACKAGE_H

#include "Wahrehouse.h"
#include <algorithm>


class Package{
    private:
        int _volume;

    public:
        Package() = default;
        Package(double volume) : _volume(volume){

        }

        long long calculatePrice(Warehouse* warehouse){
            return this->_volume * warehouse->getStorageCost();
        }

        bool isShippingAvailable(std::string country, Warehouse* warehouse){
            std::vector<std::string> supportedCountries = warehouse->getSupportedCountries();
            return std::find(supportedCountries.begin(), supportedCountries.end(), country) != supportedCountries.end();
        }
};

#endif