#include <stdio.h>

int main()
{  
    int x[3][3], y[3][3]; // x, y 3x3 배열 선언
    printf("x 행렬:\n");
    for(int i = 0 ; i < 3 ; i++) // x 입력
    {
        printf(" ");
        for(int k = 0 ; k < 3 ; k++)
            scanf("%d", &x[i][k]);
    }

    printf("y 행렬:\n");
    for(int i = 0 ; i < 3 ; i++) // y 입력
    {
        printf(" ");
        for(int k = 0 ; k < 3 ; k++)
            scanf("%d", &y[i][k]);
    }

    printf("x + y 행렬:\n");
    for(int i = 0 ; i < 3 ; i++) // x + y 출력
    {
        for(int k = 0 ; k < 3 ; k++)
            printf("%d ", x[i][k] + y[i][k]); 
        
        printf("\n");
    }

    return 0; // 정상 종료
}