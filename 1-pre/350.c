#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char books[5][30] = 
    {
        "wonder", "me before you", "the hunger games", "twilight", "harry potter"
    };
    
    for(int i = 0 ; i < 5 ; i++)        printf("%s\n", books[i]);

    for(int i = 0 ; i < 5 ; i++)
    {
        if (islower(books[i][0]))       books[i][0] = toupper(books[i][0]);
    }
    
    puts("<< 변경 후 >>");
    for(int i = 0 ; i < 5 ; i++)        printf("%s\n", books[i]);

    return 0;
}