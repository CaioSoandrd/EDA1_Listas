#include <stdlib.h>
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}


void ordena(int v[], int tam) {
    for (int j = 0; j < tam - 1; j++) {
        for (int i = 0; i < tam - 1 - j; i++) {
            if (v[i] > v[i + 1]) {
                troca(&v[i], &v[i + 1]);
            }
        }
    }
}

int main() {
    int *v = 0;
    int n;
    int tam = 0;

   
    while (scanf("%d", &n) != EOF) {
       
        v = realloc(v, (tam + 1) * sizeof(int));
        if (!v) {
            return 1;
        }
        v[tam] = n;
        tam++;
    }

    ordena(v, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

  
    free(v);
    return 0;
}
