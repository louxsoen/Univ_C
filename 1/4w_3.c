#include <stdio.h>

int main()
{
    int a = 3, b = 0;
    printf("%d, %d \n", a, b);

    b = ++ a * 2;
    printf("%d, %d \n", a, b);
    
    a = b-- * 2;
    printf("%d, %d \n", a, b);
    
    a += a * b;
    printf("%d, %d \n", a, b);
}