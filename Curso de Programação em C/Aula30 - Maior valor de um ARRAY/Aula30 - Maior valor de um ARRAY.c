#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;
    int lista[5] = {3,18,2,51,45};
    int Maior = lista[0];

    for (i=0; i<5; i+=1) {
        if (Maior < lista[i]) {
            Maior = lista[i];
        }
    }
    
    printf("Maior = %d\n", Maior);

    system("pause");
    return 0;
}