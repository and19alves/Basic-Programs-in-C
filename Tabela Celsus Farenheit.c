#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    // Farenheit para Centigrados 
    
    float c,f;
    printf("\n\t\t Tabela Farenheit para centígrados:");
    printf("\n\n\n");
    
    printf("|   F   |   C   |");
    printf("\n");
    printf("------------------");
    printf("\n");
    
   
    for(f=50.0;f<=150.0;f++){
        
        c = ((5 * (f - 32)) / 9) ;
        printf("|   %.1f   |   %.1f   | \n",c,f);        
    }
    
    printf("\n\n\n\n\n\n");
    // Centigrados para Farenheit - EXTRA
    
    float ce,fa;
    printf("\n\t\t Tabela Centigrados para Farenheit:");
    printf("\n\n\n");
    
    printf("|   C   |   F   |");
    printf("\n");
    printf("------------------");
    printf("\n");
    
    for(ce=50.0;ce<=150.0;ce++){
        
    fa = ((ce * 1.8) + 32);
    printf("|   %.1f   |   %.1f   | \n",ce,fa);        
    }
    
    
    
}
				