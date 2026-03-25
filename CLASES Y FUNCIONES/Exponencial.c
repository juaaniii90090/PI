//Escribir una función real para calcular aproximadamente el valor de ex  por  medio de la serie  1 + x 
//+ x2 / 2! + x3 / 3! + ....... Dicha función recibe como parámetros de entrada el valor de x. (En no más de 10
//líneas). Asumimos que x debe ser mayor o igual a cero.

#include <stdio.h>
#include <math.h>
#define EPSILON 0.001

double taylorExponencial (double x){

int i = 1;
int factorial = 1;
double aproximacion = 1; 
double temporal = 0;
double error;
    do{
        aproximacion += (pow(x,i)/factorial);
        error = fabs(aproximacion - temporal);
        temporal = aproximacion;
        i++;
        factorial *= i; 
    }while(error > EPSILON);

return aproximacion;
}
 
int main(void){
    int centrado = 1;
    printf("Aproximacion de taylor: %g \n", taylorExponencial(centrado));
}