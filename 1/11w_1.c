#include <stdio.h>
#include <string.h>
#define MAX_SIZE 128

int main()
{
    char set[MAX_SIZE] = ""; // 암호화할 문장을 입력 받을 배열
    int key = 0; // 키 값을 입력받을 변수
    
    printf("문자열? ");
    fgets(set, sizeof(set), stdin); // 문자열 받기

    printf("암호 키(정수)? ");
    scanf(" %d", &key); // 암호키 받기

    for(int i = 0 ; i < strlen(set) ; i++) // 모든 문자열에 암호키만큼 더함
        set[i] += key;

    set[strlen(set)-1] = '\0'; // 문자열 맨 끝에 줄바꿈 문자를 제거하는 코드
    printf("암호화된 문자열: %s\n", set); // 출력

    return 0; // 정상 종료
}