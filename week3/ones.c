#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findOnes(int x, int y);
int main(void)
{
    int A, B = 1;

    scanf("%d", &A);
    while (findOnes(A, B) == 0)
    {
        if ((A % 2 == 0) || (A % 5 == 0))
            break;
        findOnes(A, B);
        B++;
    }
}

int findOnes(int x, int y)
{
    int result = x * y;
    int count = 0;

    while (result != 0)
    {
        if (result % 10 != 1 || (x == y))
        {
            count = 0;
            break;
        }

        else
            result /= 10;
        //printf("%d ", result);
        count++;
    }

    if (count != 0)
        printf("%d\n", count);

    return count;
}
