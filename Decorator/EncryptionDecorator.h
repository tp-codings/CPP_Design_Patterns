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
            for(auto i : data)
            {
                i++;
            }
            DataSourceDecorator::_wrappee->writeData(data);
        }

        virtual std::string readData() override
        {
            std::string data = DataSourceDecorator::_wrappee->readData();

            for(auto i : data)
            {
                i--;
            }
            return data;
        }
};
#endif