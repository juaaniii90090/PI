#include <stdio.h>

int main(void) {
   unsigned char var, var1, var2, var3, var4;
   var = 0xD8;
   var1 = var >> 6 ;
   var2 = (var >> 4) & 0x01;
   var3 = (var >> 2) & 0x02;
   var4 = var & 0x00;
  printf("var = %02x\n", var );
  printf("var1 = %02x\n", var1 );
  printf("var2 = %02x\n", var2 );
  printf("var3 = %02x\n", var3 );
  printf("var4 = %02x\n", var4 );
return 0;
}