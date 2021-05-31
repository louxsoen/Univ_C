#include <stdio.h>

void swap(); // swap이라는 함수가 있음을 컴파일러에게 알림

int main()
{
    int a = 3, b = 5; // 변수 선언 및 초기화

    printf("1. a, b: %d, %d\n", a, b); // 함수 호출 전 출력
    swap(&a, &b); // swap 함수를 보냄
    printf("1. a, b: %d, %d\n", a, b); // 함수 호출 후 출력
    
    return 0; // 정상 종료

}
void swap(int *a, int *b) // 포인터로 받음
{
    int temp; // 값을 하나 저장할 변수

    temp = *a; // a가 가르키고 있는 값을 temp로 저장
    *a = *b; // *a에 *b 저장
    *b = temp; // b에다 아까의 a값 저장
}