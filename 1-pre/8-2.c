#include <stdio.h>

int main()
{
    double a[3];
    double *p = a;
    
    for(int i = 0 ; i < 3 ; i++)    printf("x[%d]의 주소: %p\n", i, p);
}