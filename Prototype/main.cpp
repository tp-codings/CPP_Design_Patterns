#include "Application.h"

int main(){

    Application* application = new Application();

    application->printAllShapes();

    delete application;
    return 0;
}