#define MAX_LEVEL 5
#define MAX_WIDTH 70
char screen[MAX_LEVEL][MAX_WIDTH];
#include <stdio.h>
void draw_tree(int row, int left, int right)
{
    int mid;

    if (right - left < 2)
        return;

    mid = (right + left) / 2;

    printf("**테스트 row=%d left=%d right=%d mid=%d\n", row, left, right, mid);
    printf("  (%d %d)에 x를 찍는다\n", row, mid);

    screen[row][mid] = 'X';
    draw_tree(++row, left, (mid - 1));  //왼쪽
    draw_tree(row++, (mid + 1), right); //오른쪽
}

void init(char s[][MAX_WIDTH])
{
    int i, j;
    for (i = 0; i < MAX_LEVEL; i++)
        for (j = 0; j < MAX_WIDTH; j++)
            s[i][j] = '-';
}

void display(char s[][MAX_WIDTH], int width)
{
    int i, j;
    for (i = 0; i < MAX_LEVEL; i++)
    {
        for (j = 0; j < width; j++)
            printf(" %c", s[i][j]);
        printf("\n");
    }
}
int main(void)
{
    int width;

    init(screen);

    printf("Enter a width(<= 70) of a screen: ");
    scanf("%d", &width);

    draw_tree(0, 0, width - 1);
    display(screen, width);
}
