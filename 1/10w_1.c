#include <stdio.h>
#include <ctype.h>
#define size 128

int main()
{   
    char str[size] = ""; // str[size]는 입력 받은 문자를 기록하는 문자열
    int count = 0; // count 변수는 영문자의 개수를 저장하는 변수
    fgets(str, sizeof(str), stdin); // 줄바꿈하기 전까지 한 줄을 입력 받는다.
    
    for(int i = 0 ; i < size ; i++) // size만큼 계산하기
    {
        if(isalpha(str[i]) != 0) // isalpha가 0이 아니면 영문자다.
            count++; // 영문자 개수에 하나 더하기
    }

    printf("영문자의 개수: %d\n", count);

    return 0; // 정상 종료
}