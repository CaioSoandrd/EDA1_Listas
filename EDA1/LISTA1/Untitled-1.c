#include <stdio.h>

int main() {
    int num = 42;          // Uma variável inteira
    int *ptr = &num;       // Ponteiro que armazena o endereço de 'num'

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", (void*)&num);
    printf("Valor armazenado no ponteiro ptr: %p\n", (void*)ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    // Modificando o valor de 'num' através do ponteiro
    *ptr = 100;
    printf("\nApós modificar via ponteiro:\n");
    printf("Valor de num: %d\n", num);
    printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}