#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf(">>Input score(0~100): ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100) // 0에서 100 사이 (정상 값)을 입력 받았을 경우
    {
        switch (score / 10) // 점수에서 10을 나누어 10의 자리수를 비교
        {
        case 10 : // 10의 자리수가 10일 때 (100점일 떄) 
            grade = 'A';
            break;
        case 9 : // 10의 자리수가 9일 때 (90점대일 때)
            grade = 'A';
            break;
        case 8 : // 10의 자리수가 8일 때 (80점대일 때)
            grade = 'B';
            break;
        case 7 : // 10의 자리수가 7일 때 (70점대일 때)
            grade = 'C';
            break;
        case 6 : // 10의 자리수가 6일 때 (60점대일 때)
            grade = 'D';
            break;
        default: // 그 외 포함되지 않을 때 (60점 미만일 때)
            grade = 'F';
            break;
        }
        printf("→ %d is a/an %c\n", score, grade); // 출력
    }

    else // 값이 0 ~ 100가 아닐 때
    {
        printf("Input error!\n"); 
    }


}