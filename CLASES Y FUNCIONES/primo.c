#include <stdio.h>
#include "getnum.h"

int main (void){

int N = getint("Ingrese un numero positivo: ") ; 
int div=0;
int i;

for(i = 1 ; i <= N ; i++){
    if(N % i == 0){
    div+=1 ; 
}
}  

if(div == 2){
    printf("El numero %d es primo\n" ,N) ; 
}
else{
printf("El numero %d no es primo\n" ,N) ; 
} 
}