#include <stdio.h>

int main() {
    int tam;
    scanf("%d", &tam);
    
    if (tam <= 0) {
        printf("0\n");
        return 0;
    }
    
    int v[tam];
    long long soma = 0;  
    
    for (int i = 0; i < tam; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }
    
    long long media = soma / tam;
    int encontrados = 0;
    
    for (int i = 0; i < tam; i++) {
        if (v[i] > media) {
            encontrados++;
        }
    }
    
    if (encontrados == 0) {
        printf("0");
    } else {
        int impressos = 0;
        for (int i = 0; i < tam; i++) {
            if (v[i] > media) {
                if (impressos > 0) {
                    printf(" ");  
                }
                printf("%d", v[i]);
                impressos++;
            }
        }
    }
    
    printf("\n"); 
    return 0;
}