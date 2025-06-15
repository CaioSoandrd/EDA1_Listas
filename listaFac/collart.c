#include <stdio.h>


int ehnatural(int x) {
    return (x >= 1);
}


int main() {
    int x;
    int count = 0;

    if (scanf("%d", &x) != 1) {
        printf("Entrada inválida\n");
        return 0;
    }

   
    if (ehnatural(x)) {
   
        while (x != 1) {
            if (x % 2 != 0) {
                x = 3 * x + 1;
            } else {
                x = x / 2;
            }
            count++;
        }
        printf("Quantidade de passos necessários: %d\n", count);
    } else {
        printf("Entrada inválida\n");
    }

    return 0;
}

