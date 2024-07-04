#ifndef TEXTUREPROXY_H
#define TEXTUREPROXY_H

#include "TextureInterface.h"
#include "RealTexture.h"
#include <iostream>
#include <fstream>

class TextureProxy
: public TextureInterface
{
    public: 
        TextureProxy(std::string filePath)
        : TextureInterface(filePath), realTexture(nullptr), pathIsValid(false)
        {
            this->checkForValidFilePath();
        }

        virtual void render() override
        {
            std::cout << "-------------- R E N D E R I N G --------------" << std::endl;
            if (this->realTexture == nullptr)
            {
                std::cout << "[Proxy triggered] ";
                this->realTexture = new RealTexture(filePath);
            }
            this->realTexture->render();
        }

    private:
        RealTexture* realTexture;
        bool pathIsValid;

        void checkForValidFilePath()
        {
            std::ifstream validPath(this->filePath);
            if(validPath)
            {
                std::cout << "The file: " << this->filePath << " exists!" << std::endl;
                this->pathIsValid = true;
            }
            else
            {
                std::cout << "The file: " << this->filePath << " does not exist!" << std::endl;
            }
        }
};

#endif