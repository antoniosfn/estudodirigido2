#include <stdio.h>

int main() {
    int n;
    float vetorOriginal[20];
    float vetorQuadrado[20];

    
    printf("Digite o número de elementos no conjunto (até 20): ");
    scanf("%d", &n);

    if (n <= 20) {
        
        printf("Digite os %d valores do conjunto:\n", n);
        for (int i = 0; i < n; i++) {
            printf("Elemento %d: ", i + 1);
            scanf("%f", &vetorOriginal[i]);
        }

        
        for (int i = 0; i < n; i++) {
            vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
        }

        
        printf("Conjunto Original:\n");
        for (int i = 0; i < n; i++) {
            printf("%.2f ", vetorOriginal[i]);
        }

        
        printf("\nConjunto com Quadrados:\n");
        for (int i = 0; i < n; i++) {
            printf("%.2f ", vetorQuadrado[i]);
        }

        printf("\n");
    } else {
        printf("O número de elementos deve ser no máximo 20.\n");
    }

    return 0;
}
