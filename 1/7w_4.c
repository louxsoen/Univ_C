#include <stdio.h>

int main()
{
    float rev[10] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
    float inv[10];

    printf("배열: "); // 배열 출력
    for(int i = 0 ; i < 10 ; i++) 
    {
        printf("%.1f ", rev[i]); //배열 출력
    }
    printf("\n");

    printf("역순: "); // 역순 출력
    for(int k = 0 ; k < 10 ; k++) 
    {
        inv[k] = rev[9-k]; // rev에서 9-k번째 있는 수를 inv k에 맞추는걸 반복하면 인버스됨
        printf("%.1f ", inv[k]); // 인버스 배열 출력
    }
    printf("\n");

    return 0; // 정상 종료
}