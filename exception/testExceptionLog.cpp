#include "exceptionLoger.hpp"
#include <vector>

void tryBadAlocation()
{
    while (true) 
    {
        new int[10000000000ul];
    }
}

int main()
{
    try
    {
        tryBadAlocation();
    }
    catch(...)
    {
        processException();
    }
}
