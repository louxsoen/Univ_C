#include <stdio.h>

void get_min_max(int *min, int *max, int *arr, int n)
{
    int i;
    *min = *max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }   
}

int main()
{
    int a[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
    int min, max, i;

    get_min_max(&min, &max, a, 10);
    
    printf("배열:");
    for (i = 0 ; i < 10 ; i++)    printf(" %d", a[i]);
    puts("");
    printf("최대값: %d\n최소값: %d\n", max, min);
    return 0;
}