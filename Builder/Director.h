#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director{
    public:
        Director(){};

        void makeSportsCar(Builder* builder){
            builder->setEngine("SportsEngine");
            builder->setSeats(2);
            builder->setGPS();
            builder->setTripComputer();
            builder->setSpoiler();
        }

        void makeSUV(Builder* builder){
            builder->setEngine("SUVEngine");
            builder->setSeats(5);
            builder->setGPS();
            builder->setTripComputer();
        }
};

#endif