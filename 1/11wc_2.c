#include <stdio.h>
#include <ctype.h>
#define size 256

int main()
{   
    char str[size] = ""; // str[size]는 입력 받은 문자를 기록하는 문자열
    int upper = 0, lower = 0; // upper는 대문자, lower는 소문자를 기록하는 변수
    
    printf("input str: ");
    fgets(str, sizeof(str), stdin); // 줄바꿈하기 전까지 한 줄을 입력 받는다.
    
    for(int i = 0 ; i < size ; i++) // size만큼 계산하기
    {
        if(isupper(str[i]) != 0) // isupper가 0이 아니면 대문자다.
            upper++; // 대문자 변수에 값 하나 추가
        if(islower(str[i]) != 0) // islower가 0이 아니면 소문자다.
            lower++; // 소문자 변수에 값 하나 추가
    }

    printf("Uppercase letters: %d\n", upper); // 대문자 출력
    printf("Lowercase letters: %d\n", lower); // 소문자 출력

    return 0; // 정상 종료
}