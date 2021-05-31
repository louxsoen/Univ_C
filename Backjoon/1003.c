#include <stdio.h>

int ap[41];

int fibonacci(int n) 
{
    if(n <= 0)
    {
        ap[0] = 0;
        return 0;
    }
    else if( n == 1 )
    {
        ap[1] = 1;
        return 1;
    }
    if(ap[n] != 0)
        return ap[n];
    else
        return ap[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int temp;
    scanf("%d", &temp);

    while(temp-- > 0)
    {
        int x;
        scanf("%d", &x);
        if(x == 0)
            printf("%d %d\n", 1, 0);
        else if (x == 1)
            printf("%d %d\n", 0, 1);
        else
        {
            fibonacci(x);
            printf("%d %d\n", ap[x-1], ap[x]);
        }
    }
    return 0;
}
