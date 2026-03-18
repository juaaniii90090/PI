#include <stdio.h>
#include "getnum.h"

int main(void) {

int x1,x2,x3;
double H ;  

x1 = getint(""); 
x2 = getint(""); 
x3 = getint(""); 

H = ((3.0) / ((1.0/x1) + (1.0/x2) + (1.0/x3)));

printf("La constante H es: %f\n" , H);
}