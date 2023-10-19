#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 5
#define MAX_ATTEMPTS 15

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    int attempts = 0;
    int hits = 0;

    srand(time(NULL));

    for (int i = 0; i < NUM_SHIPS; i++) {
        int x, y;
        do {
            x = rand() % BOARD_SIZE;
            y = rand() % BOARD_SIZE;
        } while (board[x][y] == 1);
        board[x][y] = 1;
    }

    printf("Bem-vindo ao jogo de Batalha Naval!\n");

    while (attempts < MAX_ATTEMPTS && hits < NUM_SHIPS) {
        int guessX, guessY;

        printf("Tentativa %d de %d\n", attempts + 1, MAX_ATTEMPTS);
        printf("Informe a coordenada X (0-9): ");
        scanf("%d", &guessX);
        printf("Informe a coordenada Y (0-9): ");
        scanf("%d", &guessY);

        if (guessX < 0 || guessX >= BOARD_SIZE || guessY < 0 || guessY >= BOARD_SIZE) {
            printf("Coordenadas fora do tabuleiro. Tente novamente.\n");
            continue;
        }

        if (board[guessX][guessY] == 1) {
            printf("Você acertou um navio!\n");
            board[guessX][guessY] = 2; // Marcar como atingido
            hits++;
        } else if (board[guessX][guessY] == 0) {
            printf("Você errou. Não há nenhum navio nessa posição.\n");
            board[guessX][guessY] = -1; // Marcar como água atirada
        } else if (board[guessX][guessY] == -1 || board[guessX][guessY] == 2) {
            printf("Você já atirou nessa posição. Tente novamente.\n");
        }

        attempts++;
    }

    if (hits == NUM_SHIPS) {
        printf("Parabéns! Você afundou todos os navios em %d tentativas.\n", attempts);
    } else {
        printf("Fim de jogo. Você esgotou todas as tentativas. Navios restantes: %d\n", NUM_SHIPS - hits);
    }

    return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 5
#define MAX_ATTEMPTS 15

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    int attempts = 0;
    int hits = 0;

    srand(time(NULL));

    for (int i = 0; i < NUM_SHIPS; i++) {
        int x, y;
        do {
            x = rand() % BOARD_SIZE;
            y = rand() % BOARD_SIZE;
        } while (board[x][y] == 1);
        board[x][y] = 1;
    }

    printf("Bem-vindo ao jogo de Batalha Naval!\n");

    while (attempts < MAX_ATTEMPTS && hits < NUM_SHIPS) {
        int guessX, guessY;

        printf("Tentativa %d de %d\n", attempts + 1, MAX_ATTEMPTS);
        printf("Informe a coordenada X (0-9): ");
        scanf("%d", &guessX);
        printf("Informe a coordenada Y (0-9): ");
        scanf("%d", &guessY);

        if (guessX < 0 || guessX >= BOARD_SIZE || guessY < 0 || guessY >= BOARD_SIZE) {
            printf("Coordenadas fora do tabuleiro. Tente novamente.\n");
            continue;
        }

        if (board[guessX][guessY] == 1) {
            printf("Você acertou um navio!\n");
            board[guessX][guessY] = 2; // Marcar como atingido
            hits++;
        } else if (board[guessX][guessY] == 0) {
            printf("Você errou. Não há nenhum navio nessa posição.\n");
            board[guessX][guessY] = -1; // Marcar como água atirada
        } else if (board[guessX][guessY] == -1 || board[guessX][guessY] == 2) {
            printf("Você já atirou nessa posição. Tente novamente.\n");
        }

        attempts++;
    }

    if (hits == NUM_SHIPS) {
        printf("Parabéns! Você afundou todos os navios em %d tentativas.\n", attempts);
    } else {
        printf("Fim de jogo. Você esgotou todas as tentativas. Navios restantes: %d\n", NUM_SHIPS - hits);
    }

    return 0;
}