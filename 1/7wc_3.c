#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int getGCD();

int main()
{
    int first, second; // 두 수를 입력받아 저장할 변수 (first, second) 선언
    printf("첫 번째 정수를 입력해주세요 : ");
    scanf("%d", &first);
    printf("두 번째 정수를 입력해주세요 : ");
    scanf("%d", &second);
    
    int gcd = getGCD(first, second);

    printf("두 수의 최대공약수( gcd(%d, %d) )는 %d 입니다.\n", first, second, getGCD(first, second));
}

int getGCD(int first, int second) // 최대공약수를 구하는 함수
{
    int gcd; // gcd 변수는 입력받은 두 수의 최대공약수를 저장할 변수

    /*
    1부터 시작하는 이유는 서로수의 gcd는 1이기 때문이다.
    first와 second 값을 자기 자신이 아닌 i로 
    나누어 떨어지는 숫자중 제일 큰 수가
    최대공약수라는 점을 이용해 gcd를 구할 수 있다.
    */
    for( int i = 1 ; i<= first ; i++) 
    {
        if ( first % i == 0 && second % i == 0 ) // 두 수가 i에 의해 나누어 떨어질 경우
        {
            gcd = i; // 당시 i의 숫자를 gcd로 대입
        }
    }
    return gcd; // 최종 gcd를 반환한다.
}