#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WIDTH 10
#define HEIGHT 10

int screen[WIDTH][HEIGHT] = {
    0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
    -1, -1, 0, 0, 0, -1, 0, 0, 0, -1,
    -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, 0, 0, 0, 0, 0, 0

};

void flood_fill(int x, int y)
{
    static int num = 1;

    if (screen[x][y] == 0)
    {
        screen[x][y] = num++;

        if (y + 1 < HEIGHT && screen[x][y + 1] != -1)
            flood_fill(x, y + 1);

        if (x + 1 < WIDTH && screen[x + 1][y] != -1)
            flood_fill(x + 1, y);

        if (x - 1 >= 0 && screen[x - 1][y] != -1)
            flood_fill(x - 1, y);

        if (y - 1 >= 0 && screen[x][y - 1] != -1)
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
    printf("미로:\n");
    printScreen(WIDTH, HEIGHT);

    flood_fill(0, 0); //시작위치

    printf("시작점을 <0 0>으로 한 미로방문 <순서표기>:\n");
    printScreen(WIDTH, HEIGHT);
}
