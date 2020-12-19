#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;
    int y;
    int z;

    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    z = x > y ? x : y;

    printf("Maior = %d \n", z);

    system("pause");
    return 0;
}