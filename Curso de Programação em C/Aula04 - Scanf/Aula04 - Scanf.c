#include <stdio.h>
#include <stdlib.h>

int main () {

    // scanf Serve para fazer leitura de dados do teclado.

    char letra;
    int nro;
    float n;
    double d;

    //scanf("%c", &letra);
    //scanf("%d", &nro);
    //scanf("%f", &n);
    //scanf("%f", &d);

    //printf("Digite um numero: ");
    //scanf("%d", &nro);
    //printf("Numero digitado: %d\n", nro);


    printf("Digite dois numeros: ");
    scanf("%d %f", &nro, &n);
    printf("Numeros: %d e %f\n",nro,n);

    system("pause");
    return 0;
}