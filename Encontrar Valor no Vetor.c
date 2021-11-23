#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
    int i,vetor[TAM];
    
    for(i=0; i < TAM;i++){
        printf("\n\t Vetor[%d] =  ",i+1);
        scanf("%d",&vetor[i]);
       
        if (vetor[i] == 30){
            printf("\n\n\t  ++++  ENCONTRADO! Valor 30 na posição [%d] do vetor  ++++  \n\n ",i+1);
        }
        
}
}

