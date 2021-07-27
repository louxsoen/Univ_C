#include <stdio.h>

int main()
{
    double a[5];
    double *p = a;
    double sum = 0;
    
    printf("실수 5개를 입력하세요. ");
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%lf", &p[i]);
        sum += p[i];
    }
    printf("합계 : %lf\n", sum);
}