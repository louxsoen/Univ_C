#include <stdio.h>

int main()
{
    int score[8], ave;
    printf("중간고사 성적 계산기\n");
    
    for(int i = 0 ; i < 8 ; i++)
    {
        printf("시험점수를 적으시오. (%d과목남음): ", 8 - i);
        scanf("%d", &score[i]); // 스코어 배열
        ave += score[i]; // 평균 변수에 모든 변수 더함
    }
    ave /= 8; // 더한 값에 8로 나누어 평균 값 구함

    printf("당신의 기말고사 평균 점수는 %d점입니다.\n", ave); // 평균 출력
    
    return 0; // 정상 종료
}