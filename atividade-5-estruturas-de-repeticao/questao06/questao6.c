#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) { 
        if (i%2 == 0) {     
            soma += i; 
        }
    }

    printf("A soma dos digitos pares eh: %d\n", soma);
    
    return 0;
}