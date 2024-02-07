#ifndef APPLICATION_H
#define APPLICATION_H

#include "CarBuilder.h"
#include "CarManualBuilder.h"
#include "Director.h"
#include "Car.h"
#include "CarManual.h"

#include <string>
#include <stdexcept>
#include <iostream>

class Application{
    public:
        Application(){
            this->carBuilder = new CarBuilder();
            this->carManualBuilder = new CarManualBuilder();
            this->director = new Director();
        };
        ~Application(){
            delete this->carBuilder;
            delete this->carManualBuilder;
            delete this->director;
            delete this->car;
            delete this->carManual;
        }

        void makeCar(std::string type){
            if(type == "sport"){
                this->director->makeSportsCar(this->carBuilder);
                this->director->makeSportsCar(this->carManualBuilder);
            } else if(type == "SUV"){
                this->director->makeSUV(this->carBuilder);
                this->director->makeSUV(this->carManualBuilder);
            } else {
                std::invalid_argument("this type is not supported yet");
            }

            this->car = this->carBuilder->getResult();
            this->carManual = this->carManualBuilder->getResult();

            std::cout << this->car->getCarDefinition() << "\n\n\n" << this->carManual->getManual() << std::endl;
        }



    private:
        CarBuilder* carBuilder;
        CarManualBuilder* carManualBuilder;
        Director* director;
        Car* car;
        CarManual* carManual;
};

#endif