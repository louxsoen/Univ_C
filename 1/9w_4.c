#include <stdio.h>

void su(); // su 함수가 있음을 컴파일러에게 알림

int main()
{
    int a, g, q[10]; // a는 첫 항, g는 공차, 배열 q는 등차수열
    int* p = q; // 포인터 p는 q 배열의 주소 

    printf("첫 번째 항? "); // 입력 받기
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &g);

    q[0] = a; // q[0]은 첫 항
    su(g, &q); // su 함수로 인자 보내기
    
    printf("등차수열 : %d", a);  // 등차수열 출력
    for(int i = 1 ; i < 10 ; i++)
        printf(" %d", q[i]);
    printf("\n");
    
}

void su(int plus, int* a) // plus는 공차
{
    for(int i = 1 ; i < 10 ; i++) // 더하는 작업
        a[i] = a[i - 1] + plus;
}