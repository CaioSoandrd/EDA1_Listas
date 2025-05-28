#include <stdio.h>

void desenharTracosRecursivo(int contador) {
    if (contador == 0) return;
    printf("-");
    desenharTracosRecursivo(contador - 1);
}

void desenharLinha(int numTracos) {
    printf(".");
    desenharTracosRecursivo(numTracos);
    printf("\n");
}

void desenharReguaInglesa(int nivel) {
    if (nivel == 0) return;
    desenharReguaInglesa(nivel - 1);
    desenharLinha(nivel);
    desenharReguaInglesa(nivel - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    desenharReguaInglesa(n);
    return 0;
}