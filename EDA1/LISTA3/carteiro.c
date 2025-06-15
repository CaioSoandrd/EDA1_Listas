#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int *numeros, int *posicoes, int inicio, int fim) {
    int pivo = *(numeros + fim);
    int i = inicio - 1;
    
    for (int j = inicio; j < fim; j++) {
        if (*(numeros + j) <= pivo) {
            i++;
            trocar(numeros + i, numeros + j);
            trocar(posicoes + i, posicoes + j);
        }
    }
    
    trocar(numeros + i + 1, numeros + fim);
    trocar(posicoes + i + 1, posicoes + fim);
    
    return i + 1;
}

void quick_sort(int *numeros, int *posicoes, int inicio, int fim) {
    if (inicio < fim) {
        int pivo_index = particionar(numeros, posicoes, inicio, fim);
        quick_sort(numeros, posicoes, inicio, pivo_index - 1);
        quick_sort(numeros, posicoes, pivo_index + 1, fim);
    }
}

int busca_binaria(int *numeros_ordenados, int *posicoes_ordenadas, int n, int numero_procurado) {
    int esquerda = 0, direita = n - 1;
    
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        
        if (*(numeros_ordenados + meio) == numero_procurado) {
            return *(posicoes_ordenadas + meio);
        } else if (*(numeros_ordenados + meio) < numero_procurado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    
    return -1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int numeros_casas[45000];
    int posicoes_casas[45000];
    int entregas[45000];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", numeros_casas + i);
        *(posicoes_casas + i) = i;
    }
    
    quick_sort(numeros_casas, posicoes_casas, 0, n - 1);
    
    for (int i = 0; i < m; i++) {
        scanf("%d", entregas + i);
    }
    
    int posicao_atual = 0;
    long long tempo_total = 0;
    
    for (int i = 0; i < m; i++) {
        int numero_casa_entrega = *(entregas + i);
        int posicao_destino = busca_binaria(numeros_casas, posicoes_casas, n, numero_casa_entrega);
        int distancia = abs(posicao_atual - posicao_destino);
        tempo_total += distancia;
        posicao_atual = posicao_destino;
    }
    
    printf("%lld\n", tempo_total);
    
    return 0;
}