#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE *f;
    f = fopen("arquivo.txt","w");
    if(f == NULL) {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    fputs("Hello\n",f);
    fputs("World\n",f);
    fclose(f); 

    system("pause");
    return 0;
}