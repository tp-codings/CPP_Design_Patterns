#ifndef REMOTE_H
#define REMOTE_H

#include "Device.h"

class Remote{
    private:
        Device* _device;
        int _lastVolume;
    
    public:
        Remote() = default;
        Remote(Device* device) : _device(device), _lastVolume(device->getVolume()){
            
        }

        void togglePower(){
            if(this->_device->isEnable()){
                this->_device->disable();
            } else{
                this->_device->enable();
            }
        }

        void volumeDown(){
            this->_lastVolume = this->_device->getVolume() - 1;
            this->_device->setVolume(this->_lastVolume);

        }

        void volumeUp(){
            this->_lastVolume = this->_device->getVolume() + 1;
            this->_device->setVolume(this->_lastVolume);
        }

        void mute(){
            if(this->_device->getVolume() == 0){
                this->_device->setVolume(this->_lastVolume);
            } else{
                this->_device->setVolume(0);
            }
        }

};

#endif