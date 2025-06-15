#include <stdio.h>
#include <stdbool.h>

int verificarPrimo(int p) {
if (p <= 0) return 0; 
if (p == 1) return 1; 
if (p == 2 || p == 3) return 1;  
if (p % 2 == 0 || p % 3 == 0) return 0; 

int i = 5;
while (i * i <= p) {
if (p % i == 0 || p % (i + 2) == 0) return 0; 
i += 6;
}

return 1;
}



int main (){
    int n1 = 0, n2 = 0, n3 = 0;

    scanf(" %d %d %d ", &n1, &n2, &n3 );

 if (verificarPrimo(n3) !=1)
 {
    return -1;
 }

 while (n2>0)
 {
    n1 = n1 * n1;
    n2--;
 }

 int resposta = n1%n3;
 printf("%d", resposta);
 return 0;
 

}