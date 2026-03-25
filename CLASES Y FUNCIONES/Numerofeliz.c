#include <stdio.h>

int SumaCuadrados(int n){

int suma = 0 ; 

while(n > 0){
    suma += (n % 10)*(n % 10) ; 
    n /= 10;

}

return suma;

}

int numerofeliz(int N){

int i = N;

while (i > 9){
    i = SumaCuadrados(i);
}

if(i == 1 || i == 7){
    return 1;
}

else{
    return 0;
}
}

int main(void){
if(numerofeliz(2026) == 1){
    printf("El numero es feliz\n");
}
else{
    printf("El numer es infeliz\n");
} 
}