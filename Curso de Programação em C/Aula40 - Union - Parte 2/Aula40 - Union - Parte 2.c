#include <stdio.h>
#include <stdlib.h>

/*
- Eu utilizo o Union para economizar memória.
*/

union tipo {
    short int x;
    unsigned char c[2];
};

int main () {

    union tipo v;

    v.x = 1545;
    printf("x = %d\n", v.x);
    v.c[0] = 'a';
    v.c[1] = 'b';
    printf("c[1] = %c\n", v.c[0]);
    printf("c[1] = %c\n", v.c[1]);

    system("pause");
    return 0;
}