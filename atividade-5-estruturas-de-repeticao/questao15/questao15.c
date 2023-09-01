#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 1;

    while (numero <= 50) {
        if (numero % 3 == 0) {
            printf("%d\n", numero);
        }
        numero++;
    }

    return 0;
}
