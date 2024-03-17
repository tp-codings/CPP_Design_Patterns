#ifndef FILEDATASOURCE_H
#define FILEDATASOURCE_H

#include "DataSource.h"
#include <iostream>
#include <fstream>

class FileDataSource : public DataSource
{

    private:
        std::string _filename;
    
    public:

        FileDataSource(std::string filename) :
        _filename(filename)
        {

        }

        virtual void writeData(std::string data) override
        {
            std::ofstream myfile;
            myfile.open(this->_filename);
            if(myfile.is_open())
            {
                myfile << data;
                myfile.close();
                std::cout << "Data written: " << data << std::endl;
            } else
            {
                std::cerr << "Unable to open file: " << this->_filename << std::endl;
            }
        }

        virtual std::string readData() override
        {
            std::ifstream myfile;
            myfile.open(this->_filename);
            if (myfile.is_open()) 
            {
                std::string data;
                std::getline(myfile, data);
                myfile.close();
                std::cout << "Data read from file: " << data << std::endl;
                return data;
            } else 
            {
                std::cerr << "Unable to open file: " << this->_filename << std::endl;
            }
            return "ERROR:: Could not open file";
        }
};

#endif