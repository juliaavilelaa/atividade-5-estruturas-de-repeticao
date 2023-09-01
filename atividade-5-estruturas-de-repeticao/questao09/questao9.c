#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 1, produto = 1;

    while (numero <= 5) {
        produto *= numero; 
        numero++; 
    }

    printf("O produto dos numeros de 1 a 5 eh: %d\n", produto);

    return 0;
}
