#include <stdio.h>

int main()
{
    int i, j;
    for(i = 0 ; i < 5 ; i++)
        {
            for(j = 4 ; j > i ; j--) //  0-4    1-3    2 - 2   3-1   4-0
            {
                printf("+");
            }
	    
    // i | 0 1 2 3 4   i의 값일 때
    // j | 1 3 5 7 9   번 실행
    for(j = 0 ; j < 2 * i + 1 ; j++) // 0-1 / 
    {
        printf("*");
    }
    printf("\n");
    }
}