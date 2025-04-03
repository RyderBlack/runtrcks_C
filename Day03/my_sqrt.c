#include "my_sqrt.h"

int my_sqrt(int n)
{
    int i;

    if (n < 0)
        return 0;
    if (n < 2)
        return n;
    i = 0;
    while (i * i <= n)
    {
        if (i * i == n)
            return i;
        i++;
    }
    return 0;
}