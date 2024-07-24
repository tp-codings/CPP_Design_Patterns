#ifndef EUWAREHOUSE_H
#define EUWAREHOUSE_H

#include "Wahrehouse.h"

class EUWarehouse : public Warehouse{
    private:
        std::vector<std::string> _supportedCountries;
        long long _storageCost;

    public:
        EUWarehouse(){
            this->_supportedCountries = {"Germany", "France", "Belgium", "Switzerland", "Poland", "Spain"};
            this->_storageCost = 200;
        };

        std::vector<std::string> getSupportedCountries(){
            return this->_supportedCountries;
        }

        long long getStorageCost(){
            return this->_storageCost;
        }
};

#endif