#include <stdio.h>

void bubbleSort(float*V, int N) {
  int i, j, trocado=1;

  for (i = 0; i < N && trocado == 1; i++) {
    trocado = 0;
    for (j = 0; j < (N - i - 1); j++) {
      if (V[j] > V[j + 1]) {
        trocado = 1;
        float aux = V[j];
        V[j] = V[j + 1];
        V[j + 1] = aux;
      }
    }
  }
}

int main() {
  float V[10];
  int i;

  
  for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%f", &V[i]);
  }

  
  bubbleSort(V, 10);

  
  printf("\nVetor ordenado:\n");
  for (i = 0; i < 10; i++) {
    printf("%.2f\n", V[i]);
  }

  return 0;
}

