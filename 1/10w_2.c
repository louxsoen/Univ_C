#include <stdio.h>
#include <ctype.h>
#define size 128

int main()
{
    char str[size] = ""; // str[size]는 입력 받은 문자를 기록하는 문자열
    
    printf("문자열? "); 
    fgets(str, sizeof(str), stdin); // 줄바꿈 전까지 한 줄을 입력 받음
    
    for(int i = 0 ; i < size ; i++) // size만큼 반복
    {
        if(islower(str[i]) != 0) // islower가 0이 아니면 소문자이다.
            str[i] = toupper(str[i]); // 대문자로 변경
        
        else if (isupper(str[i]) != 0) // isupper가 0이 아니면 대문자이다.
            str[i] = tolower(str[i]); // 소문자로 변경
    }
    printf("변환후: %s", str); // 출력

    return 0; // 정상 종료
}