#ifndef PARTICLE_H
#define PARTICLE_H

#include "CommonDataTypes.h"

class Particle
{
    public:
        Particle(CommonDataTypes::Texture* texture)
        : texture(texture){}
        ~Particle(){}

        CommonDataTypes::Texture* getTexture()
        {
            return this->texture;
        }

    private:
        CommonDataTypes::Texture* texture;
};

#endif
