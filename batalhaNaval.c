#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[8][8];

    // Navio vertical
    int inicioX_vertical = 2;
    int inicioY_vertical = 1;
    int tamanho_vertical = 3;

    // Navio horizontal
    int inicioX_horizontal = 1;
    int inicioY_horizontal = 5;
    int tamanho_horizontal = 4;

    // Preencher o tabuleiro com 0
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Colocar navio vertical (marcando com 1)
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[inicioY_vertical + i][inicioX_vertical] = 1;
    }

    // Colocar navio horizontal (marcando com 2)
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[inicioY_horizontal][inicioX_horizontal + i] = 2;
    }

    // Mostrar as coordenadas do navio vertical
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", inicioX_vertical, inicioY_vertical + i);
    }

    // Mostrar as coordenadas do navio horizontal
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanho_horizontal; i++) {
        printf("(%d, %d)\n", inicioX_horizontal + i, inicioY_horizontal);
    }

    return 0;
}
