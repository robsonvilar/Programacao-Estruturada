#include <stdio.h>
#include <stdlib.h>

/*
- É uma lista em que seus elementos significam um número.
- Eu posso atribuir qualquer valor a esses elementos.
*/

enum semana{Domingo, 
            Segunda, 
            Terca, 
            Quarta, 
            Quinta, 
            Sexta, 
            Sabado};

int main () {

    enum semana s1, s2, s3;
    s1 = Segunda;
    s2 = Terca;
    s3 = s1 + s2;
    printf("Domingo = %d\n", Domingo);
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);

    if (s3 == Quarta) {
        printf("s3 igual a Quarta\n");
    }

    system("pause");
    return 0;
}