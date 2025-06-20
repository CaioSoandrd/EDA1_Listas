#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int valores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < n; i++) {
        int num = valores[i];
        
        while (num >= 1000) {
            printf("M");
            num -= 1000;
        }
        
        if (num >= 900) {
            printf("CM");
            num -= 900;
        } else if (num >= 500) {
            printf("D");
            num -= 500;
        } else if (num >= 400) {
            printf("CD");
            num -= 400;
        }
        while (num >= 100) {
            printf("C");
            num -= 100;
        }

        if (num >= 90) {
            printf("XC");
            num -= 90;
        } else if (num >= 50) {
            printf("L");
            num -= 50;
        } else if (num >= 40) {
            printf("XL");
            num -= 40;
        }
        while (num >= 10) {
            printf("X");
            num -= 10;
        }
        
        if (num >= 9) {
            printf("IX");
            num -= 9;
        } else if (num >= 5) {
            printf("V");
            num -= 5;
        } else if (num >= 4) {
            printf("IV");
            num -= 4;
        }
        while (num >= 1) {
            printf("I");
            num -= 1;
        }
        
        printf("\n");
    }

    return 0;
}