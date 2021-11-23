#include <stdio.h>
#include <stdlib.h>


void ordena(int v[], int n){
    int i,j,menor,temp;
    for (i=0;i<n-1;i++){
        menor = i;
        for (j = i+1; j<n;j++){
            if (v[j] < v[menor]){
                menor = j;
            }
            temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
                   
        }
    }
}

void mostra (int v[], int n){
    int i;
    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("]\n");   
}


int main(void) {
    int vetor1[8] = {12, 4, 8, 5, 3, 10, 9, 2};
    int vetor2[4] = {10, 20, 4, 12};
    
    ordena (vetor1, 8);
    mostra (vetor1, 8);
    
    ordena (vetor2, 4);
    mostra (vetor2, 4);
}


