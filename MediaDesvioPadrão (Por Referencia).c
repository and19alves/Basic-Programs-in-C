#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void desviop(float vetor[], int n, float *media, float *desvio){
    int i;
    float soma;
    
    for(i=0, soma = 0.0; i < n; i++){
     soma = soma + vetor[i];    
    }
    
    *media = soma / n;
    
    for(i=0,soma = 0.0; i < n; i++){
      soma = soma + pow(vetor[i] - *media,2);      
    }
     *desvio = pow(soma / (n - 1),0.5);
}


int main (void){
    float v1[10] = {2, 4, 6, 7, 4, 5, 10, 12, 20, 30};
    float v2[6] = {2.3, 4.5, 7, 8, 2, 1};
    float med, desv;
    
    desviop(v1, 10, &med, &desv);
    printf("\n \t Média = %.2f   | \t Desvio Padrão = %.2f. \n", med, desv);
    
    desviop(v2, 6, &med, &desv);
    printf("\n \t Média = %.2f   | \t Desvio Padrão = %.2f. \n", med, desv);
}
