#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    O comando continue ignora
    tudo o que está abaixo
    e reinicia o laço.
    */

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while (a <= b) {
        a = a + 1;
        if (a == 5) {
            continue;
        }
        printf("%d\n", a);
    }

    system("pause");
    return 0;
}