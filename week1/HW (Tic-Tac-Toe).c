#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
    int i, j;
    int sum;
    char player = b[r][c];

    //수직오목
    sum = 1;
    i = r;
    j = c;
    while ((i - 1) >= 0 && b[i][j] == player)
    {
        i--;
        if (b[i][j] == player)
            sum++;
    }

    i = r;
    while ((i + 1) < BOARD_SIZE && b[i][j] == player)
    {
        i++;
        if (b[i][j] == player)
            sum++;
    }

    if (sum == 3)
        return 1;

    //수평오목
    sum = 1;
    i = r;
    j = c;
    while ((j + 1) < BOARD_SIZE && b[i][j] == player)
    {
        j++;
        if (b[i][j] == player)
            sum++;
    }

    j = c;
    while ((j - 1) >= 0 && b[i][j] == player)
    {
        j--;
        if (b[i][j] == player)
            sum++;
    }
    if (sum == 3)
        return 1;

    //오른쪽 대각선
    sum = 1;
    i = r;
    j = c;
    while ((i - 1) >= 0 && (j + 1) < BOARD_SIZE && b[i][j] == player)
    {
        j++;
        i--;
        if (b[i][j] == player)
            sum++;
    }

    i = r;
    j = c;
    while ((i + 1) < BOARD_SIZE && (j - 1) >= 0 && b[i][j] == player)
    {
        i++;
        j--;
        if (b[i][j] == player)
            sum++;
    }
    if (sum == 3)
        return 1;

    //왼쪽 대각선
    sum = 1;
    i = r;
    j = c;
    while ((i - 1) >= 0 && (j - 1) >= 0 && b[i][j] == player)
    {
        i--;
        j--;
        if (b[i][j] == player)
            sum++;
    }

    i = r;
    j = c;
    while ((i + 1) < BOARD_SIZE && (j + 1) < BOARD_SIZE && b[i][j] == player)
    {
        i++;
        j++;
        if (b[i][j] == player)
            sum++;
    }
    if (sum == 3)
        return 1;

    return 0;
}

void display(char b[][BOARD_SIZE])
{
    int i, j;
    printf("     ");

    for (i = 0; i < BOARD_SIZE; i++)
        printf("%2d", i);

    printf("\n  -----------------------\n");

    for (i = 0; i < BOARD_SIZE; i++)
    {
        printf("%3d |", i);
        for (j = 0; j < BOARD_SIZE; j++)
            printf(" %c", b[i][j]);
        printf("\n");
    }
}

int main(void)
{
    char board[BOARD_SIZE][BOARD_SIZE];
    char turn = 'X';
    int r = 0, c = 0;
    int i, j;
    int count;
    int win;

    for (i = 0; i < BOARD_SIZE; i++)
        for (j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';

    count = 1;
    display(board);
    do
    {
        printf("Player %c(행 열): ", turn);
        scanf("%d %d", &r, &c);

        if (board[r][c] != ' ')
            continue;

        board[r][c] = turn;
        display(board);

        if ((win = winCheck(board, r, c)))
            printf("Player %c wins!\n", turn);

        count++;
        turn = (turn == 'X' ? 'O' : 'X');
    } while (!win && count <= 9);

    if (!win && count > BOARD_SIZE * BOARD_SIZE)
        printf("Nobody wins!\n");

    return 0;
}
