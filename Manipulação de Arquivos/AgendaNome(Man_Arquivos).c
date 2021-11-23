/* Exemplo 47 - fread e fwrite */ 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[30];
    char telefone[20];
}registro;

int main (){
    registro reg;
    FILE * arq;
    char numstr[5];
    if ((arq = fopen("arquivo", "w+b")) == NULL){
        puts(" Erro na Abertura do Arquivo.");
        exit(1);
    }
     puts("Digite enter no NOME para terminar.");
     puts("");
     
     do{
         printf("\n Entre com um nome: \n ");
         fgets(reg.nome,29, stdin);
         reg.nome[strlen (reg.nome) - 1 ] = '\0';
         printf("\n Entre com um telefone: \n");
         if(reg.nome[0]){
             fgets (reg.telefone,19, stdin);
                     reg.telefone[strlen (reg.telefone) - 1] = '\0' ;
             fwrite(&reg, sizeof (registro),1, arq);
         }
     }while (reg.nome[0]);
     rewind(arq);
     
     printf("\n\n Listagem do Arquivo\n");
     puts("----------------------------------------");
     printf("%-30s %20s\n", "NOME", "TELEFONE");
     
     while(!feof(arq)){
     fread(&reg, sizeof (registro),1,arq);
     if(!feof(arq))
         printf("%-30s %20s\n",reg.nome, reg.telefone);
     }
        
    }

