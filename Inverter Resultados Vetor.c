#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
    int i, c;
    int vetor[TAM];

    for (i = 0; i < TAM; i++) {
        printf("\n\t Digite o valor do [%d]:  ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\n----------------------------------------------------------------\n");
    c = 1;
    for (i = TAM-1; i >= 0; i--) {
        printf("\n\t Vetor inverso: [%d] = %d", c, vetor[i]);
        c++;
    }

}

