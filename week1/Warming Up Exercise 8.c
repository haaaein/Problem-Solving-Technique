//20181806 컴퓨터학과 여해인

#include <stdio.h>
#include <string.h>

void inputArray (char *s1)
{
    printf("Enter your name: ");
    scanf("%s", s1);
}

void reverseArray (char *s1)
{
    int length, i;
    length = (int)strlen(s1);
    
    printf("Reverse: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", s1[i]);
    }
    
    printf("\n");
}

int main(void)
{
    char s[50];
    
    inputArray(s);
    reverseArray(s);
}
