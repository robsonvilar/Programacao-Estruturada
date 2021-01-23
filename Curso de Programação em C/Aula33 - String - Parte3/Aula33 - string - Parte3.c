#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char str[20] = "Linguagem C";
    char str2[20];

    int i,j=0;

    for (i=strlen(str2)-1; i>=0; i--) {
        str2[j] = str[i];
        j++;
    }

    str2[j] = "\0";

    printf("str2 = %s\n", str2);

    system("pause");
    return 0;
}