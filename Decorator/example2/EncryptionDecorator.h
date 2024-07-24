#ifndef ENCRYPTIONDECORATOR_H
#define ENCRYPTIONDECORATOR_H

#include "DataSourceDecorator.h"
#include "DataSource.h"

class EncryptionDecorator : public DataSourceDecorator
{
    private:

    public:
        EncryptionDecorator(DataSource* s):
        DataSourceDecorator(s)
        {

        }
        ~EncryptionDecorator()
        {

        }

        virtual void writeData(std::string data) override
        {
            std::string modifiedData;
            for(auto i : data)
            {
                modifiedData += i + 1;
            }
            DataSourceDecorator::_wrappee->writeData(modifiedData);
        }

        virtual std::string readData() override
        {
            std::string data = DataSourceDecorator::_wrappee->readData();
            std::string modifiedData;

            for(auto i : data)
            {
                modifiedData += i--;
            }
            return modifiedData;
        }
};
#endif