#ifndef STORAGEMANAGEMENT_H
#define STORAGEMANAGEMENT_H

#include <string>

class StorageManagement
{
    public:
        StorageManagement() = default;
        virtual ~StorageManagement() = default;

        virtual void save(std::string data) = 0;
};

#endif