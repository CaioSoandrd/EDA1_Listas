#include <stdio.h>


int encaixa(int a, int b)
{
    
    if (b == 0) {
        return (a % 10 == 0) ? 1 : 0;
    }

    int divisor = 1;
    int tmp = b;
    while (tmp > 0) {
        divisor *= 10;
        tmp /= 10;
    }

    return (a % divisor == b) ? 1 : 0;
}
int segmento(int a, int b)
{
    if (a == b) {
        return 1;
    }

    int menor  = (a < b) ? a : b;
    int maior  = (a < b) ? b : a;

    if (menor == 0) {
        while (maior > 0) {
            if (maior % 10 == 0) return 1;
            maior /= 10;
        }
        return 0;
    }

    int divisor = 1;
    int tmp = menor;
    while (tmp > 0) {
        divisor *= 10;
        tmp /= 10;
    }


    tmp = maior;
    while (tmp >= menor) {
        if (encaixa(tmp, menor)) {
            return 1;
        }
        tmp /= 10;  
    }

    return 0;
}