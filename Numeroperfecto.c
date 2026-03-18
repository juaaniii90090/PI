#include <stdio.h>
#include "getnum.h"

int main (void){
int divisores = 0;
int n; 
n = getint("Ingrese un numero mayor a 0: ") ; 

printf("Los divisores de %d son: " ,n);

if (n > 0){
    for(int i=1 ; i <= n ; i++){
        if(n % i == 0){
         divisores += i ; 
         printf("%d ",i);
        }
    }

printf("\n");
    
     if((n == divisores - n)){
            printf("%d es un numero perfecto\n",n);
    }
    else{
            printf("%d no es un numero perfecto\n",n); 
    }
    
}
    else{
    puts("El caracter ingresado no corresponde a un numero mayor a 0");
    } 
}