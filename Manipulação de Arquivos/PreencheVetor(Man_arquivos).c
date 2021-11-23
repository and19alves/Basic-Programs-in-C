#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *arq;   // Variavel
     
    int i,valor;
    arq = fopen("dados.txt","w"); //Cria um arquivo dados.txt na pasta 
    
    if (arq == NULL) { 
        printf("\n Erro de abertura \n");
        exit(1);
    }
    for (i=0;i<10;i++){   // repete 10x
        scanf("%d", &valor); // captura o que o usuario digitou
        fprintf(arq, " %d \n", valor); // Escreve no arquivo
    }
    fclose(arq); // Fecha o arquivo
}