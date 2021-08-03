#include <stdio.h>
#include <string.h>

int main()
{
    char str[256] = "";

    fgets(str, sizeof(str), stdin);

    puts(str);

}