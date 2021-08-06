#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char *p = NULL;
    
    printf("영문 이름? ");
    scanf("%s", input);
    
    printf("%c", input[0]);
    p = strchr(input, ' ');
    if(p != NULL)
    {
        printf("%s", p + 1);
    }
    
}