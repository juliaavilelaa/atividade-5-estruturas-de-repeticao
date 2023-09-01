#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero % 10;  
        soma += digito;   
        numero /= 10;   
    }

    printf("A soma dos digitos eh: %d\n", soma);

    return 0;
}
