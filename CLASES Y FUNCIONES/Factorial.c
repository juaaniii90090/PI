#include <stdio.h>

int factorial (unsigned int n){

int i;
int resultado = 1; 

for(i = 0 ; i < n ; i++){
    resultado *= (n-i);
}
return (resultado);
}