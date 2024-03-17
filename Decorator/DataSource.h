#ifndef DATASOURCE_H
#define DATASOURCE_H
#include <string>

class DataSource
{
    public:
        DataSource() = default;
        virtual ~DataSource() = 0;
        virtual void writeData(std::string data) = 0;
        virtual std::string readData();
};


#endif