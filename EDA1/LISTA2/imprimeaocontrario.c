#include <stdio.h>

void imprimeAoContrario(char *s) {
    if (*s) {
        imprimeAoContrario(s + 1);
        putchar(*s);
    }
}

int main() {
    char str[501];
    scanf("%500s", str);
    imprimeAoContrario(str);
    putchar('\n');
    return 0;
}
