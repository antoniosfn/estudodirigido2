#include <stdio.h>

#define TAMANHO 10

int main() {
    double vetor[TAMANHO];
    int contador = 0;
    double positivo = 0;
    int i;

    printf("Digite %d valores reais:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%lf", &vetor[i]);
        if (vetor[i] < 0) {
              contador++;
        } else {
              positivo += vetor[i];
        }
    }

    printf("O vetor contém %d números negativos.\n", contador);
    printf("A soma dos números positivos é %.2lf.\n", positivo);

    return 0;
}