#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, num;
    int repetido;

    for (i = 0; i < 10; i++) {
        repetido = 0; 

        do {
            printf("Digite o %do número: ", i + 1);
            scanf("%d", &num);

            
            repetido = 0;
            for (j = 0; j < i; j++) {
                if (num == vetor[j]) {
                    repetido = 1;
                    printf("Esse número já foi digitado. Tente novamente.\n");
                    break;
                }
            }
        } while (repetido); 

        vetor[i] = num;
    }

    printf("Números armazenados no vetor: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
