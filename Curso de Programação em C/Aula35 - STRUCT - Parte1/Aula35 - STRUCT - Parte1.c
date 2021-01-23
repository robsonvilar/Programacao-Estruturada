#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main () {

    /*Cada campo (variável) da struct pode
      ser acessada usando o operador "." (ponto)
    */

    struct pessoa p1, p2, p3;

    p1.idade = 31;
    scanf("%d", &p1.numero);
    gets(p1.nome); //Comando de leitura
    p1.numero = p1.numero + p1.idade - 100;

    system("pause");
    return 0;
} 