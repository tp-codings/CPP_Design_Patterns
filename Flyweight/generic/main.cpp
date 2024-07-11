#include "Context.h"
#include <vector>

int main()
{

    std::vector<Context*> contexts;

    contexts.push_back(new Context({1, 2}, {"Type1", 4711}));
    contexts.push_back(new Context({4, 2}, {"Type1", 4711}));
    contexts.push_back(new Context({1, 3}, {"Type1", 4711}));
    contexts.push_back(new Context({21, 2}, {"Type1", 4711}));
    contexts.push_back(new Context({7, 8}, {"Type1", 4711}));
    contexts.push_back(new Context({1, 2}, {"Type1", 42}));
    contexts.push_back(new Context({1, 2}, {"Type2", 4711}));

    for (auto* i : contexts)
    {
        i->dump();
    }

    return 0;
}