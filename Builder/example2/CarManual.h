#ifndef CARMANUAL_H
#define CARMANUAL_H

#include <string>

class CarManual{
    public:
        CarManual(){
            this->carManual = "Car Manual:\n";
        }

        void addInstructions(std::string instructions){
            this->carManual += "\n" + instructions;
        }

        std::string getManual(){
            return this->carManual;
        }

    private:
        std::string carManual;
};

#endif