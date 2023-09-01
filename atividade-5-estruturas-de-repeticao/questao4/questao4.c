#include <stdio.h>
#include <stdlib.h>

int main() {
    int pessoas = 5;
    float altura, soma = 0;

    printf("Insira a altura das 5 pessoas:\n");

    for (int i = 0; i < pessoas; i++) {
        printf("Altura da pessoa %d: ", i+1);
        scanf("%f", &altura);
        soma += altura;
    }

    printf("A media das alturas eh: %.2f\n", soma/pessoas);

    return 0;
}