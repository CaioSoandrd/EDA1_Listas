#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void moveXsParaOFinal(char *entrada, char *saida) {
   
    if (*entrada == '\0') {
        *saida = '\0';  
        return;
    }
    
   
    if (*entrada != 'x') {
     
        *saida = *entrada;
        moveXsParaOFinal(entrada + 1, saida + 1);
    } else {
       
        moveXsParaOFinal(entrada + 1, saida);
       
        saida = saida + strlen(saida);
        *saida = 'x';
        *(saida + 1) = '\0';
    }
}

int main() {
    char str[101];
    char resultado[201];
    
    scanf("%100s", str);
    
    moveXsParaOFinal(str, resultado);
    printf("%s\n", resultado);
    
    return 0;
}