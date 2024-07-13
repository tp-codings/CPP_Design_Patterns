#ifndef COMMONDATATYPES_H
#define COMMONDATATYPES_H

#include <cstdlib>  
#include <ctime>

namespace CommonDataTypes
{
    struct Color
    {
        public:
            int r;
            int g;
            int b;
            int a;

            size_t hash() const
            {
                size_t hash = 0;
                hash ^= r + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                hash ^= g + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                hash ^= b + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                hash ^= a + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                return hash;
            }
    };

    struct Texture
    {
        public:
            Color sprite[64][64];

            size_t hash() const
            {
                size_t hash = 0;
                for (int i = 0; i < 64; ++i)
                {
                    for (int j = 0; j < 64; ++j)
                    {
                        hash ^= sprite[i][j].hash() + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                    }
                }
                return hash;
            }
    };

    struct Position
    {
        public:
            float x;
            float y;
            float z;
    };

    void initializeTexture(Texture& texture)
    {

        for (int i = 0; i < 64; ++i)
        {
            for (int j = 0; j < 64; ++j)
            {
                texture.sprite[i][j].r = std::rand() % 256; 
                texture.sprite[i][j].g = std::rand() % 256;
                texture.sprite[i][j].b = std::rand() % 256;
                texture.sprite[i][j].a = std::rand() % 256;
            }
        }
    }
}
#endif
