//20181806 컴퓨터학과 여해인

#include <stdio.h>

int total(int n)
{
    int sum = 0;
    int i = 1;
    
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    
    return sum;
}

int main(void)
{
    int num = 0;
    
    while (num != -1) {
        printf("Input a number(-1 for exit): ");
        scanf("%d", &num);
        
        if (num == -1)
            break;
        
        printf("1부터 %d까지의 합은 %d\n", num, total(num));
    }
}
