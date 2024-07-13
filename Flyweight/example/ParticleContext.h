#ifndef PARTICLECONTEXT_H
#define PARTICLECONTEXT_H

#include "Particle.h"
#include "ParticleFactory.h"

class ParticleContext
{
    public:
        ParticleContext(CommonDataTypes::Texture *texture, 
        CommonDataTypes::Position position, float rotation, float scale)
        : position(position), rotation(rotation), scale(scale)
        {
            this->particleFactory = ParticleFactory::getParticleFactory();
            this->particle = this->particleFactory->getParticle(texture);
        }
        ~ParticleContext(){}

        void dump()
        {
            std::cout << "-------------- P A R T I C L E --------------" << std::endl
            << "--> TEXTURE HASH: " << this->particle->getTexture()->hash() << std::endl 
            << "--> POS X: " << std::to_string(this->position.x) << std::endl
            << "--> POS Y: " << std::to_string(this->position.y) << std::endl
            << "--> POS Z: " << std::to_string(this->position.z) << std::endl 
            << "--> ROTATION: " << std::to_string(this->rotation) << std::endl 
            << "--> SCALE: " << std::to_string(this->scale) << std::endl << std::endl;
        }

    private:
        CommonDataTypes::Position position;
        float rotation;
        float scale;
        Particle* particle;
        ParticleFactory* particleFactory;
};

#endif
