#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    //Ponteiro genéico: pode apontar
    //para todos os tipos de dados
    //existentes ou que ainda serão criados
    //Forma geral
    void *nome_ponteiro;
    //Exemplo 
    void *v;
    */
    
    /*
    //Ponteiro genérico:
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    pp = &p2; //Endereço  de int
    printf("Endereco em pp: %p \n", pp);
    pp = &p1; //Endereço de int*
    printf("Endereco em pp: %p \n", pp);
    pp = p1; //Endereço de int
    printf("Endereco em pp: %p \n", pp);
    */

    /*
    //Antes de acessar o conteúdo é preciso
    //converter o ponteiro genérico para o
    //tipo de ponteiro com o qual se deseja
    //trabalhar
    void *pp;
    int p2 = 10;
    pp = &p2;
    printf("Conteudo: %d\n", *(int*)pp);
    */

    //As operações aritméticas são
    //sempre realizadas com base em
    //uma unidade de memória (1 byte)
    void *p = 0x5DC; //1500
    printf("p = %d \n",p);
    p++;
    printf("p = %d \n",p); //1501
    p = p + 15;
    printf("p = %d \n",p); //1516
    p = p - 2;
    printf("p = %d \n",p); //1514 

    system("pause");
    return 0;
}