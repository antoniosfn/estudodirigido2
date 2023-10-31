#include <stdio.h>

int main() {
  int vetor[100];
  int num = 1;
  int i = 0;

  while (i < 100) {
    if (num % 7 != 0) {
      vetor[i] = num;
      i++;
    }
    num++;
  }

  for (int i = 0; i < 100; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}