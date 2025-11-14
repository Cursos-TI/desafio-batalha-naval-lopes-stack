#include <stdio.h>

// Desafio Batalha Naval NÍVEL MESTRE 
#define TAM 10     // tamanho do tabuleiro
#define NAVIO 3    // marcação 3
#define CONE 1     // marcação 1
#define OCT 2      // marcação 2

int main() {
        int t[TAM][TAM] = {0};
    int i, j;

    // --- NAVIOS (3) ---
    t[0][3] = NAVIO;
    t[1][3] = NAVIO;

    t[2][1] = NAVIO;
    t[2][2] = NAVIO;
    t[2][3] = NAVIO;
    t[2][4] = NAVIO;
    t[2][5] = NAVIO;

    t[3][3] = NAVIO;
    t[4][3] = NAVIO;

    // --- ÁREA OCTAEDRO / CRUZ (2) ---
    t[3][7] = OCT;

    t[4][6] = OCT;
    t[4][7] = OCT;
    t[4][8] = OCT;

    t[5][5] = OCT;
    t[5][6] = OCT;
    t[5][7] = OCT;
    t[5][8] = OCT;
    t[5][9] = OCT;

    t[6][6] = OCT;
    t[6][7] = OCT;
    t[6][8] = OCT;

    t[7][7] = OCT;

    // --- ÁREA DO CONE (1) ---
    t[5][2] = CONE;

    t[6][1] = CONE;
    t[6][2] = CONE;
    t[6][3] = CONE;

    t[7][0] = CONE;
    t[7][1] = CONE;
    t[7][2] = CONE;
    t[7][3] = CONE;
    t[7][4] = CONE;

    // --- IMPRIMIR TABULEIRO ---
    printf("  ");
    for (j = 0; j < TAM; j++)
        printf("%d ", j);
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (j = 0; j < TAM; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
