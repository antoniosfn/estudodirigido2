#include <stdio.h>

#define TAMANHO 10

int main() {
    int array[TAMANHO];
    int contador = 0;
    int i;

    printf("Digite %d valores inteiros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            contador++;
        }
    }

    printf("O vetor contém %d valores pares.\n", contador);

    return 0;
}