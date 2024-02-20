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

        //immernoch Meh
        std::vector<std::string> getPackageInfo(){
            std::string packageInfo = "Laptop\nManufacteur: " + this->_manufacteur + "\nPrize: " + std::to_string(this->_prize);
            return {packageInfo};
        }
};

#endif