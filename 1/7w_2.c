#include <stdio.h>

int main() 
{
    int a, r; // 첫 번째 항 : a, 공차 : r로 설정
    int g[10]; // g 10칸 배부
    
    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &r);

    g[0] = a; // 첫 g는 첫 항과 같으니 a로 설정
    printf("등차수열 : %d ", g[0]); // g 배열의 첫 번째 문자, 즉 첫 항을 출력
    // 첫 항이 g[0]인데 만약 int i = 1이 아닌 int i = 0 부터 시작하면
    // g[i] = g[-1] + r이 되니 zsh: abort 오류가 출력
    for (int i = 1; i < 10; i++) 
    {
        g[i] = g[i - 1] + r; // 항에 공차를 더하면 된다.
        printf("%d ", g[i]); // g배열 출력
    }
    printf("\n");

    return 0; // 정상 종료

}