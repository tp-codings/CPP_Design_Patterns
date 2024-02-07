#ifndef CARMANUALBUILDER_H
#define CARMANUALBUILDER_H

#include <string>

#include "CarManual.h"
#include "Builder.h"

class CarManualBuilder : public Builder{
    public:
        CarManualBuilder(){
            this->carManual = new CarManual();
        };
        ~CarManualBuilder(){
            delete this->carManual;
        }

        void setSeats(int seats){
            this->carManual->addInstructions("Add " + std::to_string(seats) + " seats to car!");
        }

        void setEngine(std::string engineType){
            this->carManual->addInstructions("Add " + engineType + " as engine type to car!");
        }

        void setGPS(){
            this->carManual->addInstructions("Add GPS to car!");
        }

        void setTripComputer(){
            this->carManual->addInstructions("Add Trip Computer to car!");
        }

        void setSpoiler(){
            this->carManual->addInstructions("Add Spoiler to car!");
        }

        CarManual* getResult(){
            return this->carManual;
        }

    private:
        CarManual* carManual;

};

#endif