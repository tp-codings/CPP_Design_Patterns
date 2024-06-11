#include "Application.h"

int main(){
    Application* application = new Application();
    application->makeCar("SUV");

    delete application;
}