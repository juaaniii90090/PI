#include <stdio.h>
#include "getnum.h"

int main(void){

int Lado = getint("Ingrese cuanto vale el lado de su cuadrado: ");

for(int i = 1 ; i <= Lado*Lado ; i++){

    if(i % Lado == 0){
        printf("*");
        printf("\n");
    }

    else{
        printf("*");
    }
}
}