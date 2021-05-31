#include <stdio.h>

int main()
{
    int a[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
    int max = a[0], min = a[0]; // 우선 min과 max는 둘 다 첫 번째 배열 숫자로 맞춘다.

    printf("배열: ");
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d ", a[i]); // 배열 출력
        if(max < a[i]) // a[i]가 max보다 크면 max는 a[i]가 되는 작업을 i가 9가 될 때까지 한다.
        max = a[i];

        if(min > a[i]) // a[i]가 min보다 작으면 min은 a[i]가 되는 작업을 i가 9가 될 때까지 한다.
        min = a[i]; 
        
    }
    printf("\n");
    
    printf("최대값: %d\n", max); // 최대값 출력
    printf("최소값: %d\n", min); // 최소값 출력
}