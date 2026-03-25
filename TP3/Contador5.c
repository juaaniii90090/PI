#include <stdio.h>

int digitos_entero (float n){

    int i = 0;
    int b = (int)n;

    while(b){
       if(b % 10 == 5){
        i++;
       }
        b /= 10;
    }
    return i;
}

int digitos_decimal (float n){

int b = n - (int)n ;           //Saco la parte entera del numero

for(int i = 0 ; b)


}

int main (void){
    printf("La cantidad de 5's de la parte entera son: %d\n",digitos_entero(555.000000));

}