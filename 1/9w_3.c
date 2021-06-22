#include <stdio.h>

void print(); // print 라는 함수가 있음을 컴파일러에게 알림

int main()
{
    int arr[10]; // 배열 선언

    print(arr, 10); // 프린트 함수에 보내기

    return 0; // 정상 종료
}

void print(int *R, int n) // 포인터 사용
{
    int i = 0, *p, rand(); 
    
    for(int k = 0 ; k < n ; k++) 
    {
        R[i] = rand() % 100; // 난수에서 100을 나눈 나머지를 R[i]에 입력
        printf("%2d ", R[i]); // 출력
    }
    printf("\n");
}