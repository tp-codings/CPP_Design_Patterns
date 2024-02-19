#ifndef RADIO_H
#define RADIO_H

#include "Device.h"
#include <string>

class Radio : public Device{
    private:
        int _volume;
        bool _enabled;
        std::string _manufacteur; 

    public:
        Radio() = default;
        ~Radio() = default;
        Radio(std::string manufacteur) : _manufacteur(manufacteur){
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
            return "Radio\nManufacteur: " + this->_manufacteur + "\nVolume: " + std::to_string(this->_volume) + "\nEnabled: " + std::to_string(this->_enabled);
        }
};

#endif