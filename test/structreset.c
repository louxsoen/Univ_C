#include <stdio.h>

struct test
{
    char a;
    int b;
};

int main()
{
    struct test lee;
    
    printf("%d\n", lee.a);
    printf("%d\n", lee.b);
}