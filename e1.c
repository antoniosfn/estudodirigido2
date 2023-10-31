#include <stdio.h>

int main() {
    int vetor[6]; 
    int i;

    
    for (i = 0; i < 6; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    printf("Valores lidos:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
