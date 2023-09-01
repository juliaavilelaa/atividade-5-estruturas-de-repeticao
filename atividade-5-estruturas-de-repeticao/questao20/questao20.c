#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, somadiv3 = 0, cont = 0;
    float media;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero%3 == 0) {
            somadiv3 += numero;
            cont++;
        }
    }

    if (cont == 0) {
        printf("Nenhum numero divisivel por 3 foi digitado.\n");
    } else {
        media = somadiv3 / cont;
        printf("A media dos numeros divisiveis por 3 eh: %.2f\n", media);
    }

    return 0;
}
