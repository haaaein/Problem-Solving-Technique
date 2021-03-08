//20181806 컴퓨터학과 여해인

#include <stdio.h>

int main(void)
{
    int i, same = 1;
    int array1[5];
    int array2[5];
    
    printf("Enter 첫번째 배열: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter 두번째 배열: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array2[i]);
    }
    
    for (i = 0; i < 5; i++) {
        if (array1[i] != array2[i]) {
            same = 0;
            break;
        }
    }
    
    if (same == 1)
        printf("두 개의 배열은 같다.\n");
    else
        printf("두 개의 배열은 다르다.\n");
}
