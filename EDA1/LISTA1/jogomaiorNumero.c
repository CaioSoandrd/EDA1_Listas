#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);

    long long exponencial = 1;
    for (int i = 0; i < b; i++) {
        exponencial *= a;
    }

    long long fatorial = 1;
    for (int k = 1; k <= n; k++) {
        fatorial *= k;
    }

    if (fatorial > exponencial) {
        printf("Pedro\n");
    } else {
        printf("Lucas\n");
    }

    return 0;
}