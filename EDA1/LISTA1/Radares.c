#include <stdio.h>
#include <stdlib.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia) {
    double tempo = (tB - tA) / 3600.0; 
    double velocidade = distancia / tempo;
    return velocidade;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
  double  velocidade = calculaVelocidadeMedia(tA, tB, distancia);
   
    if (velocidade>velocidadeMaxima)
    {
        return 1;
    }
    return 0;
    
}
