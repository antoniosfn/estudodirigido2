#include <stdio.h>

int main() {
  int A[6] = {1, 0, 5, -2, -5, 7}; // Passo a

  int soma = A[0] + A[1] + A[5]; // Passo b
  printf("Sum of A[0], A[1], and A[5]: %d\n", soma);

  A[4] = 100; // Passo c

  printf("Array A:\n"); // Passo d
  for (int i = 0; i < 6; i++) {
    printf("%d\n", A[i]);
  }

  return 0;
}