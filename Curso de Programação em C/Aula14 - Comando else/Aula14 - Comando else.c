#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x%2 == 0) {
        printf("O valor eh PAR. \n");
    }
    else {
        printf("O valor eh IMPAR. \n");
    }
    
    system("pause");
    return 0;
}