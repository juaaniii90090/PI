#include <stdio.h>

int main(void) {
   int numero = 15;

   int en_rango = (numero >= 0 && numero <= 15);
   char caracter = en_rango ? (numero >= 10 ? numero + 'A' - 10 : numero + '0') : (numero-numero) ; 

printf("El numero original es: %d \n el caracter ascii es: %c  \n" ,numero ,caracter) ;

}



   
