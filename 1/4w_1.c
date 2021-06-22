#include <stdio.h>

int main()
{
    int no = 10, count = 20;
    char ch = 'a';
    printf(" %d", no > count); 
    printf(" %d", no < count * 4);
    printf(" %d", (no != 10) || (count >= 20));
    printf(" %d", (no != 10) && (count >= 20));
    printf("\n-----\n");
    printf(" %d \n", !(no > count));
    printf(" %d \n", 3);
    printf(" %d \n", ch);
    printf(" %d \n", 'b');
    printf(" %d \n", sizeof(3.2));
    printf(" %d \n", sizeof(3.2f));
    printf(" %d \n", sizeof(float));
    printf(" %d \n", sizeof(double));

}