#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE *f;
    f = fopen("arquivo.txt","r");
    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }
    char c;
    int i;

    for (i=1; i<=10; i++) {
        c = fgetc(f);
        printf("%c", c);
    }
    printf("%c", c);
    fclose(f);

    system("pause");
    return 0;
}