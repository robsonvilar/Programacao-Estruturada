#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    Obeservação: quanto mais dimensões um Array possui, mais
    memória ele vai gastar.
    */

    int cub[5][5][5];
    int i;
    int j;
    int k;

    for (i=0; i<5; i+=1) {
        for (j=0; j<5; j+=1) {
            for (k=0; k<5; k+=1) {
                cub[i][j][k] = k;
            }
        }
    }

    for (i=0; i<5; i+=1) {
        for (j=0; j<5; j+=1) {
            for (k=0; k<5; k+=1) {
                printf("%d, ", cub[i][j][k]);
            }
            printf("\n");
        }
    }

    system("pause");
    return 0;
}