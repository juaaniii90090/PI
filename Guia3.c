#include <stdio.h>
#include "getnum.h"

int esPrimo(unsigned int num){
    int div = 0;
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for(int i = 3 ; i*i <= num ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
void nPrimos(unsigned int cantidadPrimos){
    int i = 0;
    int encontrados = 0;
    printf("Primos: ");
    while (cantidadPrimos != encontrados)
    {
        i++;
        if (esPrimo(i) == 1){
            encontrados++;
            printf("%d ", i);
        }
    }

}
int main (void){
    nPrimos(20);
    printf("\n");
}