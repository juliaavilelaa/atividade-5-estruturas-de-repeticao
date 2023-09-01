#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, pares = 0, impares = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero%2 == 0) {
            pares++;
        } 
        else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
