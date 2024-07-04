#include "TextureInterface.h"
#include "TextureProxy.h"

int main()
{
    std::cout << "-------------- S E T U P --------------" << std::endl;
    std::string filePath = "example.texture";
    TextureInterface* texture = new TextureProxy(filePath);

    std::cout << "-------------- P L A Y I N G --------------\n>> . . . <<" << std::endl;

    std::cout << ">> Player is in range of example texture <<" << std::endl;
    texture->render();
}