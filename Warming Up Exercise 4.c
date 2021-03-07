//20181806 컴퓨터학과 여해인

#include <stdio.h>

int main(void)
{
    int array[5];
    int i = 0, key = 0;
    
    printf("Enter 5개의 정수: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter a key : ");
    scanf("%d", &key);
    
    for (i = 0; i < 5; i++) {
        if (array[i] == key) {
            key = (i + 1);
            break;
        }
    }
    
    if (key != 0)
        printf("%d번째에 있다.\n", key);
    else
        printf("없다.\n");
}
