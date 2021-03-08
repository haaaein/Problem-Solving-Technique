//20181806 컴퓨터학과 여해인

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char answer = 'y';
    int array[6];

    srand(time(NULL));
    
    do {
        printf("*** 로또 번호 생성기 ***\n");
        printf("생성 번호: ");
        
        for (i = 0; i <= 5; i++) {
            array[i] = rand() % 45 + 1;
            printf("%d ", array[i]);
        }
        
        printf("\n다시 생성하겠습니까? (y/n): ");
        scanf("%c", &answer);
    
        getchar();
    } while (answer != 'n');
}
