#include <stdio.h>

int main(void)
{
    int total = 1;
    int i = 1;
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (i <= n) {
        total *= 2;
        i++;
    }
    
    printf("%d\n", total);
}
