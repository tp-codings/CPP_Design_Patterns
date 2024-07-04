#ifndef REALTEXTURE_H
#define REALTEXTURE_H

#include "TextureInterface.h"
#include <iostream>

class RealTexture
: public TextureInterface
{
    public:
        RealTexture(std::string filePath)
        : TextureInterface(filePath)
        {
            this->loadFromDisk();
        }
        ~RealTexture(){}

        virtual void render() override
        {
            std::cout << "Rendering texture: " << this->filePath << std::endl;
        }
    
    private:
        void loadFromDisk()
        {
            std::cout << "Loading texture from disk: " << this->filePath << std::endl;
        }
};

#endif