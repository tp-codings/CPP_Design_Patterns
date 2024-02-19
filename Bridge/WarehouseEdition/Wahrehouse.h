#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <string>
#include <vector>

class Warehouse{
    public:
        Warehouse() = default;

        virtual std::vector<std::string> getSupportedCountries() = 0;

        virtual long long getStorageCost() = 0;

};

#endif