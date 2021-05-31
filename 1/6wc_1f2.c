#include <stdio.h>

int main()
{
    double val, avg;
    int count = 0;

    printf(">> input value: ");
    scanf("%lf", &val);
    for(count = 0 ; count < 5 ; count++)
    {
        if(count == 0)
    {
        if(val == 0)
        {
            printf("ONLY %.0f entered!\n", val);
            return 0;
        }
        else
        {
            goto cal;
        }
    }
    else // 정상 값
    {
        if(val == 0)
        {
            break;
        }
        else
        {
        cal:
            val+=val;
        }

    }

    printf("Sum: %lf, Ave: %lf\n", val, val / count );
}
}

/*
만약 count가 0인데 val이 0이라면 ONLY 0 ENTERED 출력
count가 0보다 크고 val이 0이라면 SUM, AVG 출력
val이 0이 아니라면 for분 반복
*/