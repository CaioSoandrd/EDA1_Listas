#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long somaDigitosRecursivo(char *num_str, int index) {
    if (num_str[index] == '\0') return 0;
    return (long long)(num_str[index] - '0') + somaDigitosRecursivo(num_str, index + 1);
}

int grau(long long soma, int nivel) {
    if (soma == 9) return nivel;
    char temp_soma_str[20];
    sprintf(temp_soma_str, "%lld", soma);
    long long proxima_soma = somaDigitosRecursivo(temp_soma_str, 0);
    return grau(proxima_soma, nivel + 1);
}

void processaRecursivo() {
    char entrada[1001];
    if (scanf("%1000s", entrada) != 1 || strcmp(entrada, "0") == 0) return;
    long long total = somaDigitosRecursivo(entrada, 0);
    if (total % 9 != 0) {
        printf("%s is not a multiple of 9.\n", entrada);
    } else {
        printf("%s is a multiple of 9 and has 9-degree %d.\n", entrada, grau(total, 1));
    }
    processaRecursivo();
}

int main() {
    processaRecursivo();
    return 0;
}