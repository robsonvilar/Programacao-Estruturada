#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int x = 10;
    int y = 10;
    int z = 2;

    x = x + z;

    printf("x = %d \n", x);

    y += z; //y = y + z

    //y -= z;
    //y *= z;
    //y /= z;
    //y %= z;

    printf("y = %d \n", y);

    system("pause");
    return 0;
}