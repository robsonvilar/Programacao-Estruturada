#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[2][2]; 


    for (int i=0; i<2; i+=1) {
        for (int j=0; j<2; j+=1) {
            printf("Digite a posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }


    for (int i=0; i<2; i+=1) {
        for (int j=0; j<2; j+=1) {
            printf("%d, ", mat[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}