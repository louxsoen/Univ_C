#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    char word[20];

    do
    {
        printf("단어? ");
        scanf("%s", word);
        strcat(sentence, word);
        strcat(sentence, " ");
    } 
    while (strcmp(word, ".") != 0);
    
    printf("%s\n", sentence);
    
}