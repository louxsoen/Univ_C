#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int getSum(); // getSum이라는 함수가 있음을 컴파일러에게 인식해주는 함수.

int main() // 메인 함수
{
    int value; // value은 입력 받은 값을 저장할 변수
    printf(">> Enter value : "); 
    scanf("%d", &value);

    printf("-> sum(%d) ---> %d\n", value, getSum(value)); // getSum 함수에 value 값을 대입해서 반환된 값을 출력
}

int getSum(int value) // getSum함수는 임의의 정수를 입력 받아서 합을 구하는 함수.
{
    int sum = 0; // 더한 값을 저장하는 변수

    if(value >= 0) // 만약 0보다 크거나 같은 자연수가 입력 되었을 때
    {
        for (int i = 1 ; i <= value ; value--) // i = 1로 두고 i가 value값보다 작거나 같을 때까지 value을 한 차례가 끝나면 --로 감산해준다.
        {
            sum += value; // sum에는 sum+value 값을 저장
        }
    }
    else if (value < 0) // 만약 음수일 경우
    {
        for (int i = value - 1 ; value <= 0 ; value++) // i는 value + 1 로 두고 value가 0보다 작거나 같을 때까지 value을 ++으로 증감해준다.
        {
            sum += value; // sum에는 sum+value 값을 저장
        }
    }

    return sum; // sum 값을 반환
}

