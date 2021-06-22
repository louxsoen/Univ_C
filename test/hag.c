#include <stdio.h>

void swap();

int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}