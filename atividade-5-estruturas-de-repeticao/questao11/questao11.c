#include <stdio.h>

int main() {
    int numero, maior = 0, menor = 0, inicializador = 1;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (inicializador) {
            maior = numero;
            menor = numero;
            inicializador = 0;
        }
        if (numero == 0) {
            break;
        }
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
