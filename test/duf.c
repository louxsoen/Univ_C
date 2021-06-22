#include <stdio.h>
#include <string.h>

int main()
{
    char num[20] = "010-1111-9999";
    char *ptr = strtok(num, "-");


    while (ptr != NULL)
    {
        printf("%s ", ptr);
        ptr = strtok(NULL, "-");
    }
    return 0;
}