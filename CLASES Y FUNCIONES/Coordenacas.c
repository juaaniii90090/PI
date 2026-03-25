#include <stdio.h>
#include "getnum.h"

int main (void) {

int x1, y1, x2, y2,dx,dy,d;

x1 = getint("Ingrese x1: ");
y1 = getint("Ingrese y1: ");
x2 = getint("Ingrese x2: ");
y2 = getint("Ingrese y2: ");

dx = ((x2 - x1) < 0) ? ((x2-x1)*-1) : (x2-x1);
dy = ((y2 - y1) < 0) ? ((y2-y1)*-1) : (y2-y1);

d = dx + dy ; 

printf("La distancia Manhattan de: (%d , %d), (%d, %d) es %d\n", x1, y1, x2, y2, d);

}