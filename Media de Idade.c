#include <stdio.h>
#include <stdlib.h>

int main (void){
    printf("\n ---------------------------------------------------------------");
    printf("\n Média de Idade :  1.0");
    
    int resp = 1;
    int num = 0;
    int idade = 0;
    int soma = 0;
    float media = 0;
    
    while (resp != 0){
        printf("\n \t Digite a %dª idade: ",num+1);
        scanf("%d",&idade);
        
        soma = soma + idade;
        resp = idade;
        
        if (idade == 0) {
          media = soma / num ;  
        }
        num++;
    }
    
    printf("\n\t\t A idade média será de %.1f anos.", media);
    
}