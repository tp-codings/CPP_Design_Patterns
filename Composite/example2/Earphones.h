#ifndef EARPHONES_H
#define EARPHONES_H

#include <string>
#include "Component.h"

class Earphones : public Component{
    private:
        float _prize;
        std::string _manufacteur;

    public:
        Earphones() = default;
        Earphones(std::string manufacteur, float prize) : _prize(prize), _manufacteur(manufacteur){

        }

        float calculatePrize(){
            return this->_prize;
        }

        //Meh
        std::vector<std::string> getPackageInfo(){
            std::string packageInfo = "Earphones\nManufacteur: " + this->_manufacteur + "\nPrize: " + std::to_string(this->_prize);
            return {packageInfo};
        }
};

#endif