#include <stdio.h>
#include <math.h>
#define n 10 // 변수를 몇 개 입력 받고 계산할 지 변경 가능하게 만듦.

int main()
{
    //ave는 평균값을 담을 변수, stdDev는 표준편차를 담을 변수
    double input[n], ave, stdDev;
    
    // n번 실행 함수
    for(int i = 0 ; i < n ; i++)
    {
        printf(">> input data (%d): ", i+1); //인풋 데이터
        scanf("%lf", &input[i]); // 배열 스캔
    }
    printf("\n"); // 줄바꿈으로 깔끔하게

    printf("배열의 내용:  ");
    for(int k = 0 ; k < n ; k++)
    {
        printf("%.1lf  ", input[k]); //
        ave += input[k]; // ave는 k번째 배열을 받는 값
    }
    ave /= n; // 받은 만큼 나누어서 평균 내기
    printf("\n");

    printf("-> Ave: %.2lf\n", ave); // ave출력

    for(int j = 0 ; j < n ; j++)
    stdDev += ((input[j] - ave) * (input[j] - ave)) / n;
    // stdDev 표준편차 계산하는 함수
    stdDev = sqrt(stdDev);
    // stdDev를 루트로 취하는 계산
    // stdDev 출력
    printf("-> Standard deviation: %.2lf\n", stdDev);

    return 0; // 정상종료
}