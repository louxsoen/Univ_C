#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[256];
    int count = 0;
    
    printf("문자열? ");
    scanf("%s", str);
    
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(isalpha(str[i]))     count++;
    }
    printf("영문자의 개수 : %d\n", count);
}