#ifndef HANDY_H
#define HANDY_H

#include <string>
#include "Component.h"

class Handy : public Component{
    private:
        float _prize;
        std::string _manufacteur;

    public:
        Handy() = default;
        Handy(std::string manufacteur, float prize) : _prize(prize), _manufacteur(manufacteur){

        }

        float calculatePrize(){
            return this->_prize;
        }

        //Meh
        std::vector<std::string> getPackageInfo(){
            std::string packageInfo = "Handy\nManufacteur: " + this->_manufacteur + "\nPrize: " + std::to_string(this->_prize);
            return {packageInfo};
        }
};

#endif