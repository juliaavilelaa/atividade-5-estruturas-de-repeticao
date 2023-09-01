#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, cont = 0;
    float media;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero >= 50 && numero <= 100) {
            soma += numero;
            cont++;
        }
    }

    if (cont == 0) {
        printf("Nenhum numero entre 50 e 100 foi digitado.\n");
    }
    else {
        media = soma/cont;
        printf("A media dos numeros entre 50 e 100 eh: %.2f\n", media);
    }

    return 0;
}
