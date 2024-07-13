#include "CommonDataTypes.h"
#include "ParticleContext.h"

#include <vector>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::vector<CommonDataTypes::Texture> textures;

    for(int i = 0; i < 5; i++)
    {
        CommonDataTypes::Texture texture;
        CommonDataTypes::initializeTexture(texture);
        textures.push_back(texture);
    }

    std::vector<ParticleContext*> particles;

    for(int i = 0; i < 10; i++)
    {
        particles.push_back(new ParticleContext(&textures[i%5], {static_cast<float>(i), 
        static_cast<float>(i), static_cast<float>(i)}, static_cast<float>(i), static_cast<float>(i)));
    }

    size_t totalSizeAllParticles = 0;
    for(auto* i : particles)
    {
        i->dump();
    }

    return 0;
}