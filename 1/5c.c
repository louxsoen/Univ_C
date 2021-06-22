#pragma disable(4339)
#pragma disable(6033)
#include <stdio.h>

int main()
{
    char a; // 글자를 입력받을 a라는 변수를 캐릭터형으로 선언한다.
    
    printf(">> Input the character: ");
    scanf("%c", &a); // 문자열로 입력 받는다.

    if(a >= 'A' && a <=  'Z') // 대문자가 입력될 경우 소문자로 바꿔준다.
    {
        a+=32; // 아스키코드에서는 소문자 코드가 대문자 코드보다 32만큼 크다.
        goto print; // print로 goto한다.
    }

    if(a >= 'a' && a <= 'z') // 소문자가 입력될 경우 변환없이 바로 goto해준다.
    {
        goto print;   
    }


    
    // 출력하는 곳
    print:
        if( a == 'c') // c가 입력될 경우
        {
            printf("C language.");
        }
        else if( a == 'p') // p가 입력될 경우
        {
            printf("Python."); // j가 입력될 경우
        }
        else if( a == 'j')
        {
            printf("JAVA.");
        }
        else if(a == 'l') // l이 입력될 경우
        {
            printf("LISP.");
        }
        else
        {
            printf("Input error!\n"); // 지정하지 않은 키가 입력되면 오류 표시를 해준다.
            return 1;
        }

        printf("\n"); // 띄어쓰기를 통합하였다.

        return 0; // 정상적 코드 종료
}