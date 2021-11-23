#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copia(char dest[], char origem[]) {
    int i;
    for (i = 0; origem[i] != '\0'; i++) {
        dest [i] = origem [i];
    }
    dest [i] = '\0';
}

void maiuscula(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}
// FUNÇÃO NAO TA PRONTA
void contatena(char dest[], char origem[]) {
    int i, j, posicao;
    for (i = 0; origem[i] != '\0'; i++) {
        if (origem[i] == '\0') {
            posicao = origem[i];
        }
    }
    for (i = 0; origem[posicao + i] != '\0'; i++) {
        dest [i] = origem[i];
    }
    dest [i] = '\0';
}

int main(void) {
    char nome[30];
    
    copia(nome, "Luiz Eduardo");
    contatena(nome, " Professor");
    maiuscula(nome);
    puts(nome);
}


