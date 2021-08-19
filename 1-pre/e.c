#include <stdio.h>


void print(const char * lang)
{
    printf("%s\n", lang);   
}
int main()
{
    char str[6] = "abcde";
    char *p = str;

    print(p);
}