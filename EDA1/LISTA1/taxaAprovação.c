#include <stdio.h>
#include <stdlib.h>

#define MAX_DISCIPLINAS 10000

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int D, codigos[MAX_DISCIPLINAS];
    scanf("%d", &D);

    int ano, semestre, m;
    while (scanf("%d %d %d", &ano, &semestre, &m) == 3) {
        int max_reprovacoes = -1, count = 0;

        for (int i = 0; i < m; i++) {
            int codigo, matriculados, aprovados;
            scanf("%d %d %d", &codigo, &matriculados, &aprovados);
            int reprovacoes = matriculados - aprovados;

            if (reprovacoes > max_reprovacoes) {
                max_reprovacoes = reprovacoes;
                count = 0;
                codigos[count++] = codigo;
            } else if (reprovacoes == max_reprovacoes) {
                codigos[count++] = codigo;
            }
        }

        qsort(codigos, count, sizeof(int), comparar);
        printf("%d/%d\n", ano, semestre);
        for (int i = 0; i < count; i++) printf("%d ", codigos[i]);
        printf("\n\n");
    }
    return 0;
}