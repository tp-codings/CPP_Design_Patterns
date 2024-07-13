#ifndef PARTICLEFACTORY_H
#define PARTICLEFACTORY_H

#include "Particle.h"
#include <map>
#include <iostream>
#include <string>

class ParticleFactory
{
    public:
        ~ParticleFactory(){}

        static ParticleFactory* getParticleFactory()
        {
            if(particleFactory == nullptr)
            {
                particleFactory = new ParticleFactory();
            }
            return particleFactory;
        }

        Particle* getParticle(CommonDataTypes::Texture* texture)
        {
            size_t key = texture->hash();
            if(this->particles.find(key) == this->particles.end())
            {
                this->particles[key] = new Particle(texture);
                std::cout << "-------------- P A R T I C L E   F A C T O R Y --------------" << std::endl
                << "Added new ParticleTexture: " << std::endl
                << "--> HASH: " << std::to_string(key) << std::endl << std::endl;
            }
            return this->particles[key];
        }

    private:
        static ParticleFactory* particleFactory;

        std::map<size_t, Particle*> particles;

        ParticleFactory(){}
};

ParticleFactory* ParticleFactory::particleFactory = nullptr;

#endif
