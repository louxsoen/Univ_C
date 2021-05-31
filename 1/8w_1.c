#include <stdio.h>

int main()
{
    // 배열 설정
    int n, *p, a[10] = {12, 54, 23, 43, 87, 31, 67, 92, 79, 7};
    
    for(int i = 0 ; i < 10 ; i++) // 10번 수행
    printf("%d ", a[i]); // 배열 a 출력

    printf("\n정수? "); 
    scanf("%d", &n); 
    
    for(int i = 0 ; i < 10 ; i++) // 10번 수행
    {
        p = &a[i]; // p는 배열 
        printf("%d ", *p + n); // 포인터로 받은 값에 n 플러스
    }

    printf("\n");
    
    return 0;

}