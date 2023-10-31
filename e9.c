#include <stdio.h>

int main() {
    int A[10];
    int B[10];
    int C[10];
    int i;

    
    printf("Digite os 10 valores para o array A:\n");
    for (i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    
    printf("Digite os 10 valores para o array B:\n");
    for (i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    
    for (i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    
    printf("Valores do array C (C = A - B):\n");
    for (i = 0; i < 10; i++) {
        printf("C[%d]: %d\n", i, C[i]);
    }

    return 0;
}


