#include "TargetInterface.h"
#include "Adapter.h"

int main()
{
    TargetInterface* adapter = new Adapter();

    adapter->method(42);
}