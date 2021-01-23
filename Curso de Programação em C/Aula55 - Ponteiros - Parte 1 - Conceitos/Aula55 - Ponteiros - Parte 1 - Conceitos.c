#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    - Variáveis: armazenam dados: int, float, double,
    char, struct e etc
    - Ponteiros: tipo especial de variável 
    que armazenam endereços de memória.
    */

    /*
    Forma geral de declaração
    Variávreis:
    tipo_variável nome_variável
    int x
    Ponteiros:
    tipo_ponteiro *nome_ponteiro
    int *x
    int x, *y;
    */

    /*
    Ponteiros não inicializados apontam
    para um lugar indefinido.
    int *p;
    Um ponteiro pode ter um valor especial NULL,
    que é o endereço de nenhum lugar.
    int *p = NULL;
    */

    /*
    //Podemos apontar o ponteiro para uma
    //variável que já exista no nosso programa.
    int x = 10; //Variável
    int *p; //Ponteiro
    //Ponteiro p aponta para a veriável x
    p = &x;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("p = %d\n",p);
    */

    /*
    //Para acessar o valor da variável
    //apontada por um ponteiro, basta
    //usar o operador asterisco (*)
    int x = 10; //variável
    int *p; //ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n",x);
    printf("p = %d\n",p);
    printf("*p = %d\n",*p);
    */
    
    //O operador asterisco (*) permite
    //modificar o conteúdo da posição
    //de memória apontada
    int x = 10; //variável
    int *p; //ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n",x);
    *p = 12;
    printf("*p = %d\n",*p);
    printf("x = %d\n",x);
    
    system("pause");
    return 0;
}