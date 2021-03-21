#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int carryOperations(int x, int y);

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d\n", carryOperations(num1, num2));
}

int carryOperations(int x, int y)
{
    int array1[10] = {-1}, array2[10] = {-1};
    int i = 0, lenX = 0, lenY = 0, carry = 0, len = 0;

    do
    {
        array1[i] = (x % 10);
        x /= 10;
        i++;
        lenX++;
    } while (x > 0);

    i = 0;
    do
    {
        array2[i] = (y % 10);
        y /= 10;
        i++;
        lenY++;
    } while (y > 0);

    if (lenX >= lenY)
        len = lenX;
    else
        len = lenY;

    for (i = 0; i < len; i++)
    {
        if ((array1[i] + array2[i]) >= 10)
        {
            carry++;

            if (lenX >= lenY)
                array1[i + 1]++;
            else
                array2[i + 1]++;
        }
    }

    return carry;
}
