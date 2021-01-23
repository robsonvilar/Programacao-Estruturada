#include <stdio.h>
#include <stdlib.h>

int fatorial (int n) {
    if (n == 0) {
        return 1;
    } 
    else {
        return n * fatorial (n - 1);
    }
}

int main () {

    int x = fatorial(5);

    printf("%d\n", x);

    system("pause");
    return 0;
}