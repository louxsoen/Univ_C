#include <stdio.h>

int main(void)
{
    int val = 1; // 값을 저장할 val을 1로 초기화한다.
    
    // i 초기값은 1로 초기화한다. 10까지 출력하니 i가 10보다 클 경우 넘어간다
    for(int i = 1 ; i <= 10 ; i++) 
    {
        printf("%d", i);
        if(i == 10) // i가 10일 경우엔 10뒤에 *이 붙으니 break 해준다
        {
            break;
        }
        else if(i % 2 == 1) // 홀수 뒤에 -가 붙으니 나머지가 1인 경우
        {
            printf(" - ");
            val -= i+1; // 계산
        }
        else
        {
            printf(" + "); // 짝수 뒤에 +가 붙으니 나머지가 1이 아닌 경우
            val += i+1; // 계산
        }
    }
    printf (" = %d\n", val); // 출력
    return 0; // 정상 종료
}