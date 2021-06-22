#pragma warning(disable:4339)
#pragma warning(disable:6033)
#include <stdio.h>

int main()
{
    int num, n, s; // num은 양의 정수 입력하는 변수, n은 배수의 개수 입력하는 정수, s는 값을 저장할 변수
    printf("양의 정수? ");
    scanf("%d", &num);
    printf("배수의 개수? ");
    scanf("%d", &n);

    for(int i = 1 ; i < n + 1 ; i++) // i는 배수의 개수 + 1 만큼 반복하게 한다.
    {
        s = num * i; // s라는 변수 사용을 통해 양의 정수와 배수의 개수 값을 변경하지 않아도 된다.
        printf("%d ", s); // s를 출력
    }
    printf("\n");
    return 0;
}