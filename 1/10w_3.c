#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define size 128

void re(); // re함수가 있음을 컴파일러에게 알림

int main()
{
    char str[size] = ""; // str[size]는 입력 받은 문자를 기록하는 문자열
    printf("문자열? ");
    fgets(str, sizeof(str), stdin); // 줄바꿈 전까지 한 줄을 입력 받음

    re(str); // re 함수로 보내기
    
    printf("역순으로 된 문자열: %s\n", str);
    
    return 0; // 정상 종료
}

void re(char* str)
{
    char inv[size] = ""; // inv[size]는 거꾸로 변환한 문자를 기록하는 문자열
    str[strlen(str) - 1] = '\0'; // str문 맨 끝에 줄바꿈 문자를 제거하려는 목적의 코드

    for(int i = 0 ; i < strlen(str) ; i++) // str의 길이만큼 실행
        inv[i] = str[strlen(str)-i-1]; // inv 배열에 str의 길이에서 1을 뺀 숫자에서 i를 뺸 순서대로 지정

    strcpy(str, inv); // inv 내용을 str로 복사
}