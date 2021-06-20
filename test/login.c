#include <stdio.h>
#include <string.h>
#define ID_SIZE 16
#define PW_SIZE 128 

int main()
{
    const char id[ID_SIZE];
    const char pw[PW_SIZE];
    printf("ID : ");
    fgets(ID_SIZE, sizeof(ID_SIZE)/sizeof(char), stdin);

    if(strlen(ID_SIZE) > ID_SIZE )
    {
        puts("아이디 길이가 너무 깁니다.");
    }
    if(strlen(PW_SIZE) > PW_SIZE )
    {
        puts("패스워드 길이가 너무 깁니다.");
    }
    
    printf("아이디 : %s", id)
    ;
    printf("비밀번호 : %s", pw);
}