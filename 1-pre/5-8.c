#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 32 ; i < 127 ; i++)
    {   for(j = 0 ; j < 24 ; j++)
        {
            if(i < 127)
            {
                printf("%c ", i);       i++;
            }
        }
        puts("");
    }
}