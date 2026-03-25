#include <stdio.h>
#include <math.h>

double redondear (double n, int decimales){
    decimales = pow(10, decimales);
    n *= decimales;
    n = floor(n + 0.5);
    n /= decimales;
    return n;
}

int main(void){
    double numero = redondear(5.037263, 2);
    printf("Numero %g \n", numero);
}