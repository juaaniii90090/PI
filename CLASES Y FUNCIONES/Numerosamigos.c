#include <stdio.h>
#include "getnum.h"

int Namigo(unsigned int N1, unsigned int N2){

int div1 = 0;
int div2 = 0; 

for(int i=1 ; i < N1 ; i++){
    if(N1 % i == 0){
        div1 += i;
    }
}

for(int i=1 ; i < N2 ; i++){
    if(N2 % i == 0){
        div2 += i;
    }
}


if(N2 == div1 && N1 == div2){
    printf("Son amigos\n");
    return 1;
}
else{
    printf("Son enemigos\n");
    return 0;    
}
}

int main(void){
    Namigo(220, 284);
    
}