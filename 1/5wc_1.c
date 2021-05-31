#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    char a;
    printf("Input char: ");
    scanf("%c", &a);


    
    if(a >= 'A' && a <= 'Z') // 알파벳 대문자가 입력될 경우
    {
        printf("Changed upper case %c to lower case %c\n", a, a+32);
    } 
    else if ( a >= 'a' && a <= 'z') // 알파벳 소문자가 입력될 경우
    {
        printf("Changed lower case %c to upper case %c\n", a, a-32);
    }
    else
    {
        printf("Input Error!\n"); // 오류 표시
        return 1;
    }
}