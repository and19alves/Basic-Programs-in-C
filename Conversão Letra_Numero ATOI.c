#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h> //Biblioteca que transforma letra em numero

int tex2num (char texto[]){
    int i, s = 0;
    for (i = 0;texto[i]; i++)
        s = 10 * s + (texto[i] - '0');
    return s;
}

int main (void){
    char num[10];
    int x;
    printf("\n Digite um número: ");
    fgets(num, 10, stdin);
    num[strlen(num)-1] = 0;
   // int x = tex2num(num);
    x = atoi(num);   // String para int
    //x = atof(num);  // String para float
    printf("\n Em String: -> %s ",num+1); // Vai dar erro por ser str + int
    printf("\n Em número: -> %d ",x+1);  // faz a operacao sem problemas

}

