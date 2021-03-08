//20181806 컴퓨터학과 여해인

#include <stdio.h>

void initArray (int *a, int size)
{
    int i;
    
    printf("5개의 정수를 입력하시오: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void printArray (int *a, int size)
{
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
}

void reverseArray (int *a, int size)
{
    int i;
    
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
}

int main()
{
    int array[5];
    
    initArray(array, 5);
    printArray(array, 5);
    reverseArray(array, 5);
}
