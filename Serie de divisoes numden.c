#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num,den;
    float s;
    s = 0;
    
    for(num=1,den=1;((num<=99) && (den<=50));num=num+2,den++){
        s = s + (num / den);
        //printf("Num %d e Den %d\n",num,den);
       
        }
    printf("\n \t A soma será igual á:  %f .",s);
    
    
}


