#include <stdio.h>
#include "getnum.h"

int main (void){ 

int N1 = getint("") ; 
int N2 = getint("") ; 

int es_divisor = ((N2 % N1) == 0);

es_divisor ? printf(" %d es divisor de %d\n", N1, N2) : printf(" %d no es divisor de %d\n", N1, N2);
}