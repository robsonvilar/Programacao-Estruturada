#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

   if (num == 0) {
       printf("Numero igual a zero. \n");
   }
   else if (num > 0) {
       printf("Numero maior do que zero. \n");
   }
   else if (num < 0) {
       printf("Numero menor do que zero. \n");
   }

    system("pause");
    return 0;
}