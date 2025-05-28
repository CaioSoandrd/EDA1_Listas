#include <stdio.h>

int main() {
    int tam;
    scanf("%d", &tam);

  
    for (int i = 1; i <= tam; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) 
                printf("%02d", i); 
            else 
                printf(" %02d", i);
        }
        printf("\n");
    }

    printf("\n"); 

   
    for (int i = 1; i <= tam; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) 
                printf("%02d", j); 
            else 
                printf(" %02d", j); 
        }
        printf("\n");
    }

    return 0;
}