#include <stdio.h>
#include <stdlib.h>

struct endereco {
    char rua[50];
    int numero;
};

struct pessoa {
    char nome[50];
    int idade;
    struct endereco ender;
};

int main () {

    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;

    system("pause");
    return 0;
}