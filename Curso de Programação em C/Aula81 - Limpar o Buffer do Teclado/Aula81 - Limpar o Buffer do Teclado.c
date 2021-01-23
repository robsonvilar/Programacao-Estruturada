#include <stdio.h>
#include <stdlib.h>

int main () {

    char ch;
    int i;
    for(i=0; i<5; i++) {
        printf("Digite o %d caractere: ", i+1);
        scanf("c", &ch);
        printf("\n");
        setbuf(stdin,NULL);
    }

    system("pause");
    return 0;
}