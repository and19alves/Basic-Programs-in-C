#include <stdio.h>
#include <stdlib.h>

//  Função:
// Passagem de argumento por VALOR       =  Muda o parametro, mas NÃO altera o argumento correspondente
// Passagem de argumento por REFERENCIA  =  A mudança do parametro altera também o argumento correspondente 



    // Passagem por VALOR - VAI DAR ERRO! ---
/*
void quadrado (int a, int b){ // Parametros
    b = a * a;
}



int main (void){
    int x, y;
    
    printf(" \n Digite um número: ");
    scanf("%d", &x);
    
    quadrado(x,y); // Argumentos 
    
    printf("\n O quadrado de %d será %d \n",x,y);
}
*/

// =====================================================

    // Passagem por Referencia 

void quadrado (int a, int *b){ // Parametros
    *b = a * a;  // Jogue o resultado para o endereco de b(end de y) apos a operaçao
}

int main (void){
    int x, y;
    
    printf(" \n Digite um número: ");
    scanf("%d", &x);
    
    quadrado(x,&y); // Argumentos (Valor da variavel x | Endereço da variavel y)
    
    printf("\n O quadrado de %d será %d \n",x,y);
}
