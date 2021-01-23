#include <stdio.h>
#include <stdlib.h>

int Soma(n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + Soma(n-1);
    }
}


int main () {

    int x = Soma(5);

    printf("%d\n", x);

    system("pause");
    return 0;
}