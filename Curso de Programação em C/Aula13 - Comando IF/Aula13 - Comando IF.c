#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if ((x > 0) || (x%2 == 0)) {
        printf("O valor eh positivo ou par.\n");
    }

    system("pause");
    return 0;    
}