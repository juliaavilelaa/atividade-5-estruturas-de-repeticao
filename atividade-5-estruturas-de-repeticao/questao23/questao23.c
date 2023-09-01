#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, menor = -1;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero > 0 && numero%2 != 0) {
            if (menor == -1 || numero < menor) {
                menor = numero;
            }
        }
    }

    if (menor != -1) {
        printf("O menor valor positivo e impar digitado foi: %d\n", menor);
    } else {
        printf("Nenhum valor positivo e impar foi digitado.\n");
    }

    return 0;
}
