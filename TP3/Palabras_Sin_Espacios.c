#include <stdio.h>
#include "getnum.h"


int main(void){

int c;
int contador=0;

while((c = getchar()) != '\n'){
    if(c == ' '){
        printf("\n");
    } else {
        printf("%c", c);
    }
}
printf("\n");
}
