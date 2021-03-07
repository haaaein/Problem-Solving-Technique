//20181806 컴퓨터학과 여해인

#include <stdio.h>

int main(void)
{
    char s1[50];
    char ch;
    int count = 0, i;
    
    printf("Enter a String: ");
    scanf("%s", s1);
    
    getchar();
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == ch)
            count++;
    }
    
    printf("'%c' is appeared %d times\n", ch, count);
   
}
