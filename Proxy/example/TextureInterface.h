#ifndef TEXTUREINTERFACE_H
#define TEXTUREINTERFACE_H

#include <string>
class TextureInterface
{
    public: 
        TextureInterface(std::string filePath)
        : filePath(filePath){}
        virtual ~TextureInterface() = default;

        virtual void render() = 0;
    
    protected:
        std::string filePath;
};

#endif