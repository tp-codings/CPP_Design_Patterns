#ifndef BUILDER_H
#define BUILDER_H

#include <string>

class Builder{
    public:
        Builder(){};
        virtual ~Builder(){};

        virtual void setSeats(int seats77) = 0;
        virtual void setEngine(std::string engineType) = 0;
        virtual void setGPS() = 0;
        virtual void setTripComputer() = 0;
        virtual void setSpoiler() = 0;
};

#endif