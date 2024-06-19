#ifndef CLOUDSERVER_H
#define CLOUDSERVER_H

#include <string>
#include <iostream>

// third party
class CloudServer
{
    public:
        CloudServer(){}
        ~CloudServer(){}

        void saveToServer(std::string data, std::tuple<std::string, int> cloudServerCreds)
        {
            // fancy cloud server saving operation with token

            std::cout << "---------------- S A V E D   I N   C L O U D ----------------" << std::endl <<
            "DATA: " << data << std::endl <<
            "ADRESS: " << std::get<0>(cloudServerCreds) << std::endl << std::endl;
        }
};

#endif