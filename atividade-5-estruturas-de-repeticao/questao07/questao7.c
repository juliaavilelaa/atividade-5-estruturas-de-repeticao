#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, numeroInvertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero % 10; 
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    printf("O numero invertido eh: %d\n", numeroInvertido);

    return 0;
}
