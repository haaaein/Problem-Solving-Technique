//20181806 컴퓨터학과 여해인

#include <stdio.h>

int isPrime(int x)
{
    int prime = 1;
    int i;
    
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            prime = 0;
            break;
        }
    }
    
    return prime;
}

int main(void)
{
    int n = 2;
    
    while (n <= 30) {
        if (isPrime(n) == 1)
            printf("%d ", n);
        
        n++;
    }
}
