#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)


int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int arr[10];
    
    arr[0] = a;
    for (int i = 1; i < 10; i++)        arr[i] = arr[i-1] + b;

    for (int j = 0; j < 10; j++)        printf("%d ", arr[j]);
}