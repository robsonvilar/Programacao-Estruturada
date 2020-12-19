#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    O comando switch
    permite fazer seleções múltiplas com base
    no valor de uma variável do tipo int ou char
    */

    char ch;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &ch);

    switch (ch) {
        case '.': printf("Ponto.\n"); break;
        case ',': printf("Virgula.\n"); break;
        case ':': printf("Dois pontos.\n"); break;
        case ';': printf("Ponto e virgula.\n"); break;
        default : printf("Nao eh pontuacao.\n");
    }
    
    system("pause");
    return 0;
}