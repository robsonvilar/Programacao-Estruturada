#include <stdio.h>
#include <stdlib.h>

int main () {

    int x = 10;
    int y = 10;

    x++;
    ++y;

    printf("x = %d \n",x);
    printf("y = %d \n",y);

    x--;
    --y;

    printf("x = %d \n",x);
    printf("y = %d \n",y);

    system("pause");
    return 0;
}