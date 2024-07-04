#include "Subject.h"
#include "Proxy.h"

int main()
{
    Subject* subject = new Subject();
    Proxy* proxy = new Proxy(subject);

    proxy->setAccess(true);
    proxy->operation();

    proxy->setAccess(false);
    proxy->operation();
}