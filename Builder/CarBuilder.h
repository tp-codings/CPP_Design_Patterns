#ifndef CARBUILDER_H
#define CARBUILDER_H

#include <string>
#include "Builder.h"

#include "Car.h"

class CarBuilder : public Builder{
    public:
        CarBuilder(){
            this->car = new Car();
        };
        ~CarBuilder(){
            delete this->car;
        }

        void setSeats(int seats){
            this->car->addComponent("Seats: " + std::to_string(seats));
        }

        void setEngine(std::string engine){
            this->car->addComponent("Engine: " + engine);
        }

        void setGPS(){
            this->car->addComponent("GPS included");
        }

        void setTripComputer(){
            this->car->addComponent("Trip Computer included");
        }

        void setSpoiler(){
            this->car->addComponent("Spoler included");
        }

        Car* getResult(){
            return this->car;
        }
    
    private:
        Car* car;
};




#endif