#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *arq;   // Variavel
     
    int i,valor;
    arq = fopen("dados.txt","r"); //Lê um arquivo dados.txt na pasta 
    
    if (arq == NULL) { 
        printf("\n Erro de abertura \n");
        exit(1);
    }
    for (i=0;i<10;i++){   // repete 10x
        fscanf(arq, "%d", &valor); // captura o que os dados do arquivo
        printf("%d \n", valor); // Escreve no programa
    }
    fclose(arq); // Fecha o arquivo
}