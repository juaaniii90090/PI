#include <stdio.h>

int main(void) {
    int c1,c2,c3,c4;
    c1 = getchar();
    c2 = getchar();
    c3 = getchar();
    c4 = getchar();
    printf("c1=%d %X '%c'\n", c1, c1, c1);
    printf("c2=%d %X '%c'\n", c2, c2, c2);
    printf("c3=%d %X '%c'\n", c3, c3, c3);
    printf("c4=%d %X '%c'\n", c4, c4, c4);
    return 0;
}