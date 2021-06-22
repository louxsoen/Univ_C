#pragma (disable:6033)
#pragma (disable:4339)
#include <stdio.h>

int main()
{   
    double cel; // 섭씨
    double fahr; // 화씨
    char type;

    printf("온도? ");
    scanf("%lf %c", &cel, &type);

    if (type == 'C')
    {
    fahr = 1.8 * cel + 32;

    printf("%.2lf C == %.2lfF\n", cel, fahr);
    } 
    else if (type == 'F')
    {
    cel = (fahr - 32)*0.55;

    printf("%.2lf F == %.2lfC\n", fahr, cel);
    }
}