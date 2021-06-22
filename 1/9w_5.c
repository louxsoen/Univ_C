#include <stdio.h>

int main()
{
    int gugu[9][9] = { 0 };
    int i, j;
    for( i = 1 ; i <= 9 ; i++)
        for (j = 1 ; j <= 9 ; j++)
        {
            gugu[i-1][j-1] = i*j;
        }

    for( i = 1 ; i <= 9 ; i++)
    {
        for ( j = 1 ; j <= 9; j++)
            printf("%d*%d=%d ", i, j, i*j);
        printf("\n");
    }
}