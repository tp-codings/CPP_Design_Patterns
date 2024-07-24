#ifndef USWAREHOUSE_H
#define USWAREHOUSE_H

#include "Wahrehouse.h"

class USWarehouse : public Warehouse{
    private:
        std::vector<std::string> _supportedCountries;
        long long _storageCost;

    public:
        USWarehouse(){
            this->_supportedCountries = {"Texas", "California", "Florida", "Alaska", "Virginia", "Hawaii"};
            this->_storageCost = 150;
        };

        std::vector<std::string> getSupportedCountries(){
            return this->_supportedCountries;
        }

        long long getStorageCost(){
            return this->_storageCost;
        }
};

#endif