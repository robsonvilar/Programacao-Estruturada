#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main () {

    //Forma 1 de usar o struct
    /*
    struct pessoa p;
    strcpy(p.nome, "Ricardo");
    strcpy(p.rua, "Rua 1");
    p.idade = 31;
    p.numero = 101;
    */

    //Forma 2 de usar o struct
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};

    system("pause");
    return 0;
}