#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    O comando goto ele possui um ponto de início,
    quando eu chego a uma determinada condição 
    ele retorna para esse ponto.
    */

    int i = 0;

    inicio:

    if (i < 5) {
        printf("Numero: %d\n", i);
        i++;
        goto inicio;
    }

    system("pause");
    return 0;
}