#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, j;

    printf("\n");

    for (i=1; i<5; i++) {
        for (j=1; j<5; j++) {
            if (i == j) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
    }

    printf("\n");
    printf("\n");

    system("pause");
    return 0;
}