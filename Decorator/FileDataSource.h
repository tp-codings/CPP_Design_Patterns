#ifndef FILEDATASOURCE_H
#define FILEDATASOURCE_H

#include "DataSource.h"
#include <iostream>
#include <fstream>

class FileDataSource : DataSource
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
            std::string data;
            std::ifstream myfile;
            myfile.open(this->_filename);
            if (myfile.is_open()) 
            {
                std::getline(myfile, data);
                myfile.close();
                std::cout << "Data read from file: " << data << std::endl;
            } else 
            {
                std::cerr << "Unable to open file: " << this->_filename << std::endl;
            }
        }
};

#endif