#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *arq;   // Variavel
    char c, nome[20];
    
    printf("\n \t \t Mini Editor em C - Digite ESC e ENTER para terminar. \n");
    
    printf("\n Nome do Arquivo? ");
    scanf("%s", &nome); 
    
    if ( (arq = fopen(nome, "w")) == NULL){   // Se nao conseguir abrir ERRO
        printf("\n\t ERRO NA ABERTURA \n ");
        printf("\t Arquivo : %s. \n", nome);
        exit(1);
    }
    do{
        c = getchar();   // Pega o char que a pessoa digitou
        if (c == 13){ // ENTER
            putc('\n', arq);    // pula uma linha no arquivo
            puts ("");  // Dá um efeito na tela
        }
        else if (c != 27) // ESC
            putc(c, arq); // Escreve no texto
        }while (c != 27); // Sai da repeticao
        fclose (arq);  // Fecha o arquivo
}