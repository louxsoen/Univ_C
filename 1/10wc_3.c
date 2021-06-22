#include <stdio.h>

void printMat(); // printMat이라는 함수가 있음을 컴파일러에게 알리는 함수

int main()
{
    int width, height; // 가로와 세로를 저장할 변수
    int data[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 자료를 저장

    width = sizeof(data[0]) / sizeof(int); // 가로는 data[0]크기 나누기 int 바이트 수
    height = sizeof(data) / sizeof(data[0]); // 세로는 data의 크기 나누기 data[0]의 크기
    
    printMat(data, width, height); // 함수에 데이터와 가로 세로를 보낸다

}

void printMat(int arr[3][4], int a, int b) // arr 배열과 행 열 크기를 받는다.
{
    for(int i = 0 ; i < b ; i++)
    {
        for(int k = 0 ; k < a ; k++)
            printf(" %2d", arr[i][k]); // 출력
       
        printf("\n");
    }

}

