#ifndef TV_H
#define TV_H

#include "Device.h"
#include <string>

class TV : public Device{
    private:
        int _volume;
        bool _enabled;
        std::string _manufacteur; 

    public:
        TV() = default;
        ~TV() = default;
        TV(std::string manufacteur) : _manufacteur(manufacteur){
            this->_volume = 0;
            this->_enabled = false;
        }

        bool isEnable(){
            return this->_enabled;
        }

        void enable(){
            this->_enabled = true;
        }

        void disable(){
            this->_enabled = false;
        }

        int getVolume(){
            return this->_volume;
        }

        void setVolume(int percentage){
            this->_volume = percentage;
        }

        std::string getStatus(){
            return "TV\nManufacteur: " + this->_manufacteur + "\nVolume: " + std::to_string(this->_volume) + "\nEnabled: " + std::to_string(this->_enabled);
        }
};

#endif