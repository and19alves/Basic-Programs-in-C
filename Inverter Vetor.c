#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
    int i, temp, vetor[TAM];
    for (i=0;i <TAM;i++){
        printf("\n \t V[%d]:  ",i+1);
        scanf("%d", &vetor[i]);
    }
    // Vetor tamanho 4 [1,2,3,4]
    
    // for i < 2
    for(i=0; i< TAM / 2; i++){
        temp = vetor[TAM-i-1];           // Temp = 4       // temp = 3       
        vetor[TAM-i-1] = vetor[i];       // Vetor[3] = 1   // vetor[2] = 2
        vetor[i] = temp;                 // vetor[0] = 4   // vetor[1] = 3
    }
    for(i=0;i<TAM; i++){
        printf("\n V[%d] = %d", i, vetor[i]);
    }
    return 0;
}

