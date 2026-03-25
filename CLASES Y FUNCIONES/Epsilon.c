#include <stdio.h>
#include <math.h>
#include "getnum.h"
#define epsilon 0.01

double redondear (double n, int decimales){
    decimales = pow(10, decimales);
    n *= decimales;
    n = floor(n + 0.5);
    n /= decimales;
    return n;
}


int main(void){

double n = getfloat("Ingresa un floor \n");
double x = round(n);

if( redondear(fabs(x-n), 5) < epsilon){
    printf("Es un casi entero\n");
}
else{
    printf("No es casi entero \n");
}
}