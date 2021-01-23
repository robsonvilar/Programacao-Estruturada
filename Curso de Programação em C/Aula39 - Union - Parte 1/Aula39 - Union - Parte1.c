#include <stdio.h>
#include <stdlib.h>

union tipo {
    short int x;
    unsigned char c;
};

int main () {

    union tipo u;

    u.x = 5;
    u.c = 'a';

    system("pause");
    return 0;
}