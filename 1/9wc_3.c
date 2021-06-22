#include <stdio.h>
#include <math.h>

void tri(); // tri 라는 함수가 있음을 컴파일러에게 알려줍니다.

int main() 
{
    double x, y; // x는 가로의 길이, y는 세로의 길이를 입력 받을 변수

    printf("가로의 길이를 입력하시오. ");
    scanf("%lf", &x);
    printf("세로의 길이를 입력하시오. ");
    scanf("%lf", &y);

    tri(&x, &y); // tri 함수로 이동

    printf("해당 삼각형의 넓이는 %.1lf입니다.\n", x); // 여기서 x는 넓이로 볍경 (포인터)
    printf("해당 삼격형의 둘레는 %.1lf입니다.\n", y); // 여기서 y는 둘레로 변경 (포인터)

    return 0;
}

void tri(double *w, double *h) // 포인터로 받음
{
    int x = *w; // *w 값을 x에 저장 (x는 가로의 길이)
    int y = *h; // *h 값을 y에 저장 (y는 세로의 길이)
    
    *w = x * y / 2; // 넓이 구해서 *w -> x 로 설정
    *h = 3 * x; // 둘레 구해서 *h -> y로 설정
}
