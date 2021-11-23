#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int main(void) {
    int i, j;
    int mat[N][M], mt[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("M[%d][%d]? ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n--------------------------------------------------------------\n");
    printf("\n Matriz Normal:\n");
    // Escrever matriz 
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n--------------------------------------------------------------\n");
    printf("\n Escrever Matriz Transposta:\n");
    // Escrever matriz 
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%4d", mat[j][i]);
        }
        printf("\n");
    }
    
    
    printf("\n--------------------------------------------------------------\n");
    printf("\n Matriz Transposta:\n");
    // Criar matriz transposta:
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            mt[i][j] = mat[j][i];
            printf("%4d", mt[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n--------------------------------------------------------------\n");
}


