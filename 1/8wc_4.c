#include <stdio.h>
// 등비수열 구하는 프로그램
int main() 
{
    int a, r, AR[10]; // a는 첫 항, r은 공비, AR은 등비수열을 저장하는 변수
    // 값 입력 받음
    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &r);

    AR[0] = a;  // AR의 첫 항은 a로 초기화
    printf("등비수열 : %d ", AR[0]); // 첫 항 출력 
    for (int i = 1; i < 10; i++) 
    {
        AR[i] = AR[i - 1] * r;  // 등비수열 계산
        printf("%d ", AR[i]);  // 등비수열 출력
    }
    printf("\n");

    return 0; // 정상 종료

}