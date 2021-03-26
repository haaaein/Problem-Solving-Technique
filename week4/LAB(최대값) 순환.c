#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int max1(int list[], int low, int high)
{
    int max, i;
    max = list[0];

    for (i = low; i < high; i++)
    {
        if (list[i] > max)
            max = list[i];
    }

    return max;
}

int max2(int list[], int low, int high)
{
    int middle = (low + high) / 2;
    int leftMax, rightMax;

    if (low > high)
        return 1;
    else
    {
        leftMax = max2(list, low + 1, middle);
        if (list[low] > leftMax)
            leftMax = list[low];
        printf("list[low] %d leftMax %d middle %d low %d high %d \n", list[low], leftMax, middle, low, high);

        rightMax = max2(list, middle + 1, high);
        if (list[low] > rightMax)
            rightMax = list[low];
        printf("list[low] %d rightMax %d middle %d low %d high %d \n", list[low], rightMax, middle, low, high);
    }

    if (leftMax > rightMax)
        return leftMax;
    else
        return rightMax;
}

int main(void)
{
    int list[] = {10, 20, 100, 4, 5, 45, 3, 99, 11, 22};

    printf("가장 큰 수는 %d\n", max1(list, 0, 9)); //100
    printf("가장 큰 수는 %d\n", max2(list, 0, 9)); //100

    printf("가장 큰 수는 %d\n", max1(list, 5, 9)); //99
    printf("가장 큰 수는 %d\n", max2(list, 5, 9)); //99

    printf("가장 큰 수는 %d\n", max1(list, 3, 6)); //45
    printf("가장 큰 수는 %d\n", max2(list, 3, 6)); //45

    return 0;
}
