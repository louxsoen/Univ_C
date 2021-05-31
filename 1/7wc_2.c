#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int getSign(); // getSign 함수가 존재한다는 사실을 컴파일러에게 알립니다.

int main() // 메인 함수
{
    int val, sum = 0; // val은 입력받을 값, sum은 입력 받은 값을 더할 값

    for(int i = 1; i <= 10 ; i++) // 총 10번 실행합니다.
    {
        printf("(%d) input val: ", i); 
        scanf("%d", &val); // val 값을 입력 받습니다.

        sum += getSign(val); // sum에다가는 sum 값에 getSign에게 val을 넣고 반환 받은 값을 더합니다.
    }
    
    printf("-> sum of positive values : %d\n", sum); // sum을 출력합니다.
}

int getSign(int val) // getSign 함수에 입력받은 값은 val에 저장
{
    if(val > 0) // val이 양수일 경우
    {
        return val; // 그대로 val 값을 반환
    }
    else // val이 양수가 아닌 경우
    {
        val = 0; // val 값을 0으로 바꾼다
        return val; // val을 반환 ( val 값인 0을 반환 )
    }
}