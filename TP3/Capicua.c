#include <stdio.h>
#include <math.h>

int cantDigitos(unsigned int n){
    int cifras = 0;
    while (n > 0)
    {
        cifras++;
        n /= 10;
    }
    return cifras;
}

int invertirNumero(unsigned int n){
    int invertido = 0;
    int digito;

while(n > 0){

    digito = n % 10;

    invertido = invertido * 10 + digito;

    n /= 10;

}
return invertido;
}

int esCapicua(unsigned int n){
    if (invertirNumero(n) == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){

int valorDeVerdad = esCapicua(5125);

if (valorDeVerdad == 0){
    printf("El numero no es capicua\n");
}

else{
    printf("El numero es capicua\n");
}
}