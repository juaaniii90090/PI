#include <stdio.h>
#include "getnum.h"

int main(void){

int num = getint("Ingrese un numero del 1 al 9: ");

if (num >= 1 && num<=9){
    for (int i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d\n" ,num ,i ,num*i);
    }
}
else{
    printf("El caracter ingresado no es un numero entre 1 y 9\n");
}
}