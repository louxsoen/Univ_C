#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>

double get_line(); // get_line이라는 함수가 있음을 알림

int main()
{
    double x1, x2, y1, y2; // 시작점 좌표(x1, y1), 끝점 좌표(x2, y2)
    printf("직선의 시작점 좌표? ");
    scanf("%lf %lf", &x1, &y1);

    printf("직선의 끝점 좌표? ");
    scanf("%lf %lf", &x2, &y2);

    printf("(%.0lf, %.0lf)~(%.0lf, %.0lf) 직선의 길이: %f\n", x1, x2, y1, y2, get_line(x1, x2, y1, y2));
    /*
    x1, x2, y1, y2 순서대로 함수를 get_line는 함수로 값을 대입해서 받는다.
    */

    return 0; // 정상 종료
}
// 두 점 x, y 좌표의 직선거리를 구해주는 함수
double get_line(double a, double b, double c, double d) // 차례대로 x1, x2, y1, y2 값을 받는다.
{
    double total; // total이라는 변수 선언
    // 두 점 좌표의 거리를 구하는 공식은 루트{(x2-x1)^2 + (y2-y1)^2}이다.
    double x = b - a; 
    double y = d - c;
    total = sqrt((x*x) + (y*y)); // 공식 대입
    return total; // total 값을 반환
}
