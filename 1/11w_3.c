#include <stdio.h>

struct complex_number // 구조체 생성
{
    int real_part; // 실수 부분 변수
    int imaginary_part; // 허수 부분 변수
};

int main()
{
    struct complex_number n1 = { 4, 5 }; // 구조체 초기화
    printf("%d + %d!\n", n1.real_part, n1.imaginary_part); // 출력

    return 0; // 정상 종료
}
