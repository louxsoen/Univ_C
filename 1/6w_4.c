#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

double get_sale(); // get_sale 함수가 있음을 알림

int main()
{
    double sale, price, total; 
    // sale은 할인율, price는 제품의 가격, total은 제품의 가격과 할인율을 계산한 변수

    printf("할인율(%%)? ");
    scanf("%lf", &sale);

    for (;;) // 무한루프
    {
        printf("제품의 가격? ");
        scanf("%lf", &price);

        if(price == 0) // price가 0일 경우
        {
            return 0; // 정상 종료
        }
        else // 0이 아닐 경우
        {
        total = get_sale(sale, price); // get_sale 함수에 sale, price 값을 보내서 반환 받은 값을 total에 저장

        printf("할인가: %0.lf\n", total); // total 출력

        continue; // 반복문 처음으로 돌아가기
        }
    
        break;

        /* 
        위 continue와 break 코드는 현재 코드에서는 안 써도 되는 코드지만
        추후 프로그램 설계할 때 오작동 방지를 위해 사용합니다.
        */
    }
        
}
// 할인된 가격을 계산해주는 함수
double get_sale(double sale, double price) // 더블 형태로 sale과 price 값을 받음
{
    double total; // total이라는 변수 선언
    total = price - ((price / 100) * sale); // 할인가를 구하는 함수
    return total; // total값을 반환 
}