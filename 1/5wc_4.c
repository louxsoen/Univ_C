#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>


int main()
{
    int grade;

    printf(">> Input grade(1~5): "); 
    scanf(" %d", &grade);

    if(grade == 1) // 만약 grade가 1일 경우
    {
        printf("Very good!\n");
    }
    else if(grade <= 3) // grade가 2~3일 경우
    {
        printf("Good!\n");
    }
    else if(grade <= 5) // grade가 4~5일 경우
    {
        printf("Not bad!\n");
    }
    else // 그 외 입력은 오류 처리
    {
        printf("Input error!\n");
    }
}