#include <stdio.h>
#include <stdlib.h>

int main () {

    int a,b,c;

    printf("Soma quantas vezes: ");
    scanf("%d", &c);

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    int cont = 0;
    int soma = 0;
    for (cont = 0; cont<= c; cont+=1) {

        soma += a;

        printf("%d\n", soma);

    }

    printf("Fim do programa.\n");

    system("pause");
    return 0;
}