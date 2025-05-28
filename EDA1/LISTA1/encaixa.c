#include <stdio.h>

int encaixa(int a, int b)
{
    int auxb = b;
    int auxa = a;
    while (auxb > 0)
    {
        if (a == 0)
        {
            return 0;
        }
        auxa /= 10;
        auxb /= 10;
    }

    while (b > 0)
    {
        if ((a % 10) != (b % 10))
        {
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    return 1;
}
