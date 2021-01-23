#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    /*
    char str1[20] = "Hello World";
    char str2[20];

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    int i;
    for (i=0; str1[i]!='\0'; i+=1) {
        str2[i] = str1[i]; 
    }
    str2[i] = "\0";

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    */

    /*
    A linguagem C possui algumas funções
    para manipulaçõ de strings
    //A biblioteca <string.h>
    funções úteis
    strlen - Tamanho da string
    strcpy - Copiar uma string
    strcat - Concatenar duas strings
    strcmp - Comparar duas strings
    */

    char palavra[20] = "Linguagem C";
    char novapalavra[30];

    strcpy(novapalavra, palavra);
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);
    printf("Copia = %s\n", novapalavra);

    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";

    strcat(palavra1,palavra2);

    printf("palavra = %s\n", palavra1);

    char palavra3[20] = "Linguagem C";
    char palavra4[30] = "LINGUAGEM C";

    if (strcmp(palavra3,palavra4) == 0) {
        printf("Strings iguais\n");
    }
    else {
        printf("Strings Diferentes\n");
    }

    system("pause");
    return 0;
}