#include <stdio.h>
#define n 7 // define으로 n을 7로 지정해서 7번 값을 받을 수 있도록 함.

int main()
{
    int input[n], max, min;  
    // max는 가장 큰 값, min은 가장 작은 값을 저장 input은 입력받은 값 저장

    // 입력받은 함수
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d번째 입력: ", i+1);
        scanf("%d", &input[i]);
    }

    //max와 min은 모두 input배열의 첫번째 값으로 지정한다.
    max = input[0], min = max;
    for(int k = 0 ; k < n ; k++)
    {
        if(max < input[k]) // max가 input[k]보다 작으면 input[k]가 max로 들어간다.
        max = input[k];
        
        if(min > input[k]) // min이 input[k]보다 크면 input[k]가 min으로 들어간다
        min = input[k];
    }
    printf("\n"); // 줄바꿈
    // 계산된 값을 출력
    printf("가장 큰 값: %d\n", max); 
    printf("가장 작은 값: %d\n", min);

    return 0; // 정상적 종료
}