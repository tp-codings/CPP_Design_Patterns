#ifndef DATASOURCE_H
#define DATASOURCE_H
#include <string>

class DataSource
{
    public:
        DataSource() = default;
        virtual ~DataSource() = default;
        virtual void writeData(std::string data) = 0;
        virtual std::string readData() = 0;
};


#endif