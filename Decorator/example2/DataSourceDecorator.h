#ifndef DATASOURCEDECORATOR_H
#define DATASOURCEDECORATOR_H

#include "DataSource.h"

class DataSourceDecorator : public DataSource
{
    protected:
        DataSource* _wrappee;

    public:
        DataSourceDecorator(DataSource* s):
        _wrappee(s)
        {

        }
        ~DataSourceDecorator()
        {
            
        }

        virtual void writeData(std::string data) override
        {
            this->_wrappee->writeData(data);
        }

        virtual std::string readData() override
        {
            return this->_wrappee->readData();
        }
};
#endif