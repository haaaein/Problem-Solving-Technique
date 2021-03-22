#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findOnes(int x, int y);
int main(void)
{
    int A, B = 1;

    scanf("%d", &A);
    while (!findOnes(A, B))
    {
        findOnes(A, B);

        if (B < 0)
        {
            printf("Overflow\n");
            break;
        }

        B++;
    }
}

int findOnes(int x, int y)
{
    int result = x * y;
    int count = 0;

    while (result != 0)
    {
        if (result % 10 != 1)
        {
            count = 0;
            break;
        }

        else
            result /= 10;
        count++;
    }

    if (count != 0)
        printf("%d\n", count);

    return count;
}
