#include <stdio.h>

unsigned long long SomaDigitos(unsigned long long n) {
    if (n == 0)
        return 0;
    return (n % 10) + SomaDigitos(n / 10);
}

int main() {
    unsigned long long n;
    if (scanf("%llu", &n) != 1)
        return 0;
    printf("%llu\n", SomaDigitos(n));
    return 0;
}
