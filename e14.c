#include <stdio.h>
#include <math.h>

#define TAMANHO 10

float calcularMedia(float vetor[]) {
    float soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += vetor[i];
    }
    return soma / TAMANHO;
}

float calcularDesvioPadrao(float vetor[], float media) {
    float somaDosQuadrados = 0;
    for (int i = 0; i < TAMANHO; i++) {
        somaDosQuadrados += pow(vetor[i] - media, 2);
    }
    return sqrt(somaDosQuadrados / TAMANHO);
}

int main() {
    float vetor[TAMANHO];
    printf("Digite os %d números do vetor:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

    float media = calcularMedia(vetor);
    float desvioPadrao = calcularDesvioPadrao(vetor, media);

    printf("O desvio-padrão do vetor é: %.2f\n", desvioPadrao);

    return 0;
}