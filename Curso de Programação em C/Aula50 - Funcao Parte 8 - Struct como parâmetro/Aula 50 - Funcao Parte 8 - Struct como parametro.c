#include <stdio.h>
#include <stdlib.h>

//Passagem de parâmetro

/*

struct ponto {
    int x, y;
};

void imprime_valor(int n) {
    printf("Valor = %d\n",n);
}

int main () {

    struct ponto p1 = {10,20};

    imprime_valor(p1.x);
    imprime_valor(p1.y);

    system("pause");
    return 0;
}

*/

//Passagem de parâmetro por referência

/*

struct ponto {
    int x, y;
};

void soma_imprime_valor(int *n) {
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}

int main () {
    struct ponto p1 = {10,20};

    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);

    system("pause");
    return 0;
}

*/

struct ponto {
    int x, y;
};

void atribui (struct ponto *p) {
    (*p).x = 10;
    (*p).y = 20;
}

int main () {
    struct ponto p1;
    atribui (&p1);
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);

    system("pause");
    return 0;
}