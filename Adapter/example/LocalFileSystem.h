#ifndef LOCALFILESYSTEM_H
#define LOCALFILESYSTEM_H

#include <string>
#include <iostream>

// third party
class LocalFileSystem
{
    public:
        LocalFileSystem(){}
        ~LocalFileSystem(){}

        void save(std::string fileData, std::string location)
        {
            // fancy file saving operation
            
            std::cout << "---------------- S A V E D   I N   F I L E S Y S T E M ----------------" << std::endl <<
            "FILEDATA: " << fileData << std::endl <<
            "LOCATION: " << location << std::endl << std::endl;
        }
};

#endif