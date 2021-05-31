#include <stdio.h>

void inv(); // inv라는 함수가 있음을 컴파일러에게 알림

int main()
{
    int vOne[] = { 15, 18, 10, 4, 27 };
    int vTwo[] = { 2, -4, 6, 9, 21, 44};
    int one, two, mid; // one, two는 각자 배열의 크기를 저장할 변수, mid는 중위수

    one = sizeof(vOne)/sizeof(int); // vOne 배열크기 저장
    two = sizeof(vTwo)/sizeof(int); // vTwo 배열크기 저장

    inv(vOne, one, &mid);
    printf("vOne 배열 중위수 : %d\n", mid);
    inv(vTwo, two, &mid);
    printf("vTwo 배열 중위수 : %d\n", mid);
    
    // 배열 출력
    printf("vOne 배열 :");
    for(int i = 0 ; i < one ; i++)
        printf(" %d", vOne[i]);

    puts(""); // 줄바꿈

    printf("vTwo 배열 :");
    for(int i = 0 ; i < two ; i++)
        printf(" %d", vTwo[i]);

    puts(""); // 줄바꿈
    
    return 0; // 정상 종료
}

void inv(int* arr, int size, int *mid) // 오름차순으로 정렬하는 함수
{
    int temp; // 임시값을 저장할 변수

    for(int i = 0 ; i < size ; i++) // BubbleSort 함수
    {
        for(int k = 0 ; k < size - 1 - i ; k++)
        {
            if(arr[k] > arr[k+1]) // < 면 내림차순 > 면 오름차순
            {
                temp = arr[k]; // arr i 과 arr i+1 을 스위치 해준다
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    // 중위수를 구하는 함수
    if(size % 2 == 1) // 배열의 크기가 홀수인 경우
        *mid = arr[(size + 1)/2 - 1]; // n+1/2번째 위치에 있는 값
    else if(size % 2 == 0) // 배열의 크기가 짝수인 경우
        *mid = (arr[size/2 - 1] + arr[size/2]) / 2; 
        // n/2 번째 위치 값과 n/2 +1 번째 위치의 값을 더한 후 2로 나눔 값
}
