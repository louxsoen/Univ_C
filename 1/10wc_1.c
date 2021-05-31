#include <stdio.h>
#define SIZE 5

void SelSort();

int main()
{
    int data[SIZE] = { 52, 31, 28, 17, 46 }; // 기본 설정

    printf("정렬 전:"); // 정렬전 출력
    for (int i = 0; i < SIZE; i++)
        printf(" %d", data[i]); // 출력
    printf("\n");

    printf("정렬 후:"); // 정렬 후 출력
    SelSort(data, SIZE); // SelSort 함수로 data 배열과 SIZE 보내기
    printf("\n");

    return 0; // 정상 종료
}

void SelSort(int data[], int size) 
{
    int temp; // 값을 임시 저장할 변수

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
             /* 
             data 배열 j번째 값이 j+1보다 크면 temp 에 j번째를 저장
             그리고 j번째엔 j+1 저장하고 temp값을 j+1에 저장 -> 위치 바꿈
             */
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    
    //결과값 출력
    for (int i = 0; i < size; i++)
        printf(" %d", data[i]);
}