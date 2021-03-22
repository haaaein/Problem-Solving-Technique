#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateReverse(int n);

int main(void)
{
    int num, revNum, sum = 0;
    int find = 0, count = 0;

    scanf("%d", &num);
    do
    {
        if (num == calculateReverse(num))
        {
            sum = num;
            find = 1;
        }

        else
        {
            revNum = calculateReverse(num);
            sum = num + revNum;

            if (sum < 0)
            {
                printf("Overflow\n");
                break;
            }

            if (sum == calculateReverse(sum))
                find = 1;

            count++;
            num = sum;
        }
    } while (!find);

    if (find == 1)
        printf("%d %d\n", count, sum);
}

int calculateReverse(int n)
{
    int result = 0;

    while (n != 0)
    {
        result *= 10;
        result += n % 10;
        n /= 10;
    }

    return result;
}
