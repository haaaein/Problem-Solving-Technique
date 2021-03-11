#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WIDTH 10
#define HEIGHT 10
int screen[WIDTH][HEIGHT] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, 0, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
    -1, -1, -1, 0, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, 0, 0, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

void flood_fill(int x, int y)
{
    int num;

    if (screen[x][y] == 0)
    {
        screen[x][y] = 9;

        flood_fill(x + 1, y);
        flood_fill(x - 1, y);
        flood_fill(x, y + 1);
        flood_fill(x, y - 1);
    }
}

void printScreen(int width, int height)
{
    int i, j;

    for (i = 0; i < WIDTH; i++)
    {
        for (j = 0; j < HEIGHT; j++)
            printf("%3d", screen[i][j]);
        printf("\n");
    }

    printf("\n");
}

int main(void)
{
    printScreen(WIDTH, HEIGHT);
    flood_fill(4, 3); //시작위치
    printScreen(WIDTH, HEIGHT);
}
