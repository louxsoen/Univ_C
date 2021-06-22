#include <stdio.h>

struct test
{
    char    name[10];
    int     score;
};

int main()
{
    struct test s[] = 
    {
        {"LEE", 100},
        {"PST", 50},
        {"HAK", 30}
    };

    int size = sizeof(s) / sizeof(s[0]);

    for(int i = 0; i < size ; i++)
        printf("s[%d] : %s %d\n", i, s[i].name, s[i].score);

}