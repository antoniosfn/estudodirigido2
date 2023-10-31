#include <stdio.h>

int main() {
    int values[6];
    int i;

    // Lê os valores do teclado e armazena-os no array
    for (i = 0; i < 6; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &values[i]);
    }

    // Imprimir valores em ordem inversa
    printf("Values in reverse order:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", values[i]);
    }

    return 0;
}