#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    Operadores lógicos
    && Operador "E"
    || Operador "OU"
    !  Operador "NEGAÇÃO"
    */

   int r = 5;
   int x = 5;
   int y = 3;

   /*
   r = (x > 2) && (y < x);
   printf("Resultado = %d \n",r);

   r = (x % 2 == 0) && (y > 0);
   printf("Resultado = %d \n",r);
   */

   //Negação
   r = !(x > 2);
   printf("Resultado = %d \n",r);
   

   system("pause");
   return 0;
}