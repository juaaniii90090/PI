#include <stdio.h>
#include "getnum.h"

int main (void){

int N = getint("Ingrese un numero positivo: ") ; 
unsigned int sum = 0 ; 

printf("La suma de los digitos de %d es " ,N);

while(N > 0){
    sum += (N % (10));
    N /= 10 ; 
}

printf("%d\n", sum);

}