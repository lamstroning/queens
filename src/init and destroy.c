#include "../include/queens.h"

char **init() {
    char **board;
    int i = -1;
    int j = -1;

    board = (char**)malloc(sizeof(char*) * 8);

    if (!board)
        showError("desk malloc Error!");
    while (++i < 8)
    {
        board[i] = (char*)malloc(sizeof(char) * 9);
        while (++j < 8)
            board[i][j] = '0';
        board[i][j] = '\0';
        j = -1;
    }
    return (board);
}