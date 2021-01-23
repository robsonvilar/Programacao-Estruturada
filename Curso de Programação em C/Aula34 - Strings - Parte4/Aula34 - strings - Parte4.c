#include <stdio.h>
#include <stdlib.h>


int main () {

    //Forma 1 de verifica se existem vogais em uma string
    /*
    char str[20] = "Linguagem C";
    int i,j,total = 0;
    int tam1 = strlen(str);

    for (i=0; i<tam1; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            total += 1;
        }
    }
    printf("\n%d\n", total);
    */

    //Forma 1 de verifica se existem vogais em uma string

    char str[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";
    int i,j,total = 0;
    int tam1 = strlen(str);
    int tam2 = strlen(vogais);

    for (i=0; i<tam1; i++) {
        for (j=0; j<tam2; j++) {
            if (str[i] == vogais[j]) {
                total++;
                break;
            }
        }
    }
    printf("\n%d\n\n", total);
    
    system("pause");
    return 0;
}