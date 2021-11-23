#include <stdio.h>
#include <math.h>

float media (float vetor[], int n){
    int i;
    float soma;
    for (i=0, soma=0.0;i<n;i++){
        soma = soma + vetor[i];       
    }
    return soma/n ;
}

float desviop (float vetor[], int n, float med){
    int i;
    float soma;
    for(i=0,soma=0.0; i <n;i++){
        soma = soma + pow(vetor[i] - med,2);
    }
    return pow(soma / (n-1),0.5);
    }

int main (void){
    float v1[10] = {2, 4, 6, 7, 4, 5, 10, 12, 20, 30};
    float v2[6] = {2.3, 4.5, 7, 8, 2, 1};
    float v3[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    float med, desv;
    
    med = media (v1, 10);
    desv = desviop (v1, 10, med);
     printf("\n \t Média = %.2f   | \t Desvio Padrão = %.2f. \n", med, desv);
    
    med = media (v2, 6);
    desv = desviop (v2, 6, med);
     printf("\n \t Média = %.2f   | \t Desvio Padrão = %.2f. \n", med, desv);
    
    med = media (v3,10);
    desv = desviop (v3, 10, med);
     printf("\n \t Média = %.2f   | \t Desvio Padrão = %.2f. \n", med, desv);
}
