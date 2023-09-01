#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, div2 = 0, div3 = 0, div5 = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            div2++;
        }
        if (numero % 3 == 0) {
            div3++;
        }
        if (numero % 5 == 0) {
            div5++;
        }
    }

    printf("Quantidade de numeros divisiveis por 2: %d\n", div2);
    printf("Quantidade de numeros divisiveis por 3: %d\n", div3);
    printf("Quantidade de numeros divisiveis por 5: %d\n", div5);

    return 0;
}
