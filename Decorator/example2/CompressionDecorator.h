#ifndef COMPRESSIONDECORATOR_H
#define COMPRESSIONDECORATOR_H

#include "DataSourceDecorator.h"
#include "DataSource.h"

class CompressionDecorator : public DataSourceDecorator
{

    private:

    public:
        CompressionDecorator(DataSource* s):
        DataSourceDecorator(s)
        {

        }
        ~CompressionDecorator()
        {
            
        }

        virtual void writeData(std::string data) override
        {
            DataSourceDecorator::_wrappee->writeData("compressed " + data);
        }

        virtual std::string readData() override
        {
            return "decompressed " + DataSourceDecorator::_wrappee->readData();
        }
};

#endif