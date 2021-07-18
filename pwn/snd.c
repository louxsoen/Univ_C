#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, ans;

    a = rand() % 20000;
    b = rand() % 20000;

    for(int i = 1 ; i < 101 ; i++)
    {
        printf("#%d: %d + %d = ?\n", i, a, b);
        printf("> ");
        scanf("%d", &ans);

        if (a + b == ans)   printf("Correct\n");
        else
        {
            puts("Wrong");
            return 0;
        }
    }

    printf("flag {pwn_1}\n");
}