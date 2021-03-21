#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int functionH(int n)
{
    int sum = 0, i;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        for (i = 0; i < n; i++)
            sum += functionH(i) * functionH((n - 1) - i);
        return sum;
    }
}

int main(void)
{
    int num;

    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        printf("%d\n", functionH(num));
    } while (num != -1);
}
