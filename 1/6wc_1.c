#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int k = 0, fac = 1; // fac은 (k-1)! 을 저장할 변수
    
    printf("Enter the desired 'factorial' value: ");
    scanf("%d", &k); // k에 정수를 입력 받는다.

    // k의 범위를 0 이상인 모든 수로 지정했습니다.
    if(k >= 0) // k가 0보다 큰 수를 입력할 경우
    {
        printf("%d!= %d", k, k); // k* 출력
        // 입력 받은 k 값을 i로 넣고 i가 1보다 작아지면 for문 종료, i는 1씩 감소
        for(int i = k ; i > 1 ; i--) //
        {
            printf("*"); // * 표시 출력
            printf("%d", i-1); // k*는 밖으로 뺐고 (k-1)!을 출력

            fac *= i; // 팩토리얼 계산
            
        }
        printf("= %d\n", fac); // 팩토리얼 출력
    }
    else // 입력 받은 k 값이 0보다 작을 경우 오류를 표시하는 종료
    {
        return 1;
    }
    // 정상 값으로 종료
    return 0;
}
