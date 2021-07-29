#include <stdio.h>

int main()
{
    int arr[3][3];

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int k = 0 ; k < 3 ; k++)
        {
            arr[i][k] = 3;
        }
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int k = 0 ; k < 3 ; k++)
        {
            printf("%d ", arr[i][k]);
        }
        puts("");
    }
}