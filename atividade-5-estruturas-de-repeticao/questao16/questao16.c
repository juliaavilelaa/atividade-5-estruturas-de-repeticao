#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont = 0, aprovados = 0, nota;

    printf("Digite as notas dos 5 alunos:\n");

    while (cont < 5) {
        printf("Nota do aluno %d: ", cont+1);
        scanf("%d", &nota);
        if (nota >= 7) {
            aprovados++;
        }
        cont++;
    }
    printf("%d alunos foram aprovados.\n", aprovados);

    return 0;
}