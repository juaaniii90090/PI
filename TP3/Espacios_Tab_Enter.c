    #include <stdio.h>
    #include "getnum.h"


    int main(void){

    int c;
    int contador=0;

    for(int i = 0 ; (c = getchar()) != EOF ; i++){

        if(c == 9 || c == 32 || c == 10){
            contador++;
        }
    }
    printf("La cantidad de espacios, tabuladores o nuevas lines son: %d\n",contador);
    }

    //Aclaracion: EOF se da tras la salida estandar (CTRL + D)