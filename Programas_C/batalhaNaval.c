#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#define LINHA 10
#define COLUNA 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[LINHA][COLUNA] = {0};
    int i, j, k;

    //navio vertical
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[2 + k][2] = 3;
    }
    //navio horizontal
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[8][5 + k] = 3;
    }
    //navio diagonal
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[1 + k][5 + k] = 3;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
