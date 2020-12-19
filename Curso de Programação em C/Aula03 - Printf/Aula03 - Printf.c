#include <stdio.h>
#include <stdlib.h>

int main () {

    char letra = 'a';
    int nro = 10;
    float n = 5.25;

    printf("%c \n",letra); //Caractere
    printf("%d \n",letra); //Inteiro
    printf("%d \n", nro); //Inteiro
    printf("%f \n",n);    //Real

    printf("Letra %c, inteiro %d \n", letra, nro);

    printf("Nro: %d; nro+1: %d\n",nro,(nro+1));

    system("pause");
    return 0;
}