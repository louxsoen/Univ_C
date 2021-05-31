#include <stdio.h>

void get_leap(); // 컴파일러에게 get_leap라는 함수가 있음을 알린다.

int main()
{
    get_leap(); // 윤년을 출력하는 함수를 호출
}


// 윤년 출력하는 함수
void get_leap()
{
    int year = 2000; // year은 0부터 시작한다.

    while(year < 2100) // year가 2100보다 크거가 같을 때 그만 둔다
    {
        for(int i = 0 ; i < 10 ; year++)
        {
            // 윤년만 출력하는 문
            if((year%4 == 0) && (year%100 != 4) || (year%400) == 0)
            {
                // year이 2100보다 커도 for문을 다 거치지 않았기에 while 조건이 작동하지 않는 현상을 방지하기 위한 if문
                if(year < 2100) 
                printf("%d ", year); 
                i++; // i 증감
            }
        }
        printf("\n");
    }
}

