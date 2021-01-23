#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    int i,f = 1;
    for (i=1; i<=n; i++) {
        f = f * i;
    }
}

int main () {

    int x, y;
    printf("Digite n: ");
    scanf("%d", &x);
    y = fatorial(x);
    printf("Fatorial de n = %d\n", y);

    system("pause");
    return 0;
}