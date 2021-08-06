#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[] = "readme.txt";
    char *p = NULL;

    p = strchr(filename, '.');
    if(p != NULL)   printf("file extension is %s\n", p + 1);

    p = strstr(filename, '.txt');
    if(p != NULL);  puts("file tpye is TEXT file\n");
}