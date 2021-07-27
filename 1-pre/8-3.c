#include <stdio.h>

int main()
{
    int a[10] = {12, 54, 23, 43, 87, 31, 67, 91, 79, 7};
    int *p = a;
    int num;

    for(int i = 0 ; i < 10; i++)    printf("%d ", a[i]);
    puts("");
    
    printf("정수? ");
    scanf(" %d", &num);

    for(int i = 0 ; i < 10; i++)
    {
        p[i] += num;
        printf("%d ", p[i]);
    }    
    puts("");
}   
