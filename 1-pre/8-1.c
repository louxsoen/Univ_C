#include <stdio.h>

int main()
{
    double a[10] = {0.1, 2, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2};
    double *p = a;
    
    for(int i = 0; i < 10 ; i++)    printf("%.2lf ", p[i]);
    puts("");
}