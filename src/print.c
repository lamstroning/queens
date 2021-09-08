#include "../include/queens.h"

void printBoard(char **board) {
    int i = -1;
    int j = -1;
    printf("  _A_B_C_D_E_F_G_H_\n");
    while (++i < 8) {
        printf("%d |", i + 1);
        while (++j < 8)
            printf("%c|", board[i][j] == 'Q' ? 'Q' : ' ');
        printf(" %d\n", i + 1);
        j = -1;
    }
    printf("  ¯A¯B¯C¯D¯E¯F¯G¯H¯\n");
}

void showError(char *str) {
    printf("%s", str);
    exit(1);
}