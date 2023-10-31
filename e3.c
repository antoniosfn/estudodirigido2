#include <stdio.h>

int main() {
    int vetor[5]; 
    int i;
    int soma = 0; 

    
    for (i = 0; i < 5; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    
    float media = (float)soma / 5;

    
    printf("Valores lidos:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
