#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    double long val, sum = 0; // val은 입력 받을 값, sum은 val 값들을 저장할 변수
    int count; // 값을 몇 개나 받았는지 입력할 값
    char con = 0; // 계속 진행할 지 여부를 판단하는 값

    // count는 0부터 시작하고 con으로 종료 여부 확인, count는 1씩 증가
    for(count = 0 ; con < 1 ; count++) 
    {
        printf(">> input value: ");
        scanf("%Lf", &val);
        
        if(val == 0) // 입력한 값이 0일 경우
        {
            // val과 count가 0인 경우 -> 처음에 0을 입력한 경우
            if(count == 0)
            {
                printf("ONLY 0 entered!\n"); // 0을 입력했다고 표시
                return 0; // 오류는 아니니 1보다 0으로 반환
            }
            // val이 0이지만 count가 0이 아닌 경우 -> 반복문을 몇 번 거치다 0을 입력
            else 
            {
                con++; // con에 1을 더해 다음 for문을 탈출
                continue; // 오류 방지를 위해 아래 함수를 무시하고 for문으로 이동
            }
            continue; // 오류 방지
        }
        // val이 0이 아닌 경우 -> 값을 0이 아닌 실수로 입력한 경우
        else 
        {
            sum += val; // sum이라는 변수에 sum + val을 넣음 (sum은 0으로 초기화 되어있음)
            continue; // 오류 방지를 위해 아래 함수를 무시하고 for문으로 이동
        }
        continue; // 사용하지 않는 함수 구간 오작동 방지 목적
    }
        
    printf("Sum: %.0Lf, Avg: %.1Lf\n", sum, sum/--count); // 결과 값 출력
    // 마지막에 0을 입력한 경우도 count수가 올라가는데 --count를 통해 정상 평균값 출력
        
    return 0; // 정상 코드 종료
}
/*
1 Step
계속 계산하는 계산기를 만든다.
2-1 Step
count가 0이면서 val이 0일 때 -> 처음부터 0을 입력했으므로 
0만 입력되었다는 문구를 출력한다.
2-2 Step
count가 0이면서 val이 0이 아닐 때 -> 숫자를 입력하다가 중간에 0을 입력했으므로 
for문을 종료하고 결과 값을 출력한다.
con이라는 변수가 0이 되면 for문은 무한반복
1이 되면 for문은 종료된다.

2-3 Step
val이 0이 아닐 경우 sum이라는 변수에 sum + val 을 입력한다.

*/

