#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    // Utilizando estrutura de repetição FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    // Utilizando estrutura de repetição WHILE
    printf("Movimento do Bispo (5 casas na diagonal - cima e direita):\n");
    int bispoPassos = 1;
    while (bispoPassos <= 5) {
        printf("Cima Direita\n");
        bispoPassos++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    // Utilizando estrutura de repetição DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int rainhaPassos = 1;
    do {
        printf("Esquerda\n");
        rainhaPassos++;
    } while (rainhaPassos <= 8);

    return 0;
}

