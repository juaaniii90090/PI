#include <stdio.h>
#include "getnum.h"

int ContarBits(unsigned int n){

int cant1 = 0;
while(n){
    cant1 += n & 1;
    n >>= 1; 
}
return (cant1 > (sizeof(n)/2 + 1));
}

int main(void){
    printf("El valor de verdad es: %d\n", ContarBits(31));
}