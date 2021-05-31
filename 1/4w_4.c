#include <stdio.h>

int main()
{
    int first;
    int second;
    int third;
    int max;

    printf("Input 3 values: ");
    scanf("%d %d %d", &first, &second, &third);
    
    max = (first > second) && (first > third) ? first : (second > first) && (second > third) ? second : third;
    printf("Max : %d\n", max);
}