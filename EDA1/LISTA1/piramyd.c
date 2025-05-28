#include <stdio.h>

int main() {
    int dimensao;
    scanf("%d", &dimensao);
    
    for (int linha = 0; linha < dimensao; linha++) {
        for (int coluna = 0; coluna < dimensao; coluna++) {
            int dist_cima = linha;
            int dist_esq = coluna;
            int dist_baixo = (dimensao - 1) - linha;
            int dist_dir = (dimensao - 1) - coluna;
            
            int minimo = dist_cima;
            if (dist_esq < minimo) minimo = dist_esq;
            if (dist_baixo < minimo) minimo = dist_baixo;
            if (dist_dir < minimo) minimo = dist_dir;
            
            printf("%d ", minimo + 1);
        }
        printf("\n");
    }
    
    return 0;
}