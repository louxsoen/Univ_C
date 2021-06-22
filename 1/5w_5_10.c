#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y; // x, y를 더블형으로 선언한다.
    char op; // 입력받을 산술 기호를 캐릭터형으로 선언
    double result = 0; // 결과 값을 저장할 더블형 변수 선언 후 0으로 초기화
    char yesno = 'Y'; // 계속 진행할 지 여부를 판별하는 변수 선언
    
    while (yesno == 'Y' || yesno == 'y'){ // 소문자 y또는 대문자 Y가 입력될 경우 아래 {} 안에 있는 함수를 반복
        printf("수식? "); // 계산기 프로그램 실행
        scanf("%lf %c %lf", &x, &op, &y); 

        if (op == '+') // +가 입력된 경우 x + y
            result = x + y;
        else if (op == '-') // -가 입력된 경우 x - y
            result = x - y; 
        else if (op == '*') // *가 입력된 경우 x * y
            result = x * y;    
        else if (op == '/') // /가 입력된 경우 x/y
            result = x / y;
        else 
        {
            printf("잘못된 수식입니다.\n"); // 그외 잘못된 값이 입력될 경우
            return 1; // return 1로 오류를 표시해준다.
        }  
    printf("%f %c %f = %f\n", x, op, y, result); // 출력

    printf("계속 하시겠습니까(Y/N)? "); // 계속 할 지 여부를 알아본다
    scanf(" %c", &yesno);
    }
}
