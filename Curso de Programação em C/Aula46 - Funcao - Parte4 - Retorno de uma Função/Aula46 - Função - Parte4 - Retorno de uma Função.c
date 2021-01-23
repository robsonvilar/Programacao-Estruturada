#include <stdio.h>
#include <stdlib.h>

int maior (int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main () {

    int x = maior(4,5);
    
    printf("Maior = %d\n", x);

    system("pause");
    return 0;
}