#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero%10;
        soma += pow(digito, 3);
        numero /= 10;
    }

    printf("A soma dos digitos elevados ao cubo eh: %d\n", soma);

    return 0;
}
