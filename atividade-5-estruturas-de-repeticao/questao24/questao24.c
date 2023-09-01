#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, primeiroNumero, ultimoNumero, pares = 0, impares = 0, diferenca;

    printf("Digite o primeiro numero inteiro (ou 0 para sair): ");
    scanf("%d", &primeiroNumero);

    if (primeiroNumero != 0) {
        ultimoNumero = primeiroNumero;

        while (1) {
            printf("Digite um numero inteiro (digite 0 para parar): ");
            scanf("%d", &numero);

            if (numero == 0) {
                break;
            }

            diferenca = abs(numero - ultimoNumero);

            for (int i = 1; i < diferenca; i++) {
                int atual = primeiroNumero + i;
                if (atual % 2 == 0) {
                    pares++;
                } else {
                    impares++;
                }
            }

            ultimoNumero = numero;
        }

        printf("Quantidade de numeros pares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, pares);
        printf("Quantidade de numeros impares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, impares);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}
