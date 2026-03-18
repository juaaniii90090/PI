#include <stdio.h>
#include "getnum.h"

void factorizacionPrima(int n){
    if (n < 2) {
        printf("%d No tiene factorizacion Prima \n",n);
        return;
    }
    printf("%d = ", n);

    while (n % 2 == 0)
    {
        printf("2");
        n /= 2;
        if (n > 1) printf(" * ");
    }

    for (int i = 3; i*i <= n; i+= 2) {
        while (n % i == 0){
            printf ("%d", i);
            n /= i;
            if (n > 1) printf (" * ");
        }
    }
    if ( n > 2 ){
        printf("%d", n);
    }
    printf("\n");
}

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
    factorizacionPrima(8293813);
}