#ifndef STORAGEADAPTER_H
#define STORAGEADAPTER_H

#include "StorageManagement.h"
#include "Settings.h"
#include "CloudServer.h"
#include "LocalFileSystem.h"

class StorageAdapter
: public StorageManagement
{
    public:
        StorageAdapter()
        {
            this->settings = Settings::getInstance();
            this->cloudServer = new CloudServer();
            this->localFileSystem = new LocalFileSystem();
        }
        ~StorageAdapter() = default;

        virtual void save(std::string data) override
        {
            if(this->settings->getSaveToCloud())
            {
                this->cloudServer->saveToServer(data, this->settings->getCloudServerCreds());
            }
            else
            {
                this->localFileSystem->save(data, this->settings->getSavePath());
            }
        }

    private:
        Settings* settings;
        CloudServer* cloudServer;
        LocalFileSystem* localFileSystem;
};

#endif