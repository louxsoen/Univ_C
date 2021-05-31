#include <stdio.h>

void arrSum(); // arrSum과 out 함수가 있음을 컴파일러에게 알림
void out();

int main()
{
    int arrX[4] = { -2, 4, 6, -32 };  // 배열 선언
    int arrY[4] = { 4, 3, -5, 6 };
    int arrZ[4] = {0};

    arrSum(&arrX, &arrY, &arrZ, sizeof(arrZ) / sizeof(int)); // arrX~Z까지 차례로 보내고 배열의 크기를 보냄

    printf("arrX:"); // arrX를 출력 ( out 함수로 보냄 )
    out(arrX, 4);
    printf("arrY:"); 
    out(arrY, 4);
    printf("arrZ:");
    out(arrZ, 4); 

}

void arrSum(int* pX, int* pY, int *pZ, int size) 
{
    for(int i = 0 ; i < size; i++) // 배열의 크기보다 작다는 조건을 만족할 때
        pZ[i] = pX[i] + pY[i]; // pZ의 i번째 변수는 pX, pY의 i번째 숫자를 더한 값을 저장

}

void out(int *a, int size) // 배열을 끝까지 출력해주는 함수.
{
    for (int i = 0 ; i < size ; i++) // 배열의 크기보다 작다는 조건을 만족할 때
    printf(" %d", a[i]); // 배열 출력
    
    printf("\n"); // 깔끔하게 띄어쓰기
}