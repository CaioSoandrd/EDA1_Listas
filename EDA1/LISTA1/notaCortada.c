#include <stdio.h>

int main() {
    int distancia_base, distancia_topo;
    scanf("%d", &distancia_base);
    scanf("%d", &distancia_topo);
    
    int area_esquerda = (distancia_base + distancia_topo) * 35; 
    
    if (area_esquerda > 5600) { 
        printf("1\n");
    } else if (area_esquerda < 5600) {
        printf("2\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}