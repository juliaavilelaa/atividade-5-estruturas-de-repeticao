#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, contador = 0;

    while (1) { 
        printf("Digite um numero inteiro (-1 para parar): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; 
        }
        soma += numero;
        contador++;
    }

    if (contador == 0) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        float media = soma/contador;
        printf("A media dos numeros digitados eh: %.2f\n", media);
    }

    return 0;
}
