#include <stdio.h>
#pragma warning(disable:6031)
#pragma warning(disable:4996)

int main(void)
{
    int tmp;
    unsigned char red, green, blue;
    printf("red? ");        scanf(" %d", &tmp);         red = tmp;
    printf("green? ");      scanf(" %d", &tmp);       green = tmp;
    printf("blue? ");       scanf(" %d", &tmp);        blue = tmp;

    printf("RGB 색상: %02X%02X%02X\n", blue, green, red);

    return 0;
}