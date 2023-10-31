#include <stdio.h>

int main() {
    int vetor[8]; 
    int x, y;

    
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite o valor de X (0-7): ");
    scanf("%d", &x);
    printf("Digite o valor de Y (0-7): ");
    scanf("%d", &y);

    
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("As posições X e Y estão fora dos limites do vetor.\n");
    }

    return 0;
}
