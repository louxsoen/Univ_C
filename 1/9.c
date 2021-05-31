#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n정수? ");
    scanf("%x",&a);

    printf("8진수 : 0%o\n", a); // 8진수로 출력하지만 앞에 0을 붙힙니다.
    printf("10진수 : %d\n", a); // 10진수로 출력합니다.
    printf("16진수 : 0x%x\n", a); // 16진수로 출력하지만 앞에 0x를 붙힙니다.
    
}