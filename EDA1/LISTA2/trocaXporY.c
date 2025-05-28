#include <stdio.h>

void trocaXporY(char *str) {
    if (*str == '\0') return;
    if (*str == 'x') *str = 'y';
    putchar(*str);   
    trocaXporY(str + 1);                          
}

int main() {
    char s[81];
    scanf("%s", s);
    trocaXporY(s);
    putchar('\n');
    
    return 0;
}