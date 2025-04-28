#include <stdio.h>

int main() {
    int tabuleiro[10][10]; 
    int navioHorizontal[3] = {3, 3, 3}; 
    int navioVertical[3] = {3, 3, 3}; 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int linhaHorizontal = 2; 
    int colunaHorizontal = 3; 

    int linhaVertical = 5; 
    int colunaVertical = 7; 

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }
    
    printf("Tabuleiro de Batalha Naval:\n\n");

    for (int i = 0; i < 10; i++) { // 
        for (int j = 0; j < 10; j++) { 
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
