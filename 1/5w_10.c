#pragma warning(disable:4339)
#pragma warning(disable:6033)
#include <stdio.h>

int main()
{
    int kwh, total, basic;
    goto re;

    re:
    printf("월 사용량 (kWh)? ");
    scanf("%d", &kwh);

    if(kwh == 0) // 0 이 입력될 경우
    {
        return 0; // 정상 종료
    }
    else // 0 이 아닌 경우
    {
        for(;;) // 무한반복
        {
            if(kwh > 300) // kwh가 300 이상일 경우 
            {
                basic = 5000;
                total = basic + 30000 + (kwh - 300) * 200; // 누진세 계산
            }
            else if ( kwh <= 300 && kwh >= 0) // 0 ~ 300일 경우
            {
                basic = 1000;
                total = basic + kwh * 100; // 기존 가격
            }
            else // 그외 잘못된 가격일 경우
            {
                printf("Input error!\n");
                break;
            }

            // 출력
            printf("전기 요금 합계: %d원\n", total);
            printf(" - 기본요금: %d원\n", basic);
            printf(" - 전력량요금: %d원\n", total - basic);  
            
            // 다시 재입력으로 goto
            goto re;
        }
    }
}