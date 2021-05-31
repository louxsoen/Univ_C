#include <stdio.h>

struct birthday // birthday 구조체 생성
{
    int year; // 연도
    int month; // 월
    int day; // 날
};

int main()
{
    struct birthday t1 = { 1995, 7, 5 }; // 구조체 초기화
    printf("생년월일: %d년 %d월 %d일생\n", t1.year, t1.month, t1.day); // 출력

    return 0; // 정상 종료
}