#include<stdio.h>
#include<stdlib.h>

void contatena(char dest[], char orig[]){
    int i,j;
		//dest[j] != '\0' [\0 = falso,logo, se pode somente colocar o dest msm :  dest[j];j++]

    for(j=0;dest[j] != '\0';j++);
        for(i=0;orig[i] != '\0';i++,j++)
            dest[j] = orig[i];
        dest[j] = '\0';
    
}
int main (void){
    char nome[100] = "Luiz";
    contatena (nome, " Eduardo");
    puts(nome);
}

// Na biblioteca string.h existe uma função dita 
// strcat(vetor, vetor)
// Que faz a concatenacao automatica
