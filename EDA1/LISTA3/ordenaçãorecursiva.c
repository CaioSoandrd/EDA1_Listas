#include <stdio.h>
#include <stdlib.h>

void ordena(int *v, int n) {
    if(n <= 1) return;
    
    void insert(int *v, int i) {
        if(i > 0 && v[i-1] > v[i]) {
            int temp = v[i];
            v[i] = v[i-1];
            v[i-1] = temp;
            insert(v, i-1);
        }
    }
    
    ordena(v, n-1);
    insert(v, n-1);
}