#include <stdio.h>
#include <string.h>

struct content
{
    char    title[40];
    int     price;
    double  rate;
};

int main()
{
    struct content c1 = { "Avengers", 11000, 8.8 };
    struct content c2 = c1;
    struct content c3 = { 0 };

    c3 = c1;

    printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);

}