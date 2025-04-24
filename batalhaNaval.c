#include <stdio.h>

int main() {

    // Declaração e inicialização da matriz do tabuleiro com os navios inclusos
    int tabuleiro[10][10] = {
        {3, 3, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    // Vetores dos navios
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    // Exibição do tabuleiro com os navios posicionados
    printf(" Tabuleiro de batalha: \n");
    printf("\n");

    for(int j = 0; j <= 9; j++) {
        for(int i = 0; i <= 9; i++) {
            printf("%d ", tabuleiro[j][i]);
        }
        printf("\n");
    }

    return 0;
}
