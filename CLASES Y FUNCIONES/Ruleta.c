#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numeros  10


int main(void){

srand(time(NULL));

for(int i = 0 ; i < numeros ; i++){
    printf("%d\n" , rand() % 37);
}
return 0;
}