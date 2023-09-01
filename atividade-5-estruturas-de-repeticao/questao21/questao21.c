#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, quantidade = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;  
        }
        if (numero >= 1000 || numero <= -1000) {
            quantidade++;
        }
    }

    printf("Quantidade de numeros com mais de tres digitos: %d\n", quantidade);

    return 0;
}
