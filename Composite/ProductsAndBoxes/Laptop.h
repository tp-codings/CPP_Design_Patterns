#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>
#include "Component.h"

class Laptop : public Component{
    private:
        float _prize;
        std::string _manufacteur;

    public:
        Laptop() = default;
        Laptop(std::string manufacteur, float prize) : _prize(prize), _manufacteur(manufacteur){

        }

        float calculatePrize(){
            return this->_prize;
        }
};

#endif