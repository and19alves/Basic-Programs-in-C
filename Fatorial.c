#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num,fat,i;
    
    printf("\n \t Digite um numero para realizar o fatorial dele:  ");
    scanf("%d", &num);
    
    i = 1; fat = 1;
    
    while (i <= num) {
        fat = fat * i ;
        i++;
               
    }
    
    printf("\n \t\t O fatorial de %d será:    %d",num,fat);
          
}