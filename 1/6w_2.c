#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int get_area(int x, int y); // get_area라는 함수가 있음을 컴파일러에게 알려준다.

int main()
{
    int width, height; //width는 가로길이, height는 세로길이를 받는 함수
    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    printf("직사각형의 둘레: %d\n", get_area(width, height));
    // get_area 함수에 weight과 height변수의 값을 보낸다.
    
    return 0;
}

// 직사각형의 둘레를 구하는 함수
int get_area(int x, int y) // x는 메인 함수의 width, y는 height의 값을 받는다.
{
    int area = 2 * (x + y); // 직사각형의 둘레를 구하는 공식
    return area; //  area 값을 반환
}