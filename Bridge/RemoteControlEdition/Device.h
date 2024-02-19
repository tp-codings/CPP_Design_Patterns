#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device{
    public:
        Device() = default;
        virtual ~Device() = default;

        virtual bool isEnable() = 0;
        virtual void enable() = 0;
        virtual void disable() = 0;
        virtual int getVolume() = 0;
        virtual void setVolume(int percent) = 0;
        virtual std::string getStatus() = 0;

};

#endif