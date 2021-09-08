#include "../include/queens.h"

int checkValidCoord(int coord) {
	return coord < 8 && coord >= 0;
}

int disableCell(char **board, int currentY, int currentX) {
    int y = currentY;
    int x = currentX;

    while (checkValidCoord(--y) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;

    while (checkValidCoord(--x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(++x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(++y) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(++y) && checkValidCoord(++x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(--y) && checkValidCoord(++x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(++y) && checkValidCoord(--x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    y = currentY;
    x = currentX;

    while (checkValidCoord(--y) && checkValidCoord(--x) && board[y][x] != 'Q')
        board[y][x] = 'X';

    return 1;
}

void putQueen(char **board, int y, int x, int count) {
    if (!checkValidCoord(y) ||
        !checkValidCoord(x) ||
        board[y][x] != '0')
        return;
    board[y][x] = 'Q';
    disableCell(board, y, x);
    if (count == 8)
        printBoard(board);
    y = 0;
    x = 0;
    while (++y < 8)
    {
        while (++x < 8)
            putQueen(board, y, x, count + 1);
        x = -1;
    }
}

void recursionCall(int coords[]) {
    while (++coords[0] < 8)
    {
        while (++coords[1] < 8)
            putQueen(init(), coords[0], coords[1], 1);
        coords[1] = -1;
    }
}

int	main() {
	int coords[] = {-1, -1};
    recursionCall(coords);
	return (0);
}
