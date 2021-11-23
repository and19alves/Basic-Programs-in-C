/*#include <stdio.h>
#include <stdlib.h>



int main (void){
    int maior,menor,numero,resp;
    maior = 0;
    menor = 0;
    resp = 1;
    
    while (resp != 0){
     printf("\n Digite um número: ");
     scanf("%d", &numero);
     
     if (numero >= maior){
         maior = numero;
     }
     if (numero <= menor){
         menor = numero;
              }
     resp = numero;
    }
    printf("\n\t\t O maior Numero digitado será o %d. ",maior);
    printf("\n\t\t O menor Numero digitado será o %d. ",menor);
    
}


// Desenvolva um programa em C para ler uma sequencia de numeros até que seja digitada zero.
// Ao final o programa tem que apresentar o maior e o menor numero lido. 


*/
//----------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>



int main (void){
    int num,maior,menor,i;
 printf("\n\t Digite um número:");
 scanf("%d", &num);
 maior = num;
 menor = num;
 i = 1;
 while (num != 0){
     i = i + 1;
   printf("\n\t Digite um número:");
 scanf("%d", &num);
 if (num >= maior && num != 0){
     maior = num;
 }
 if (num <= menor && num != 0){
     menor = num;
 }
 
 }
 printf("\n\t\t O menor valor registrado será: %d",menor); 
 printf("\n\t\t O maior valor registrado será: %d",maior); 
 printf("\n\t\t Foram um total de %d número(s) digitado(s). ",i);
}


// Desenvolva um programa em C para ler uma sequencia de numeros até que seja digitada zero.
// Ao final o programa tem que apresentar o maior e o menor numero lido. 