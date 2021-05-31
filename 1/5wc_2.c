#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int a;
    printf("Input value: ");
    scanf("%d", &a);
    
    if(a % 2 == 1) // 숫자를 2로 나누었을 때 나머지가 1이면 홀수
    {
        printf("%d is an odd number!\n", a); // 숫자는 홀수라 출력
    }
    else if(a % 2 == 0) // 숫자를 2로 나누었을 때 나누어 떨어지면 2의 배수
    {
        printf("%d is an even number!\n", a); // 숫자는 짝수라 출력
    }
    else // 나머지 잘못된 값이 입력될 경우
    {
        printf("Input error!\n"); // 잘못된 값을 입력하였을 때 오류 표시
        return 1;
    }

    return 0;
}