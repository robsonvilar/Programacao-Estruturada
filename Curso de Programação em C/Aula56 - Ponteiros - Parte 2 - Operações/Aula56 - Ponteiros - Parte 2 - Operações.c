#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    //Atribuição: um ponteiro só pode
    //receber o endereço de uma variável
    //do mesmo tipo do ponteiro
    int *p, *p1, x = 10;
    float y = 20.0;
    p = &x;
    printf("*p: %d \n",*p);
    p1 = p;
    printf("p1: %d \n",*p1);
    */

    /*
    //Sobre o valor de endereço
    //armazenado por um ponteiro
    //podemos apenas somar e subtrair
    //valores INTEIROS
    //
    //As operações aritméticas com ponteiros
    //respeitam o tamanho do tipo. Um inteiro ocupa 
    //4 bytes.
    int *p = 0x5DC;
    printf("p = %d \n",p);
    p++;
    printf("p = %d \n",p);
    p = p + 15;
    printf("p = %d \n",p);
    p = p - 2;
    printf("p = %d \n",p);
    */

    /*
    //As operações de adição e subtração
    //no endereço dependem do tipo de dado
    //que o ponteiro aponta
    int *p = 0x5DC; //1500
    char *c = 0x5DC; //1500
    printf("p = %d\n c = %d\n",p,c);
    p++; //1504
    c++; //1501
    printf("p = %d\n c = %d\n",p,c);
    */

    /*
    //Ponteiros podem ser comparados usando:
    //==,!=,>,<,>= e <=
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;;
    if (p == p1) {
        printf("Ponteiros iguais\n");
    }
    else {
        printf("Ponteiros diferentes\n");
    }
    */
    
    //Ponteiros podem ser comparados usando:
    //==,!=,>,<,>= e <=
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if (p > p1) {
        printf("p > p1\n");
    }
    else {
        printf("p <= p1\n");
    }

    system("pause");
    return 0;
}