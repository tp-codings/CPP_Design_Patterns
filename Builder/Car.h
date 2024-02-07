#ifndef CAR_H
#define CAR_H

#include <string>

class Car{
    public:
        Car(){
            this->carDefinition = "Car Definition: \n";
        }

        void addComponent(std::string component){
            this->carDefinition += "\n" + component;
        }

        std::string getCarDefinition(){
            return this->carDefinition;
        }

    private:
        std::string carDefinition;

};

#endif