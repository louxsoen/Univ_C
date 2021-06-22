#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int num, s = 0; // num은 입력받을 수, s는 num의 약수 개수
    printf("양의 정수? ");
    scanf("%d", &num);
    
    for(int i = 1 ; i <= num ; i++) // 1부터 1씩 증가하는 수로 여러번 나누어본다.
    {
        if(num % i == 0) // 나누어 떨어질 경우
        {
            s++; // s를 하나 추가한다. s가 1이거나 3이상일 경우엔 소수가 아니게 된다.
        }
    }
    
    if(s == 2) // 약수가 2개인 경우는 소수
    {
        printf("%d는 소수입니다.", num);
    }
    else // 그외
    {
        printf("%d는 소수가 아닙니다.", num);
    }
    //printf("%d", s); // 해당 코드는 약수의 개수를 출력
    printf("\n");
    return 0;
}
    
/* 기획
변수 s를 추가한다.
num % i를 한다. i는 1부터 1씩 증가한다
그리고 i <= num을 해주면 i는 num만큼 나누어본다
num % i 가 0이 아니면 나누어 떨어지지 않는다.
num % i가 0이면 s++
*/
