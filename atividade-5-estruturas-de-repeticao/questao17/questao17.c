#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, pares = 0, primeiroimpar = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero%2 == 0 && !primeiroimpar) {
            pares++;
        }
        else if (numero%2 != 0) {
            primeiroimpar = 1;
        }
    }

    printf("Quantidade de numeros pares antes do primeiro numero impar: %d\n", pares);

    return 0;
}
