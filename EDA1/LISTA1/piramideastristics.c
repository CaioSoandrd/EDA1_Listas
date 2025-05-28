#include <stdio.h>

int main() {
    short int tam;
    scanf("%hd", &tam);

    for (short int i = 0; i < tam; i++) {
       
        for (short int k = 0; k < tam - i - 1; k++) { 
            printf(" ");
        }
      
        for (short int j = 0; j < 2 * i + 1; j++) {  
            printf("*");
        }
        printf("\n");
    }
    return 0;
}