#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i, j;
    int iguais = 0;

    printf("Digite %d valores inteiros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                iguais = 1;
            }
        }
    }

    if (!iguais) {
        printf("Não há valores iguais no vetor.\n");
    }

    return 0;
}