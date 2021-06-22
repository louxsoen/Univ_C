#include <stdio.h>

void get_min_max();

int main()
{
    // min은 최소값을 저장할 변수, max는 최대값을 저장할 변수
    int max, min, a[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
    int *p = a; // a 배열의 주소를 받는다.

    printf("배열 :"); 
    for(int i = 0 ; i < 10 ; i++) // 10번 실행하는 함수
    printf(" %d", *(p + i)); // 배열 인덱스 전체 출력을 위해 p에 i출력
    
    printf("\n"); // 줄 바꿈
    get_min_max(a, &max, &min); // 함수로 변수 보내기

    printf("최대값: %d\n", max); // 최대값 최소값 출력
    printf("최소값: %d\n", min);
}
// get_min_max의 *max는 main 함수의 max 변수를 가져옴. *min도 동일
void get_min_max(int a[], int *max, int *min)
{
    *max = a[0]; // *max는 배열 a의 첫 부분으로 초기화
    *min = a[0]; // ""

    for(int i = 0 ; i < 10 ; i++) // 10번 수행
    {
        if (*min > a[i]) // 다음 변수보다 min이 크면
            *min = a[i]; // 해당 배열의 숫자를 min으로 설정
        if (*max < a[i]) // 다음 변수보다 max가 작으면
            *max = a[i]; // 해당 배열의 숫자를 max로 설정
    }
}