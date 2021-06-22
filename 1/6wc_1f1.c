#include <stdio.h>

int main()
{
    double val; // 값을 받아오고 저장하는 변수
    int count; // 몇 번 계산이 이루어 졌는지 확인하는 변수

    for( count=0 ;  ; count++)
    {
        printf(">> input value: ");
        scanf("%lf", &val);

        if(val == 0)
        {
            if(count == 0)
            {
                printf("-> Only %.0f entered!", val);
                break;
            }
            else
            {
                val += val;
                break;
            }
        }  
        else
        {
            printf("결과값 Sum: %lf, Ave: %lf", val, val/count);
            return 0;
        } 
    }

    printf("-> Sum: %lf, Ave: %lf", val, val/count);
}
