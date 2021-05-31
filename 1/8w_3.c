// 8-9 분석
#include <stdio.h>
void swap(int* px, int* py);

int main(void)
{
    int a = 1, b = 2;
    
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}

void swap(int* px, int* py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}