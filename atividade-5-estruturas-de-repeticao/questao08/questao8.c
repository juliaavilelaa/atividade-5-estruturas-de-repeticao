#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1, soma = 0;

    while (i <= 100) {
        soma += i;
        i++;
    }

    printf("A soma dos numeros de 1 a 100 eh %d\n", soma);

    return 0;
}