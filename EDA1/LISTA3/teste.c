#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int buscabinaria(int *v, int n, int x){
    int e = -1;
    int d = n;
    int m = e+d/2;
    while (e<d){
        if (x<v[m])
        {
            d = m;
            m = e+d/2;
        }
        else
        {
            e = m;
            m = e+d/2;
        }
    }
    return m;
}
int main (){
int n; 
scanf("%d", &n);
int *v;
v = malloc(n*sizeof(int));
for (int i= 0; i<n; i++){
    scanf("%d", &v[i]);
}
printf("%d", buscabinaria( *v, n, 5));
return 0;
}
