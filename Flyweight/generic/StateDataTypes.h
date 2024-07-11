#ifndef STATEDATATYPES_H
#define STATEDATATYPES_H

#include <string>

namespace StateDatatypes
{
    struct UniqueState
    {
        public:
            int valUnique1;
            int valUnique2;
    };

    struct SharedState
    {
        public:
            std::string type;
            int valShared;
    };
}

#endif