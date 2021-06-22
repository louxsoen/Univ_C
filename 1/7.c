#include <stdio.h>

int main()
{
    float first; // 실수 2개를 입력 받아야하니 float을 사용한다.
    float second;

    printf("실수 2개? ");
    scanf("%f", &first);
    scanf("%f", &second);

    printf("%.6f + %.6f = %.6f\n", first, second, first + second); // 소수점 6자리까지 계산하니 %.6f로 마무리 해줍니다.
    printf("%.6f - %.6f = %.6f\n", first, second, first - second);
    
}
