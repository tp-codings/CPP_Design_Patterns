#include "Application.h"
#include "Factories/WinFactory.h"
#include "Factories/MacFactory.h"
#include "Factories/LinuxFactory.h"

#include <stdexcept>
#include <string>

int main(){
    std::string config = "Linux";
    GUIFactory* factory;
    Application* application;

    if(config == "Win"){
        factory = new WinFactory();
    } else if(config == "Mac"){
        factory = new MacFactory();
    } else if(config == "Linux"){
        factory = new LinuxFactory();
    }
    else {
        throw std::invalid_argument( "received invalid operating system" );
    }

    application = new Application(factory);
    application->draw();
}

