#include <stdio.h>
#include <stdlib.h>

int main() {
    int notas[5];
    int aprovados = 0;

    printf("Digite as notas dos 5 alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        if (notas[i] >= 7) {
            aprovados++;
        }
    }
    printf("%d alunos foram aprovados.\n", aprovados);

    return 0;
}