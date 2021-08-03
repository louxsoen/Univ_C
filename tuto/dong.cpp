#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void mergesort(int * start, int * end)
{
    if (start + 1 >= end)       return;
    
    int size = end - start;
    int *p1 = start;
    int *p1_end = start + (size + 1) / 2;
    int *p2 = p1_end;
    int *p2_end = end;

    mergesort(p1, p1_end);
    mergesort(p2, p2_end);

    int *tmp = (int *)malloc(sizeof(int) * size);
    int *tmmp = tmp;

    while(true)
    {
        if ( *p1 > *p2 )
        {
            *tmmp = *p2;    p2++;
        }
        else
        {
            *tmmp = *p1;    p1++;
        }
        tmmp++;

        if (p1 == p1_end)
        {   
            memcpy(tmmp, p2, sizeof(int)*(p2_end - p2));  break;
        }
        else if(p2 == p2_end)
        {
            memcpy(tmmp, p1, sizeof(int)*(p1_end - p1));  break;
        }


    }
    
    memcpy(start, tmp, sizeof(int) * size);
    free(tmp);
}

int main()
{
    int num;
    scanf(" %d", &num);
    int arr[num];
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0 ; i < num ; i++)
    {  
        int sk;
        scanf(" %d", &sk);
        arr[i] = sk;
    }

    mergesort(arr, arr + size);

    for(int i = 0 ; i < size ; i++)     printf("%d ", arr[i]);
    puts("");

}