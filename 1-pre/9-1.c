#include <stdio.h>
#include <string.h>
#define MAX_STR_SIZE 100

int main(void)
{
    char filename[MAX_STR_SIZE];
    char extension[MAX_STR_SIZE];

    printf("파일명? ");
    scanf("%s", filename);
    
    printf("확장자? ");
    scanf("%s", extension);

    printf("전체 파일명 : %s.%s\n", filename, extension);

    return 0;
}