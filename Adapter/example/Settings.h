#ifndef SETTINGS_H
#define SETTINGS_H

#include <iostream>
#include <string>
#include <tuple>

class Settings
{
    public:
        ~Settings(){}

        static Settings* getInstance()
        {
            if(!settingsInstance)
            {
                settingsInstance = new Settings();
            }
            return settingsInstance;
        }

        void dump()
        {
            std::cout << "---------------- S E T T I N G S ----------------\nSave to cloud: " 
            << this->savePath << std::endl << "Save Path: " << this->savePath << std::endl;
        }

        void setSavePath(std::string savePath)
        {
            this->savePath = savePath;
        }
        std::string getSavePath()
        {
            return this->savePath;
        }

        void setSaveToCloud(bool saveToCloud)
        {
            this->saveToCloud = saveToCloud;
        }
        bool getSaveToCloud()
        {
            return this->saveToCloud;
        }

        void setCloudServerCreds(std::tuple<std::string, int> cloudServerCreds)
        {
            this->cloudServerCreds = cloudServerCreds;
        }
        std::tuple<std::string, int> getCloudServerCreds()
        {
            return this->cloudServerCreds;
        }

    private:
        static Settings* settingsInstance;

        std::string savePath; 
        bool saveToCloud;
        std::tuple<std::string, int> cloudServerCreds;

        Settings()
        {
            std::cout << "Settings initialized" << std::endl;
            this->savePath = "data/score";
            this->saveToCloud = false;
            this->cloudServerCreds = {"https://cloud.server", 47110815};
        }
};

Settings* Settings::settingsInstance = nullptr;

#endif