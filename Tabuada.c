#include <stdio.h>
#include <stdlib.h>

int main (void){
    int numero,i,result;
    
    printf("\n-------------------------------------------\n");
    
    printf ("\t Digite qual o valor da tabuada: ");
    scanf("%d", &numero);
    
    printf("\t Tabuada do %d: \n ",numero);
    
    for(i=1;i<=10;i++){
        result = numero * i;
        // printf(" %d X %d = %d \n, numero,i, numero * i);
        printf ("%d x %d = %d \n",numero,i,result);
    }
    
}

// Usando While:

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,num;
    printf("\t\t\n Digite o valor que desejas multiplicar: ");
    scanf(" %d", &num);
    i = 1;
    while (i <= 10){
        printf("\n \t %d x %d = %d",num,i,num * i);
        i++;
    }
}