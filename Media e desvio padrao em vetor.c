#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

int main(void) {
    float media,soma,x[N],desvio;
    int i;
    
    for(i=0, soma=0.0 ;i< N ;i++){
        scanf("%f", &x[i]);
        soma = soma + x[i];
    }
    media = soma / N;
    
    for (i=0, soma = 0.0; i< N; i++){
        soma = soma + pow(x[i]- media,2);
        desvio = pow(soma / (N-1),0.5);
        
    }
    printf("\n\t Média = %.2f, Desvio = %.2f",media,desvio);
}
    /*int i,vetor[TAM];
    int soma = 0; float media = 0;
    
    for(i=0; i < TAM;i++){
        printf("\n\t Nota do Aluno[%d] =  ",i+1);
        scanf("%d",&vetor[i]);
        
        soma = soma + vetor[i];
       
     }
     media = soma / TAM;
     printf("\n \t A Média dos alunos será de: %.2f",media);
}
*/
