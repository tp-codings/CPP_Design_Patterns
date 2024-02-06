#include "Application.h"
#include "Factories/WinFactory.h"
#include "Factories/MacFactory.h"

#include <stdexcept>
#include <string>

int main(){
    std::string config = "Win";
    GUIFactory* factory;
    Application* application;

    if(config == "Win"){
        factory = new WinFactory();
    } else if(config == "Mac"){
        factory = new MacFactory();
    } else {
        throw std::invalid_argument( "received invalid operating system" );
    }

    application = new Application(factory);
    application->draw();
}