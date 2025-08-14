#include <stdio.h>

int main() {
    // Cria um tabuleiro 10x10
    int tabuleiro[10][10];
    
    // Preenche o tabuleiro com 0 (água)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posicionamento do navio vertical
    int xNavioV = 2; // coluna do navio vertical
    int yNavioV = 3; // linha do navio vertical
    int tamanhoNavioV = 3;

    // Posicionamento do navio horizontal
    int xNavioH = 5; // coluna do navio horizontal
    int yNavioH = 6; // linha do navio horizontal
    int tamanhoNavioH = 3;

    // Coloca o navio vertical no tabuleiro (marcando com 3)
    for (int i = 0; i < tamanhoNavioV; i++) {
        tabuleiro[yNavioV + i][xNavioV] = 3;
    }

    // Coloca o navio horizontal no tabuleiro (marcando com 3)
    for (int i = 0; i < tamanhoNavioH; i++) {
        tabuleiro[yNavioH][xNavioH + i] = 3;
    }

    // Mostra o tabuleiro completo
    printf("\n--- Tabuleiro Final ---\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
